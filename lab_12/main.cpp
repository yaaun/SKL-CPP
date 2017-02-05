#include <fstream>
#include <iostream>
#include <vector>
#include "Osoba.hpp"
#include "pliki.cpp"

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;

using std::vector;


int main() {
    Osoba o1{"Jack", "Salty Bae", 27, Osoba::M};
    Osoba o2{"Marlene", "Nome", 34, Osoba::K};

    cout << o1;
    cout << o2;

    vector<Osoba> osby;
    osby.push_back(o1);
    osby.push_back(o2);

    ofstream ofile{"persons.txt", ofstream::out};

    if (ofile.is_open()) {
        ofile << osby;
        ofile.close();
    } else {
        throw std::exception{};
    }

    ifstream ifile{"persons.txt", ifstream::in};
    vector<Osoba> reloaded;

    if (ifile.is_open()) {
        ifile >> reloaded;
        ifile.close();
    } else {
        throw std::exception{};
    }

    cout << "Printing from file:" << endl;
    cout << reloaded;

    return 0;
}
