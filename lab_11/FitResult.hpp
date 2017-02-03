#ifndef FITRESULT_H
#define FITRESULT_H

#include <ostream>

class FitResult {
  public:
    enum FitType {
        SLOPE = 0,
        LINE = 1
    };
  
    FitResult(double a);
    FitResult(double a, double b);
  
  private:
    int fitType;
    double a, b;
    
    friend std::ostream& operator<<(std::ostream& ostr, const FitResult& fr);
};

std::ostream& operator<<(std::ostream& ostr, const FitResult& fr);



#endif