#ifndef NACELNIK25_H
#define NACELNIK25_H

#include "IzboriLok25.h"

struct NacelnikRed {
    std::string kandidat;
    int glasovi;

    friend std::istream& operator>>(std::istream& in, NacelnikRed& red) {
        std::getline(in, red.kandidat, ',');
        in >> red.glasovi;
        return in;
    }

    friend std::ostream& operator<<(std::ostream& out, const NacelnikRed& red) {
        out << "Kandidat: " << red.kandidat << ", Glasovi: " << red.glasovi;
        return out;
    }
};

class Nacelnik25 : public IzboriLok25<NacelnikRed> {};

#endif
