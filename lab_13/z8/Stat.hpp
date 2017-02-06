#include <vector>
#include <initializer_list>

using std::vector;

template <typename T>
class Stat {
  public:
    Stat();
    Stat(std::initializer_list<T>);
    
    void dodaj(T);
    T min() const;
    T max() const;
    double srednia() const;
    unsigned liczba() const;
    double wariancja() const;
    
    void reset();
  
  
  private:
    vector<T> nums;
    T largest, smallest;
};

template <typename T>
Stat<T>::Stat():
    nums{},
    largest{0},
    smallest{0}
        {}

template <typename T>
Stat<T>::Stat(std::initializer_list<T> ls):
    nums{ls},
    largest{
}

template <typename T>
void Stat<T>::dodaj(T num) {
    nums.push_back(num);
    
    if (num < smallest) {
        smallest = num;
    }
    
    if (num > largest) {
        largest = num;
    }
}

template <typename T>
T Stat<T>::min() const {
    return smallest;
}

template <typename T>
T Stat<T>::max() const {
    return largest;
}

template <typename T>
double Stat<T>::srednia() const {
    double srd{0};
    
    for (T lc : nums) {
        srd += lc;
    }
    
    return srd / nums.size();
}

template <typename T>
unsigned Size<T>::liczba() const {
    return static_cast<unsigned>(nums.size());
}

template <typename T>
double Size<T>::wariancja() const {
    double var{0};
    
    for (T lc : nums) {
        var += lc * lc;
    }
    
    return var / nums.size();
}

template <typename T>
void Size<T>::reset() {
    nums.clear();
}