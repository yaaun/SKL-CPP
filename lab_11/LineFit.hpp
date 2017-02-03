#ifndef LINEFIT_H
#define LINEFIT_H

#include "Fit.hpp"

class LineFit : public Fit {
  public:
    LineFit();
    virtual void appendPoint(double x, double y) override;
    virtual FitResult fit() const override;
  
  private:
    int count;
    double xsum, ysum, xxsum, xysum;
    
};

#endif