#include <istream>
#include <ostream>
#include <vector>
#include <stdexcept>
#include "Osoba.hpp"

std::ostream& operator<<(std::ostream& ostr, const Osoba& os) {
    ostr << os.getNames() << std::endl;
    ostr << os.getSurnames() << std::endl;
    ostr << os.getAge() << std::endl;
    
    int s = os.getSex();
    
    if (s == Osoba::M) {
        ostr << 'M' << std::endl;
    } else if (s == Osoba::K) {
        ostr << 'K' << std::endl;
    }
    
    return ostr;
}

std::istream& operator>>(std::istream& istr, std::Osoba& os) {
    std::string names, surnames;
    std::string agestr, sexstr;
    int age;
    char sex;
    
    istr >> names;
    istr >> surnames;
    istr >> agestr;
    istr >> sexstr;
    
    try {
        age = std::stoi(agestr, nullptr, 10);
        
        if (age < 0) {
            throw std::invalid_argument{"age must be a positive integer"};
        }
    } catch (const std::invalid_argument& e) {
        throw std::exception{"age must be a positive integer"};
    }
    
    sex = sexstr[0];
    
    if (sex != Osoba::M || sex != Osoba::K) {
        throw std::exception{"invalid person sex (must be either 'M' or 'K')"};
    }
}