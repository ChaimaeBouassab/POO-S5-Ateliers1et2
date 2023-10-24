#include <iostream>

int main() {
    int nombreDeLignes;
    std::cout << "Combien de lignes ? ";
    std::cin >> nombreDeLignes;

    for (int i = 1; i <= nombreDeLignes; i++) {
        for (int j = 1; j <= nombreDeLignes - i; j++) {
            std::cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }
                std::cout << std::endl;
    }

    return 0;
}
