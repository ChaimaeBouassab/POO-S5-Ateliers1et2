#include<iostream>
using namespace std; 
  
int fib(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fib(n-1) + fib(n-2); 
} 
  
int main () 
{ 
    int n;
    cout<<"Entrez le nombre n : ";
    cin>>n;
    cout<<" La n-eme valeur de la suite de Fibonacci : "<<fib(n); 
    return 0; 
}