#include <fstream>
#include "OpcinskoVijece25.h"
#include "Nacelnik25.h"

int main() {
    OpcinskoVijece25 OpcinskoVijece_DVOR;
    Nacelnik25 Nacelnik_DVOR;

    std::ifstream fileV("OpcinskoVijece_Dvor.csv");
    if (fileV.is_open()) {
        fileV >> OpcinskoVijece_DVOR;
        fileV.close();
    }

    std::ifstream fileN("Nacelnik_Dvor.csv");
    if (fileN.is_open()) {
        fileN >> Nacelnik_DVOR;
        fileN.close();
    }

    std::cout << "\n--- OPCINSKO VIJEĆE DVOR 2025 ---\n";
    std::cout << OpcinskoVijece_DVOR;

    std::cout << "\n--- NAČELNIK DVOR 2025 ---\n";
    std::cout << Nacelnik_DVOR;

    return 0;
}
