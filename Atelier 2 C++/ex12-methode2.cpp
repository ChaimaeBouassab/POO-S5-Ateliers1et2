#include <iostream>
using namespace std;

class test{
public:
    int a;
    static int compteur;

public:
    test(int a) {
        this->a = a;
        compteur++;
    }
    void seta(int a) {
        this->a = a;
    }
    int geta() {
        return a;
    }
    void display() {
        cout << "La valeur de a est : " << a << endl;
    }
};

int test::compteur = 0;
int main() {
    test cmt1(20); // Utilisez un nom diff�rent pour chaque objet
    test cmt2(30); // Utilisez un nom diff�rent pour chaque objet

    cout << "Le nombre total d'objets est : " << test::compteur << endl;

    return 0;
}


