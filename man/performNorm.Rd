% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/autocovar.R
\name{performNorm}
\alias{performNorm}
\title{Perform normalization of the covariate}
\usage{
performNorm(
  data,
  covariate,
  varName,
  normOp,
  normValVec,
  isLog = FALSE,
  isCat = FALSE,
  isHS = FALSE
)
}
\arguments{
\item{data}{a dataframe consisting the covariates added}

\item{covariate}{a string giving the covariate name; must be present in the data used for 'fit'}

\item{varName}{the variable name to which the covariate is being added}

\item{normOp}{an operator indicating the kind transformation to be done on the covariate}

\item{normValVec}{a numeric value to be used for normalization of the covariate}

\item{isLog}{a boolean indicating the presence of log-transformation in the funstring; default is FALSE}

\item{isCat}{a boolean indicating if the covariate is categorical; default is FALSE}

\item{isHS}{a boolean indicating if the covariate is of Hockey-stick kind; default is FALSE}
}
\value{
a list comprising the update dataframe, the expression for covariate, and a list of covariate names
}
\description{
Perform normalization of the covariate
}
\author{
Vipul Mann, Matthew Fidler
}
