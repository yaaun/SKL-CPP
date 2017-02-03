#include <iostream>

template <typename T>
class Generic {
    public:
    typedef T obj_type;
    
    Generic(obj_type obj) {
        this->obj = obj;
    }
    
    
    
    private:
        obj_type obj;
};


int main() {
    Generic<int> g(1);
    //std::cout << decltype(typename g::obj_type) << std::endl;
    
    return 0;
}