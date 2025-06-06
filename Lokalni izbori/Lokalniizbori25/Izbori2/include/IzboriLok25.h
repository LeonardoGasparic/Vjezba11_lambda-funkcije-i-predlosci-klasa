#ifndef IZBORILOK25_H
#define IZBORILOK25_H

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

template<typename T>
class IzboriLok25 {
    std::vector<T> podaci;
public:
    void dodaj(const T& element) {
        podaci.push_back(element);
    }

    void ucitajIzCSV(const std::string& nazivDatoteke) {
        std::ifstream file(nazivDatoteke);
        std::string linija;
        std::getline(file, linija);
        while (std::getline(file, linija)) {
            std::istringstream ss(linija);
            T red;
            ss >> red;
            dodaj(red);
        }
    }

    friend std::ostream& operator<<(std::ostream& os, const IzboriLok25<T>& obj) {
        for (const auto& r : obj.podaci)
            os << r << '\n';
        return os;
    }

    friend std::istream& operator>>(std::istream& is, IzboriLok25<T>& obj) {
        T r;
        while (is >> r)
            obj.dodaj(r);
        return is;
    }
};

#endif
