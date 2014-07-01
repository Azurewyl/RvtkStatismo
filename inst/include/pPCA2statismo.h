#ifndef _STATISMO2PPCA_H__
#define _STATISMO2PPCA_H__

#include "VTKTypes.h"
#include "statismo/PCAModelBuilder.h"
#include "statismo/StatisticalModel.h"
#include "statismo/DataManager.h"
#include <memory>
#include <RcppEigen.h>
#include "R2polyData.h"


using namespace Rcpp;

S4 statismo2pPCA(auto_ptr<StatisticalModelType> model);
auto_ptr<StatisticalModelType> pPCA2statismo(SEXP pPCA_);
#endif // _STATISMO2PPCA_H__
