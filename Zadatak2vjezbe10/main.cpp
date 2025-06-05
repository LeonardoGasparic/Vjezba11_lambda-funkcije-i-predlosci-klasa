#include <iostream>

int main() {
    auto maksimum = [](auto a, auto b, auto c) {
        auto max = a;
        if (b > max) max = b;
        if (c > max) max = c;
        return max;
    };

    int i1 = 3, i2 = 7, i3 = 5;
    std::cout << "Maksimum (int): " << maksimum(i1, i2, i3) << std::endl;

    float f1 = 3.2f, f2 = 7.8f, f3 = 5.1f;
    std::cout << "Maksimum (float): " << maksimum(f1, f2, f3) << std::endl;

    double d1 = 2.5, d2 = 1.9, d3 = 4.7;
    std::cout << "Maksimum (double): " << maksimum(d1, d2, d3) << std::endl;

    return 0;
}
