#include <iostream>
using namespace std;

class Test {
public:
    static int callCount;

    void call() {
        callCount++;
        cout << "Fonction call() a été appelée " << callCount << " fois." << endl;
    }
};

int Test::callCount = 0;

int main() {
    Test t;
    t.call();  // Appel de la fonction call()
    t.call();  // Appel de la fonction call()
    Test t2;
    t2.call(); // Appel de la fonction call()

    cout << "Nombre total d'appels de call() depuis main : " << Test::callCount << endl;

    return 0;
}
