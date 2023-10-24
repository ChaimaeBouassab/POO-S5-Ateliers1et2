#include <iostream>

int main() {
    double a = 2, b = 10, c = -2, d = 5, minintv, maxintv;

    std::cout << "Le premier intervalle [A , B] : " << std::endl;
    std::cout << "Tapez la valeur de A : "; 
    std::cin >> a;
    std::cout << "Tapez la valeur de B : "; 
    std::cin >> b;

    std::cout << "Le deuxième intervalle [C , D] : " << std::endl;
    std::cout << "Tapez la valeur de C : "; 
    std::cin >> c;
    std::cout << "Tapez la valeur de D : "; 
    std::cin >> d;

    if (a > c) 
        minintv = a;
    else 
        minintv = c;

    if (b < d) 
        maxintv = b;
    else 
        maxintv = d;

    if (minintv > maxintv) 
        std::cout << "L'intersection est vide." << std::endl;
    else if (minintv == maxintv) 
        std::cout << "L'intersection ne comporte qu'une valeur : " << minintv << std::endl;
    else 
        std::cout << "L'intersection des intervalles [" << a << ";" << b << "]"
            << " et [" << c << ";" << d << "] est l'intervalle [" << minintv << ";" << maxintv << "]" << std::endl;

    return 0;
}
