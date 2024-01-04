#include "funkcje.h"
#include <cmath>
#include <vector>

double logarytmNaturalny(double x) {
    return log(x);
}

double odchylenieStandardowe(const std::vector<double>& liczby) {
    if (liczby.empty()) {
        return 0.0;
    }

    double srednia = 0.0;
    for (double liczba : liczby) {
        srednia += liczba;
    }
    srednia /= liczby.size();

    double sumaKwadratowRoznic = 0.0;
    for (double liczba : liczby) {
        sumaKwadratowRoznic += pow(liczba - srednia, 2);
    }

    return sqrt(sumaKwadratowRoznic / liczby.size());
}

double exponenta(double x) {
    return exp(x);
}