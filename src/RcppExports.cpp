// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// logTopdot
arma::vec logTopdot(arma::vec ln_x, arma::vec ln_y);
RcppExport SEXP _fipp_logTopdot(SEXP ln_xSEXP, SEXP ln_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type ln_x(ln_xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type ln_y(ln_ySEXP);
    rcpp_result_gen = Rcpp::wrap(logTopdot(ln_x, ln_y));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fipp_logTopdot", (DL_FUNC) &_fipp_logTopdot, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_fipp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
