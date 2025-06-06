#include <iostream>
#include <algorithm>
#include "OpcinskoVijece25.h"
#include "Nacelnik25.h"

int main() {
    OpcinskoVijece25 OpcinskoVijeceDvor25;
    Nacelnik25 NacelnikDvor25;

    OpcinskoVijeceDvor25.ucitajIzCSV("OpcinskoVijece_Dvor.csv");
    NacelnikDvor25.ucitajIzCSV("Nacelnik_Dvor.csv");

    std::cout << "Rezultati za Opcinu Dvor\n";
    std::cout << "\nOpcinsko Vijece:\n";
    std::cout << OpcinskoVijeceDvor25;

    std::cout << "\nNacelnik:\n";
    std::cout << NacelnikDvor25;

    return 0;
}
