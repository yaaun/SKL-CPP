#include "SlopeFit.hpp"

SlopeFit::SlopeFit():
    xsum{0},
    ysum{0}
        {}

void SlopeFit::appendPoint(double x, double y) {
    xsum += x * x;
    ysum += x * y;
}

FitResult SlopeFit::fit() const {
    FitResult res{ysum / xsum};
    
    return res;
}