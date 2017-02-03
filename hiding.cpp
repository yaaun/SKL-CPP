#include <iostream>

class A {
  public:
    void f(double d) {
        std::cout << d << "(double)" << std::endl;
    }
    
    void g() {
        std::cout << "g()" << std::endl;
    }
};

class B : public A {
  public:
    void f(int i) {
        std::cout << i << "(int)" << std::endl;
    }
};

int main() {
    B b;
    b.f(3.14);
    b.g();
    return 0;
}