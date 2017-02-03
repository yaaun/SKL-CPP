#include "LineFit.hpp"

LineFit::LineFit():
    count{0},
    xsum{0},
    ysum{0},
    xxsum{0},
    xysum{0}
        {}

void LineFit::appendPoint(double x, double y) {
    xsum += x;
    ysum += y;
    xxsum += x * x;
    xysum += x * y;
    count += 1;
}

FitResult LineFit::fit() const {
    double a = (xysum - xsum * ysum / count) / (xxsum - xsum * xsum / count);
    double b = (ysum - a * xsum) / count;
    
    FitResult fr{a, b};
    
    return fr;
}