##' Validate nlmixr
##'
##' This allows easy vaildation/qualification of nlmixr by running the
##' testing suite on your system.
##' @param type of test to be run
##' @param check Use devtools::check to run checks
##' @author Matthew L. Fidler
##' @export
nlmixrValidate <- function(type = NULL, check = FALSE) {
  .tests <- c("cran", "lvl2", "saem", "bootstrap", "broom", "focei")
  .op <- options()
  on.exit(options(.op))
  options(testthat.progress.max_fails=10000000000)
  if (is.character(type)) {
    if (type == "covr") {
      Sys.setenv(NOT_CRAN = "true", covr = "true")
      on.exit({
        setwd(old.wd)
        Sys.unsetenv("nmCran")
      })
      covr::report()
    }
    else {
      if (any(type == .tests)) {
        if (check) {
          devtools::check(env_vars = c(
            NOT_CRAN = "true",
            nmCran = type
          ))
        }
        else {
          old.wd <- getwd()
          on.exit({
            setwd(old.wd)
            Sys.unsetenv("nmCran")
          })
          Sys.setenv(nmCran = type)
          path <- file.path(
            system.file("tests", package = "nlmixr"),
            "testthat"
          )
          setwd(path)
          pt <- proc.time()
          try(testthat::test_dir(path))
          message("================================================================================")
          print(proc.time() - pt)
          message("================================================================================")
        }
      }
      else {
        old.wd <- getwd()
        on.exit({
          setwd(old.wd)
          Sys.unsetenv("nmCran")
        })
        Sys.setenv(nmCran = "true")
        path <- file.path(
          system.file("tests", package = "nlmixr"),
          "testthat"
        )
        setwd(path)
        pt <- proc.time()
        try(testthat::test_dir(path, filter = type))
        message("================================================================================")
        print(proc.time() - pt)
        message("================================================================================")
      }
    }
  }
  else {
    old.wd <- getwd()
    on.exit({
      setwd(old.wd)
      Sys.unsetenv("nmCran")
    })
    path <- file.path(
      system.file("tests", package = "nlmixr"),
      "testthat"
    )
    setwd(path)
    for (t in .tests) {
      Sys.setenv(nmCran = t)
      message(sprintf("%s only tests", t))
      message("================================================================================")
      pt <- proc.time()
      try(testthat::test_dir(path))
      message("================================================================================")
      print(proc.time() - pt)
      message("================================================================================")
    }
  }
}
##' @rdname nlmixrValidate
##' @export
nmTest <- nlmixrValidate
