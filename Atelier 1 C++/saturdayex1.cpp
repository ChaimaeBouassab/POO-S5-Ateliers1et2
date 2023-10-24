#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    short int p = 10;
    char c = '\x01';
    
    cout << typeid(p).name() << endl; 
    
    short int result;
    cin >> result; 
    
    return 0;
}
