#include <iostream>
using namespace std;
int fonction1(int a){
    if(a%2==0){
        cout<<"Le nombre saisi est divisble par 2"<<endl;
    }
    return 0;
}
int fonction2(int number) {

    if (number % 3 == 0) {
        cout << number << " est un multiple de 3." << std::endl;
    } else {
       cout << number << " n'est pas un multiple de 3." << std::endl;
    }
    return 0;
}
 int main() {
    int nombre;
    cout << "Entrez un nombre entier : ";
    cin >> nombre;
    int m3=fonction1(nombre);
    int m2=fonction2(nombre);
    if (m3==0 && m2==0) {
       cout << "Il est divisible par 6";
    }
   return 0;
}




