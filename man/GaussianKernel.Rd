% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/kernels.r
\name{GaussianKernel}
\alias{GaussianKernel}
\title{create a scalar valued kernel of type GaussianKernel}
\usage{
GaussianKernel(sigma = 50, scale = 10)
}
\arguments{
\item{sigma}{bandwidth of Gausian kernel}

\item{scale}{scale factor}
}
\value{
object of class scalarKernel
}
\description{
create a scalar valued kernel of type GaussianKernel
}
\examples{
gkernel <- GaussianKernel(2)
}

