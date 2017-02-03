#ifndef SLOPEFIT_H
#include "Fit.hpp"


class SlopeFit : public Fit {
  public:
    virtual void appendPoint(double x, double y) override;
    virtual FitResult fit() const override;
    
    SlopeFit();
  
  private:
    double ysum, xsum;
};
#endif