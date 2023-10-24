#include <iostream>
using namespace std;

int main() {
    int n ;
    cout<<"Veuillez Entrer la taille du Tableau :" <<endl;
	cin>>n;
	int tab[n];
	cout<<"Veuillez Entrer les Elements du tableau :" <<endl;
	for(int i=0 ; i<n ; i++){
	cin>>tab[i];	
	}
    cout<<"les Elements du tableau sont: " << endl;	
	for(int i=0 ; i<n ; i++){
	cout<<tab[i] <<endl;	
	}
	
	int Max = tab[0];
	int Min = tab[0];
	
	    for(int i=0 ; i<n ; i++){
		  	if(Max<tab[i]){
		  		Max=tab[i];
			}else if(Min>tab[i]){
				Min=tab[i]; 	
			  }
        }
        cout<<"le maximun est : " << Max <<endl;	
        cout<<"le minimun est : " << Min <<endl;
    return 0;
}


