#include <iostream>
#include <initializer_list>
#include <algorithm>

int main() {
    auto max = [](std::initializer_list<double> values) {
        return *std::max_element(values.begin(), values.end());
    };

    std::cout << "Maksimum: " << max({3.9, 7.8, 5.1}) << std::endl;
    std::cout << "Maksimum: " << max({1.2, 4.4, 2.2, 8.8, 7.7}) << std::endl;

    return 0;
}
