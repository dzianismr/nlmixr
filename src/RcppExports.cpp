// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/nlmixr_types.h"
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// freeFocei
void freeFocei();
RcppExport SEXP _nlmixr_freeFocei() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    freeFocei();
    return R_NilValue;
END_RCPP
}
// preCondInv
SEXP preCondInv(SEXP Rin);
RcppExport SEXP _nlmixr_preCondInv(SEXP RinSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type Rin(RinSEXP);
    rcpp_result_gen = Rcpp::wrap(preCondInv(Rin));
    return rcpp_result_gen;
END_RCPP
}
// foceiInnerLp
NumericVector foceiInnerLp(NumericVector eta, int id);
RcppExport SEXP _nlmixr_foceiInnerLp(SEXP etaSEXP, SEXP idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    rcpp_result_gen = Rcpp::wrap(foceiInnerLp(eta, id));
    return rcpp_result_gen;
END_RCPP
}
// likInner
double likInner(NumericVector eta, int id);
RcppExport SEXP _nlmixr_likInner(SEXP etaSEXP, SEXP idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    rcpp_result_gen = Rcpp::wrap(likInner(eta, id));
    return rcpp_result_gen;
END_RCPP
}
// cholSE_
NumericMatrix cholSE_(NumericMatrix A, double tol);
RcppExport SEXP _nlmixr_cholSE_(SEXP ASEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(cholSE_(A, tol));
    return rcpp_result_gen;
END_RCPP
}
// foceiLik
double foceiLik(NumericVector theta);
RcppExport SEXP _nlmixr_foceiLik(SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(foceiLik(theta));
    return rcpp_result_gen;
END_RCPP
}
// foceiOfv
double foceiOfv(NumericVector theta);
RcppExport SEXP _nlmixr_foceiOfv(SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(foceiOfv(theta));
    return rcpp_result_gen;
END_RCPP
}
// foceiEtas
List foceiEtas();
RcppExport SEXP _nlmixr_foceiEtas() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(foceiEtas());
    return rcpp_result_gen;
