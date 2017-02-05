#include <istream>
#include <ostream>
#include <vector>
#include <exception>
#include <stdexcept>
#include "Osoba.hpp"

std::ostream& operator<<(std::ostream& ostr, const Osoba& os) {
    ostr << os.getNames() << std::endl;
    ostr << os.getSurnames() << std::endl;
    ostr << os.getAge() << std::endl;
    ostr << os.getSex() << std::endl;

    return ostr;
}

std::istream& operator>>(std::istream& istr, Osoba& os) {
    std::string names, surnames;
    std::string agestr, sexstr;
    int age;
    char sex;

    std::getline(istr, names);
    std::getline(istr, surnames);
    std::getline(istr, agestr);
    std::getline(istr, sexstr);

    try {
        age = std::stoi(agestr, nullptr, 10);

        if (age < 0) {
            throw std::invalid_argument{"age must be a positive integer"};
        }
    } catch (const std::invalid_argument& e) {
        throw std::invalid_argument{"age must be a positive integer"};
    }

    sex = sexstr[0];

    if (sex != Osoba::M || sex != Osoba::K) {
        throw std::invalid_argument{"invalid person sex (must be either 'M' or 'K')"};
    }

    os = Osoba{names, surnames, age, sex};
}

std::ostream& operator<<(std::ostream& ostr, const std::vector<Osoba>& osb) {
    for (const Osoba& os : osb) {
        ostr << os << std::endl;
    }

    return ostr;
}

std::istream& operator>>(std::istream& istr, std::vector<Osoba>& osby) {
    int lineord{0};

    std::string nmstr, srnmstr, agestr, sexstr;

    try {
        while (!istr.eof()) {
            std::string line;
            std::getline(istr, line);

            switch (lineord) {
            case 0:
                nmstr = line;
                break;
            case 1:
                srnmstr = line;
                break;
            case 2:
                agestr = line;
                break;
            case 3:
                sexstr = line;
                break;
            case 4:
                int age = std::stoi(line, nullptr, 10);
                char sex = sexstr[0];

                if (sex != Osoba::M && sex != Osoba::K) {
                    throw std::invalid_argument{"invalid sex (must be either 'M' or 'K')"};
                }

                Osoba o{nmstr, srnmstr, age, sex};
                osby.push_back(o);
                lineord = 0;
                break;
            }
        }
    } catch (std::exception& e) {
        throw e;
    }

    return istr;
}
