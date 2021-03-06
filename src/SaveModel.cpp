#include "VTKTypes.h"
#include <string.h>
#include <RcppEigen.h>
#include "pPCA2statismo.h"

using namespace Rcpp;

RcppExport SEXP SaveModel(SEXP pPCA_, SEXP filename_) {
  try {
    std::string str = Rcpp::as<std::string>(filename_);
    const char *filename = str.c_str();
    
    shared_ptr<vtkMeshModel>model = pPCA2statismo(pPCA_);
    model->Save(filename);
    return wrap(1);
  } catch (std::exception& e) {
    ::Rf_error( e.what());
  } catch (...) {
    ::Rf_error("unknown exception");
  }
}
