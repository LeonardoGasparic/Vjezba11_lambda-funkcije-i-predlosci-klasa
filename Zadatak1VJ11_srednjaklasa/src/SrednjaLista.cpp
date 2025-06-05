#include "SrednjaLista.h"

SrednjaLista::SrednjaLista(int n) : N(n) {
    izracunajSredinu = [this](int start) {
        if (start < 0 || start >= static_cast<int>(this->size())) return 0.0;
        if (start < N - 1) return 0.0;

        double suma = std::accumulate(
            this->begin() + (start - N + 1),
            this->begin() + start + 1,
            0.0
        );
        return suma / N;
    };

    ispisiSredine = [this]() {
        std::cout << "Srednje vrijednosti (N=" << N << "): ";
        for (int i = 0; i < static_cast<int>(this->size()); ++i) {
            if (i >= N - 1) {
                std::cout << izracunajSredinu(i) << " ";
            } else {
                std::cout << "_ ";
            }
        }
        std::cout << std::endl;
    };
}
