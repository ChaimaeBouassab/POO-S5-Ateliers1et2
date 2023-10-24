
#include <iostream> 
#include <cstdlib> 

using namespace std; 

int main() 
{ 
    int n, *tableau, *tableau2; 
  
    cout << "Taille du tableau: "; 
    cin >> n; 
  
    tableau = new int[n]; 

    cout << "Valeurs du tableau:" << endl; 
    for (int i = 0; i < n; i++) { 
        cin >> tableau[i]; 
    } 
    cout << "[" ; 
    for (int i = 0; i < n; i++) { 
        cout  <<tableau[i] << " "; 
    } 
     cout << "]" << endl; 
  
    tableau2 = new int[n]; 
      for (int i = 0; i < n; i++) { 
        tableau2[i] = tableau[i] * tableau[i]; 
    } 
  
    delete[] tableau; 
  
    cout << "Valeurs du nouveau tableau:" << endl; 
    cout << "["  ; 
    for (int i = 0; i < n; i++) { 
        cout  <<tableau2[i] << " "; 
    } 
     cout << "]" << endl; 
      delete[] tableau2; 
  
    return 0; 
}