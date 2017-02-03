#ifndef OSOBA_H
#define OSOBA_H

class Osoba {
  public:
    static const int M = 1, K = 2;
    
    Osoba(const std::string& imiona, const std::string& nazws, const int wiek, const int plec);
    
    const std::string& getNames() const;
    const std::string& getSurnames() const;
    int getAge() const;
    int getSex() const;
    
  private:
    std::string imiona, nazwiska;
    int wiek, plec;
}

#endif