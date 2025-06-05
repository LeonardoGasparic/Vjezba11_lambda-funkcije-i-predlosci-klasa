#ifndef OPCINSKOVIJECE25_H
#define OPCINSKOVIJECE25_H

#include "IzboriLok25.h"

struct VijeceRed {
    std::string lista;
    int glasovi;

    friend std::istream& operator>>(std::istream& in, VijeceRed& red) {
        std::getline(in, red.lista, ',');
        in >> red.glasovi;
        return in;
    }

    friend std::ostream& operator<<(std::ostream& out, const VijeceRed& red) {
        out << "Lista: " << red.lista << ", Glasovi: " << red.glasovi;
        return out;
    }
};

class OpcinskoVijece25 : public IzboriLok25<VijeceRed> {};

#endif
