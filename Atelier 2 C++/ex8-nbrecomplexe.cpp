#include <iostream>
#include <cmath>
using namespace std;

class ComplexNumber {
public:
    float real;
    float imaginary;

    ComplexNumber(float a, float b) : real(a), imaginary(b) {}

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
    ComplexNumber add(ComplexNumber x) {
        ComplexNumber sum(0, 0);
        sum.real = real + x.real;
        sum.imaginary = imaginary + x.imaginary;
        return sum;
    }

    ComplexNumber subtract(ComplexNumber x) {
        ComplexNumber diff(0, 0);
        diff.real = real - x.real;
        diff.imaginary = imaginary - x.imaginary;
        return diff;
    }

    ComplexNumber multiply(ComplexNumber x) {
        ComplexNumber product(0, 0);
        product.real = real * x.real - imaginary * x.imaginary;
        product.imaginary = real * x.imaginary + imaginary * x.real;
        return product;
    }

    ComplexNumber divide(ComplexNumber x) {
        ComplexNumber result(0, 0);
        float denominator = x.real * x.real + x.imaginary * x.imaginary;
        result.real = (real * x.real + imaginary * x.imaginary) / denominator;
        result.imaginary = (imaginary * x.real - real * x.imaginary) / denominator;
        return result;
    }

    float modulus() {
        return sqrt(real * real + imaginary * imaginary);
    }
};

int main() {
    float a, b;
    cout << "Entrez la partie réelle du premier nombre complexe : ";
    cin >> a;
    cout << "Entrez la partie imaginaire du premier nombre complexe : ";
    cin >> b;
    ComplexNumber num1(a, b);

    cout << "Entrez la partie réelle du deuxième nombre complexe : ";
    cin >> a;
    cout << "Entrez la partie imaginaire du deuxième nombre complexe : ";
    cin >> b;
    ComplexNumber num2(a, b);

    int choice;
    cout << "Choisissez une opération : " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Soustraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cin >> choice;

ComplexNumber result(0, 0);  // Initialisation avec des valeurs par défaut

    switch (choice) {
        case 1:
            result = num1.add(num2);
            break;
        case 2:
            result = num1.subtract(num2);
            break;
        case 3:
            result = num1.multiply(num2);
            break;
        case 4:
            result = num1.divide(num2);
            break;
        default:
            cout << "Choix invalide." << endl;
            return 1;
    }

    cout << "Résultat de l'opération : ";
    result.display();

    return 0;
}
