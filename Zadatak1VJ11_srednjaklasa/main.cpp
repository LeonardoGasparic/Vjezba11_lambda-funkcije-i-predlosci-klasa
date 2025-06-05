#include <iostream>
#include <random>
#include <thread>
#include <chrono>
#include <atomic>
#include "SrednjaLista.h"

int main() {
    SrednjaLista lista(3);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dist(0.0, 10.0);

    std::atomic<bool> zaustavi{false};

    std::thread prekidac([&zaustavi]() {
        std::cout << "Pritisni Enter za prekid programa...\n";
        std::cin.get();
        zaustavi = true;
    });

    while (!zaustavi) {
        double broj = dist(gen);
        lista.push_back(broj);

        std::cout << "Dodano: " << broj << " -> ";
        lista.ispisiSredine();

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    if (prekidac.joinable()) prekidac.join();
    std::cout << "Program prekinut.\n";

    return 0;
}
