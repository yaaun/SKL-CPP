#include "FitResult.hpp"

FitResult::FitResult(double a):
    fitType{FitType::SLOPE},
    a{a},
    b{0}
    {}
    
FitResult::FitResult(double a, double b):
    fitType{FitType::LINE},
    a{a},
    b{b}
    {}

std::ostream& operator<<(std::ostream& ostr, const FitResult& fr) {
    switch (fr.fitType) {
      case FitResult::FitType::SLOPE:
        ostr << "y = a * x" << std::endl;
        ostr << "a = " << fr.a << std::endl;
        break;
      case FitResult::FitType::LINE:
        ostr << "y = a * x + b" << std::endl;
        ostr << "a = " << fr.a << std::endl;
        ostr << "b = " << fr.b << std::endl;
        break;
    }
}