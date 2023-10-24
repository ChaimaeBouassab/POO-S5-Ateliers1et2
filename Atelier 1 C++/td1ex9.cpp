#include <iostream>
using namespace std;

double harmonicseries(int n){
    double i,s=0;
    for(i=1;i<=n;i++){
        s=s+1/i;}
    return s;
}

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;
    cout << "Sum is: " << harmonicseries(n) << endl;
    return 0;
}
