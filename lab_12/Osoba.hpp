#ifndef OSOBA_H
#define OSOBA_H

#include <string>

class Osoba {
  public:
    static const char M = 'M', K = 'K';

    Osoba(const std::string& imiona, const std::string& nazws, int wiek, char plec);
    Osoba();

    const std::string& getNames() const;
    const std::string& getSurnames() const;
    int getAge() const;
    char getSex() const;

  private:
    std::string imiona, nazwiska;
    int wiek;
    char plec;
};

#endif
