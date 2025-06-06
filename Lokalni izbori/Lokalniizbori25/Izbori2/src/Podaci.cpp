#include "Podaci.h"
#include <sstream>
#include <algorithm>
#include <iostream>

std::istream& operator>>(std::istream& is, RedVijece& r) {
    std::getline(is, r.lista, ',');
    is >> r.glasova;
    is.ignore();
    is >> r.postotak;
    return is;
}

std::ostream& operator<<(std::ostream& os, const RedVijece& r) {
    os << std::left << std::setw(30) << r.lista
       << std::right << std::setw(8) << r.glasova
       << std::setw(10) << std::fixed << std::setprecision(2) << r.postotak << "%";
    return os;
}

std::istream& operator>>(std::istream& is, RedNacelnik& r) {
    std::getline(is, r.kandidat, ',');
    is >> r.glasova;
    is.ignore();
    is >> r.postotak;
    return is;
}

std::ostream& operator<<(std::ostream& os, const RedNacelnik& r) {
    os << std::left << std::setw(30) << r.kandidat
       << std::right << std::setw(8) << r.glasova
       << std::setw(10) << std::fixed << std::setprecision(2) << r.postotak << "%";
    return os;
}
