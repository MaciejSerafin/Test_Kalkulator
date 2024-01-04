#include <iostream>
#include "funkcje.h"

int main() {
    double x, y;

    // Logarytm naturalny
    std::cout << "Podaj liczbe dla logarytmu naturalnego: ";
    std::cin >> x;
    std::cout << "Logarytm naturalny z " << x << " wynosi: " << logarytmNaturalny(x) << std::endl;

    // Odchylenie standardowe
    std::cout << "Podaj liczby dla odchylenia standardowego (0 aby zakonczyc): ";
    std::vector<double> liczby;
    while (std::cin >> y && y != 0) {
        liczby.push_back(y);
    }
    std::cout << "Odchylenie standardowe wynosi: " << odchylenieStandardowe(liczby) << std::endl;

    // Wartość exponentu
    std::cout << "Podaj liczbe dla exponenty: ";
    std::cin >> x;
    std::cout << "Exponenta z " << x << " wynosi: " << exponenta(x) << std::endl;

    return 0;
}