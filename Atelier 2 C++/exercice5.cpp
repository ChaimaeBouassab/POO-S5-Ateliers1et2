#include <iostream>
using namespace std; 
void referece(int &a){
	a = 2;
}
void pointeur(int *a){
	*a = 15;
}
void valeur( int a){
	a = 2;
}
int main(){
	int a=20;
	cout<< " la valeur de a est :" << a << endl;
	referece(a);
    cout<< " la nouvelle valeur de a est :" << a << endl;
    cout<<"----------------------"<<endl;
    
    cout<< " la valeur de a est :" << a << endl;
	pointeur(&a);
    cout<< " la nouvelle valeur de a est :" << a << endl;
    cout<<"----------------------"<<endl;
    
    cout<< "la valeur de a est :" << a << endl;
	 valeur(a);
    cout<< " la nouvelle valeur de a est :" << a << endl;
return 0;
}
