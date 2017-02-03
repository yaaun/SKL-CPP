#ifndef FIT_H
#define FIT_H

#include "FitResult.hpp"

class Fit {
  public:
    virtual void appendPoint(double x, double y) = 0;
    virtual FitResult fit() const = 0;
};

#endif