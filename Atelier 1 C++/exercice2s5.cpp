#include <iostream>

// Fonction pour calculer le factoriel (n!)
double factorial(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Fonction pour calculer le sinus en utilisant la série de Taylor
double calculateSin(double x, double epsilon) {
    double result = 0.0;
    double term = x;
    //term is the current term in the Taylor series being calculated. It represents the contribution of each term to the final value of sin(x).
    int n = 1;

    while (std::abs(term) >= epsilon) {
        //std::abs is a function from the C++ Standard Library that calculates the absolute value of a number. In this case, it's used to ensure that term is compared as a positive value, regardless of whether it's positive or negative.
        result += term;
        n += 2;
        term *= -x * x / (n * (n - 1));
    }

    return result;
}

int main() {
    double x;
    std::cout << "Entrez la valeur de x en radians : ";
    std::cin >> x;

    double epsilon = 0.0001;
    double sinX = calculateSin(x, epsilon);

    std::cout << "sin(" << x << ") = " << sinX << std::endl;

    return 0;
}
