#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> brojevi;
    int broj;

    while (std::cin >> broj) {
        brojevi.push_back(broj);
    }

    std::sort(brojevi.begin(), brojevi.end(),
        [](int a, int b) {
            if ((a % 2 != 0) && (b % 2 == 0)) return true;
            if ((a % 2 == 0) && (b % 2 != 0)) return false;
            return a < b;
        }
    );

    std::for_each(brojevi.begin(), brojevi.end(),
        [](int x) { std::cout << x << " "; }
    );
    std::cout << std::endl;

    return 0;
}
