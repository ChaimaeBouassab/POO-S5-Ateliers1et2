#include <iostream>
using namespace std;

int main() {
    char c = '\x01';// '\x01' représente le caractère avec la valeur ASCII 1 en hexadécimal, ce qui équivaut à la valeur décimale 1.
    short int p = 10;

    cout << "la valeur de p : " << endl;
    cin >> p;
    p = p + 3;
    cout << "La valeur de p apres ajout de 3 : " << p << endl;

    cout << "la valeur de c : " << endl;
    cin >> c;
    c=c+1;
    cout << "La valeur de c apres ajout de 1 : " << c << endl;


    return 0;
}
