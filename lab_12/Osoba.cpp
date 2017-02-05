#include "Osoba.hpp"

Osoba::Osoba(const std::string& imiona, const std::string& nazwiska,
    int wiek, char plec):
    imiona{imiona},
    nazwiska{nazwiska},
    wiek{wiek},
    plec{plec}
    {

}

Osoba::Osoba():
    imiona{""},
    nazwiska{""},
    wiek{0},
    plec{'\0'}
    {}

const std::string& Osoba::getNames() const {
    return imiona;
}

const std::string& Osoba::getSurnames() const {
    return nazwiska;
}

int Osoba::getAge() const {
    return wiek;
}

char Osoba::getSex() const {
    return plec;
}