END_RCPP
}
// foceiNumericGrad
NumericVector foceiNumericGrad(NumericVector theta);
RcppExport SEXP _nlmixr_foceiNumericGrad(SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(foceiNumericGrad(theta));
    return rcpp_result_gen;
END_RCPP
}
// foceiSetup_
NumericVector foceiSetup_(const RObject& obj, const RObject& data, NumericVector theta, Nullable<LogicalVector> thetaFixed, Nullable<LogicalVector> skipCov, RObject rxInv, Nullable<NumericVector> lower, Nullable<NumericVector> upper, Nullable<NumericMatrix> etaMat, Nullable<List> control);
RcppExport SEXP _nlmixr_foceiSetup_(SEXP objSEXP, SEXP dataSEXP, SEXP thetaSEXP, SEXP thetaFixedSEXP, SEXP skipCovSEXP, SEXP rxInvSEXP, SEXP lowerSEXP, SEXP upperSEXP, SEXP etaMatSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const RObject& >::type obj(objSEXP);
    Rcpp::traits::input_parameter< const RObject& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< Nullable<LogicalVector> >::type thetaFixed(thetaFixedSEXP);
    Rcpp::traits::input_parameter< Nullable<LogicalVector> >::type skipCov(skipCovSEXP);
    Rcpp::traits::input_parameter< RObject >::type rxInv(rxInvSEXP);
    Rcpp::traits::input_parameter< Nullable<NumericVector> >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< Nullable<NumericVector> >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< Nullable<NumericMatrix> >::type etaMat(etaMatSEXP);
    Rcpp::traits::input_parameter< Nullable<List> >::type control(controlSEXP);
    rcpp_result_gen = Rcpp::wrap(foceiSetup_(obj, data, theta, thetaFixed, skipCov, rxInv, lower, upper, etaMat, control));
    return rcpp_result_gen;
END_RCPP
}
// foceiOuterF
double foceiOuterF(NumericVector& theta);
RcppExport SEXP _nlmixr_foceiOuterF(SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(foceiOuterF(theta));
    return rcpp_result_gen;
END_RCPP
}
// foceiOuterG
NumericVector foceiOuterG(NumericVector& theta);
RcppExport SEXP _nlmixr_foceiOuterG(SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(foceiOuterG(theta));
    return rcpp_result_gen;
END_RCPP
}
// foceiOuter
Environment foceiOuter(Environment e);
RcppExport SEXP _nlmixr_foceiOuter(SEXP eSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type e(eSEXP);
    rcpp_result_gen = Rcpp::wrap(foceiOuter(e));
    return rcpp_result_gen;
END_RCPP
}
// nlmixrGill83_
List nlmixrGill83_(Function what, NumericVector args, Environment envir, LogicalVector which, double gillRtol, int gillK, double gillStep, double gillFtol, bool optGillF);
RcppExport SEXP _nlmixr_nlmixrGill83_(SEXP whatSEXP, SEXP argsSEXP, SEXP envirSEXP, SEXP whichSEXP, SEXP gillRtolSEXP, SEXP gillKSEXP, SEXP gillStepSEXP, SEXP gillFtolSEXP, SEXP optGillFSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Function >::type what(whatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type args(argsSEXP);
    Rcpp::traits::input_parameter< Environment >::type envir(envirSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type which(whichSEXP);
    Rcpp::traits::input_parameter< double >::type gillRtol(gillRtolSEXP);
    Rcpp::traits::input_parameter< int >::type gillK(gillKSEXP);
    Rcpp::traits::input_parameter< double >::type gillStep(gillStepSEXP);
    Rcpp::traits::input_parameter< double >::type gillFtol(gillFtolSEXP);
    Rcpp::traits::input_parameter< bool >::type optGillF(optGillFSEXP);
    rcpp_result_gen = Rcpp::wrap(nlmixrGill83_(what, args, envir, which, gillRtol, gillK, gillStep, gillFtol, optGillF));
    return rcpp_result_gen;
END_RCPP
}
// nlmixrEval_
double nlmixrEval_(NumericVector theta, std::string md5);
RcppExport SEXP _nlmixr_nlmixrEval_(SEXP thetaSEXP, SEXP md5SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< std::string >::type md5(md5SEXP);
    rcpp_result_gen = Rcpp::wrap(nlmixrEval_(theta, md5));
    return rcpp_result_gen;
END_RCPP
}
// nlmixrUnscaled_
RObject nlmixrUnscaled_(NumericVector theta, std::string md5);
RcppExport SEXP _nlmixr_nlmixrUnscaled_(SEXP thetaSEXP, SEXP md5SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< std::string >::type md5(md5SEXP);
    rcpp_result_gen = Rcpp::wrap(nlmixrUnscaled_(theta, md5));
    return rcpp_result_gen;
END_RCPP
}
// nlmixrGrad_
NumericVector nlmixrGrad_(NumericVector theta, std::string md5);
RcppExport SEXP _nlmixr_nlmixrGrad_(SEXP thetaSEXP, SEXP md5SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< std::string >::type md5(md5SEXP);
    rcpp_result_gen = Rcpp::wrap(nlmixrGrad_(theta, md5));
    return rcpp_result_gen;
END_RCPP
}
// nlmixrParHist_
RObject nlmixrParHist_(std::string md5);
RcppExport SEXP _nlmixr_nlmixrParHist_(SEXP md5SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type md5(md5SEXP);
    rcpp_result_gen = Rcpp::wrap(nlmixrParHist_(md5));
    return rcpp_result_gen;
END_RCPP
}
// nlmixrHess_
RObject nlmixrHess_(RObject thetaT, RObject fT, RObject e, RObject gillInfoT);
RcppExport SEXP _nlmixr_nlmixrHess_(SEXP thetaTSEXP, SEXP fTSEXP, SEXP eSEXP, SEXP gillInfoTSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type thetaT(thetaTSEXP);
    Rcpp::traits::input_parameter< RObject >::type fT(fTSEXP);
    Rcpp::traits::input_parameter< RObject >::type e(eSEXP);
    Rcpp::traits::input_parameter< RObject >::type gillInfoT(gillInfoTSEXP);
    rcpp_result_gen = Rcpp::wrap(nlmixrHess_(thetaT, fT, e, gillInfoT));
    return rcpp_result_gen;
END_RCPP
}
// sqrtm
NumericMatrix sqrtm(NumericMatrix m);
RcppExport SEXP _nlmixr_sqrtm(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(sqrtm(m));
    return rcpp_result_gen;
END_RCPP
}
// foceiCalcCov
NumericMatrix foceiCalcCov(Environment e);
RcppExport SEXP _nlmixr_foceiCalcCov(SEXP eSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type e(eSEXP);
    rcpp_result_gen = Rcpp::wrap(foceiCalcCov(e));
    return rcpp_result_gen;
END_RCPP
}
// foceiFitCpp_
Environment foceiFitCpp_(Environment e);
RcppExport SEXP _nlmixr_foceiFitCpp_(SEXP eSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type e(eSEXP);
    rcpp_result_gen = Rcpp::wrap(foceiFitCpp_(e));
    return rcpp_result_gen;
END_RCPP
}
// boxCox_
NumericVector boxCox_(NumericVector x, double lambda, int yj);
RcppExport SEXP _nlmixr_boxCox_(SEXP xSEXP, SEXP lambdaSEXP, SEXP yjSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type yj(yjSEXP);
    rcpp_result_gen = Rcpp::wrap(boxCox_(x, lambda, yj));
    return rcpp_result_gen;
END_RCPP
}
// iBoxCox_
NumericVector iBoxCox_(NumericVector x, double lambda, int yj);
RcppExport SEXP _nlmixr_iBoxCox_(SEXP xSEXP, SEXP lambdaSEXP, SEXP yjSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type yj(yjSEXP);
    rcpp_result_gen = Rcpp::wrap(iBoxCox_(x, lambda, yj));
    return rcpp_result_gen;
END_RCPP
}
// lin_cmt_stan
SEXP lin_cmt_stan(Eigen::Map<Eigen::VectorXd> obs_time, Eigen::Map<Eigen::VectorXd> dose_time, Eigen::Map<Eigen::VectorXd> dose, Eigen::Map<Eigen::VectorXd> Tinf, Eigen::Map<Eigen::VectorXd> params, SEXP oralSEXP, SEXP infusionSEXP, SEXP ncmtSEXP, SEXP parameterizationSEXP);
RcppExport SEXP _nlmixr_lin_cmt_stan(SEXP obs_timeSEXP, SEXP dose_timeSEXP, SEXP doseSEXP, SEXP TinfSEXP, SEXP paramsSEXP, SEXP oralSEXPSEXP, SEXP infusionSEXPSEXP, SEXP ncmtSEXPSEXP, SEXP parameterizationSEXPSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type obs_time(obs_timeSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type dose_time(dose_timeSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type dose(doseSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type Tinf(TinfSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type oralSEXP(oralSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type infusionSEXP(infusionSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ncmtSEXP(ncmtSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type parameterizationSEXP(parameterizationSEXPSEXP);
    rcpp_result_gen = Rcpp::wrap(lin_cmt_stan(obs_time, dose_time, dose, Tinf, params, oralSEXP, infusionSEXP, ncmtSEXP, parameterizationSEXP));
    return rcpp_result_gen;
END_RCPP
}
// llik_binomial_c
SEXP llik_binomial_c(Eigen::Map<Eigen::VectorXd> y, Eigen::Map<Eigen::VectorXd> N, Eigen::Map<Eigen::VectorXd> params);
RcppExport SEXP _nlmixr_llik_binomial_c(SEXP ySEXP, SEXP NSEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type N(NSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(llik_binomial_c(y, N, params));
    return rcpp_result_gen;
END_RCPP
}
// llik_poisson
SEXP llik_poisson(Eigen::Map<Eigen::VectorXd> y, Eigen::Map<Eigen::VectorXd> params);
RcppExport SEXP _nlmixr_llik_poisson(SEXP ySEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(llik_poisson(y, params));
    return rcpp_result_gen;
END_RCPP
}
// llik_normal
SEXP llik_normal(Eigen::Map<Eigen::VectorXd> y, Eigen::Map<Eigen::VectorXd> params);
RcppExport SEXP _nlmixr_llik_normal(SEXP ySEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(llik_normal(y, params));
    return rcpp_result_gen;
END_RCPP
}
// llik_betabinomial
SEXP llik_betabinomial(Eigen::Map<Eigen::VectorXd> y, Eigen::Map<Eigen::VectorXd> N, Eigen::Map<Eigen::VectorXd> params);
RcppExport SEXP _nlmixr_llik_betabinomial(SEXP ySEXP, SEXP NSEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type N(NSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(llik_betabinomial(y, N, params));
    return rcpp_result_gen;
END_RCPP
}
// llik_student_t
SEXP llik_student_t(Eigen::Map<Eigen::VectorXd> y, Eigen::Map<Eigen::VectorXd> params);
RcppExport SEXP _nlmixr_llik_student_t(SEXP ySEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(llik_student_t(y, params));
    return rcpp_result_gen;
END_RCPP
}
// llik_beta
SEXP llik_beta(Eigen::Map<Eigen::VectorXd> y, Eigen::Map<Eigen::VectorXd> params);
RcppExport SEXP _nlmixr_llik_beta(SEXP ySEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(llik_beta(y, params));
    return rcpp_result_gen;
END_RCPP
}
// llik_neg_binomial
SEXP llik_neg_binomial(Eigen::Map<Eigen::VectorXd> y, Eigen::Map<Eigen::VectorXd> params);
RcppExport SEXP _nlmixr_llik_neg_binomial(SEXP ySEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(llik_neg_binomial(y, params));
    return rcpp_result_gen;
END_RCPP
}
// nlmixrParameters
List nlmixrParameters(NumericVector theta, DataFrame eta);
RcppExport SEXP _nlmixr_nlmixrParameters(SEXP thetaSEXP, SEXP etaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type eta(etaSEXP);
    rcpp_result_gen = Rcpp::wrap(nlmixrParameters(theta, eta));
    return rcpp_result_gen;
END_RCPP
}
// nlmixrShrink
List nlmixrShrink(NumericMatrix& omegaMat, DataFrame etasDf, List etaLst);
RcppExport SEXP _nlmixr_nlmixrShrink(SEXP omegaMatSEXP, SEXP etasDfSEXP, SEXP etaLstSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type omegaMat(omegaMatSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type etasDf(etasDfSEXP);
    Rcpp::traits::input_parameter< List >::type etaLst(etaLstSEXP);
    rcpp_result_gen = Rcpp::wrap(nlmixrShrink(omegaMat, etasDf, etaLst));
    return rcpp_result_gen;
END_RCPP
}
// nlmixrResid
List nlmixrResid(List& innerList, NumericMatrix& omegaMat, NumericVector& cdv, IntegerVector& evid, NumericVector& lambda, NumericVector& yj, IntegerVector& cens, NumericVector& limit, DataFrame etasDf, List etaLst);
RcppExport SEXP _nlmixr_nlmixrResid(SEXP innerListSEXP, SEXP omegaMatSEXP, SEXP cdvSEXP, SEXP evidSEXP, SEXP lambdaSEXP, SEXP yjSEXP, SEXP censSEXP, SEXP limitSEXP, SEXP etasDfSEXP, SEXP etaLstSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List& >::type innerList(innerListSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type omegaMat(omegaMatSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type cdv(cdvSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type evid(evidSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type yj(yjSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type cens(censSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type limit(limitSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type etasDf(etasDfSEXP);
    Rcpp::traits::input_parameter< List >::type etaLst(etaLstSEXP);
    rcpp_result_gen = Rcpp::wrap(nlmixrResid(innerList, omegaMat, cdv, evid, lambda, yj, cens, limit, etasDf, etaLst));
    return rcpp_result_gen;
END_RCPP
}
// npde
List npde(IntegerVector id, NumericVector dv, IntegerVector evid, NumericVector sim, NumericVector lambda, NumericVector yj, bool ties, double tolChol);
RcppExport SEXP _nlmixr_npde(SEXP idSEXP, SEXP dvSEXP, SEXP evidSEXP, SEXP simSEXP, SEXP lambdaSEXP, SEXP yjSEXP, SEXP tiesSEXP, SEXP tolCholSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type id(idSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dv(dvSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type evid(evidSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sim(simSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type yj(yjSEXP);
    Rcpp::traits::input_parameter< bool >::type ties(tiesSEXP);
    Rcpp::traits::input_parameter< double >::type tolChol(tolCholSEXP);
    rcpp_result_gen = Rcpp::wrap(npde(id, dv, evid, sim, lambda, yj, ties, tolChol));
    return rcpp_result_gen;
END_RCPP
}
// augPredTrans
RObject augPredTrans(NumericVector& pred, NumericVector& ipred, NumericVector& lambda, RObject& yjIn);
RcppExport SEXP _nlmixr_augPredTrans(SEXP predSEXP, SEXP ipredSEXP, SEXP lambdaSEXP, SEXP yjInSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type pred(predSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type ipred(ipredSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< RObject& >::type yjIn(yjInSEXP);
    rcpp_result_gen = Rcpp::wrap(augPredTrans(pred, ipred, lambda, yjIn));
    return rcpp_result_gen;
END_RCPP
}
// saem_do_pred
SEXP saem_do_pred(SEXP in_phi, SEXP in_evt, SEXP in_opt);
RcppExport SEXP _nlmixr_saem_do_pred(SEXP in_phiSEXP, SEXP in_evtSEXP, SEXP in_optSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type in_phi(in_phiSEXP);
    Rcpp::traits::input_parameter< SEXP >::type in_evt(in_evtSEXP);
    Rcpp::traits::input_parameter< SEXP >::type in_opt(in_optSEXP);
    rcpp_result_gen = Rcpp::wrap(saem_do_pred(in_phi, in_evt, in_opt));
    return rcpp_result_gen;
END_RCPP
}
// saem_fit
SEXP saem_fit(SEXP xSEXP);
RcppExport SEXP _nlmixr_saem_fit(SEXP xSEXPSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type xSEXP(xSEXPSEXP);
    rcpp_result_gen = Rcpp::wrap(saem_fit(xSEXP));
    return rcpp_result_gen;
END_RCPP
}
