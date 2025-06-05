#ifndef IZBORILOK25_H
#define IZBORILOK25_H

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

template<typename T>
class IzboriLok25 {
protected:
    std::vector<T> podaci;

public:
    void dodaj(const T& zapis) {
        podaci.push_back(zapis);
    }

    friend std::istream& operator>>(std::istream& in, IzboriLok25<T>& obj) {
        std::string linija;
        std::getline(in, linija);

        while (std::getline(in, linija)) {
            std::istringstream iss(linija);
            T element;
            if (iss >> element) {
                obj.dodaj(element);
            }
        }
        return in;
    }

    friend std::ostream& operator<<(std::ostream& out, const IzboriLok25<T>& obj) {
        for (const auto& element : obj.podaci) {
            out << element << std::endl;
        }
        return out;
    }
};

#endif
