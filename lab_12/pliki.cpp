#include <istream>
#include <ostream>
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

std::istream& operator>>(std::istream& istr, Osoba& os) {
    std::string names, surnames;
    
    istr >> names;
    istr >> surnames;
    
}