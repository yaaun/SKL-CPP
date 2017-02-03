#include <iostream>
#include "FitResult.hpp"
#include "Fit.hpp"
#include "SlopeFit.hpp"
#include "LineFit.hpp"

using std::cout;
using std::endl;


FitResult funkcja_testowa1(Fit& fitter) {
    fitter.appendPoint(2, 2);
    fitter.appendPoint(4, 5);
    fitter.appendPoint(7, 4);
    fitter.appendPoint(9, 8);
    
    return fitter.fit();
}

FitResult funkcja_testowa2(Fit& fitter) {
    fitter.appendPoint( 0, 0.1);
    fitter.appendPoint( 1, 1);
    fitter.appendPoint( 2, 2.1);
    return fitter.fit();
}



int main() {
    SlopeFit slf;
    LineFit lnf;
  
    FitResult ft1 = funkcja_testowa1(slf);
    cout << ft1 << endl;
    
    FitResult ft2 = funkcja_testowa1(lnf);
    cout << ft2 << endl;
    
    SlopeFit slf2;
    LineFit lnf2;
    
    FitResult ft3 = funkcja_testowa2(slf2);
    cout << ft3 << endl;
    
    FitResult ft4 = funkcja_testowa2(lnf2);
    cout << ft4 << endl;
    
    return 0;
}