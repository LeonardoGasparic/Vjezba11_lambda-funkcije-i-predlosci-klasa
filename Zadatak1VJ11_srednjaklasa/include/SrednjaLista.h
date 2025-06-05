#ifndef SREDNJALISTA_H
#define SREDNJALISTA_H

#include <vector>
#include <functional>
#include <numeric>
#include <iostream>

class SrednjaLista : public std::vector<double> {
private:
    int N;

public:

    SrednjaLista(int n);

    std::function<double(int)> izracunajSredinu;
    std::function<void()> ispisiSredine;
};

#endif
