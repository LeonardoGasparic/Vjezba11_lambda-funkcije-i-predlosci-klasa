#ifndef PODACI_H
#define PODACI_H

#include <string>
#include <iostream>
#include <iomanip>
#include <algorithm>

struct RedVijece {
    std::string lista;
    int glasova;
    double postotak;

    friend std::istream& operator>>(std::istream& is, RedVijece& r);
    friend std::ostream& operator<<(std::ostream& os, const RedVijece& r);
};

struct RedNacelnik {
    std::string kandidat;
    int glasova;
    double postotak;

    friend std::istream& operator>>(std::istream& is, RedNacelnik& r);
    friend std::ostream& operator<<(std::ostream& os, const RedNacelnik& r);
};

#endif
