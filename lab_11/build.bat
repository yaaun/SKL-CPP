g++ -c -std=c++11 -o FitResult.o FitResult.cpp
g++ -c -std=c++11 -o SlopeFit.o SlopeFit.cpp FitResult.o
g++ -c -std=c++11 -o LineFit.o LineFit.cpp FitResult.o
g++ -std=c++11 -o main.exe main.cpp FitResult.o SlopeFit.o LineFit.o