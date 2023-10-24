#include<iostream>
using namespace std;
void tribulle(int tab[], int n) {
    int i, j, tmp;
    //tri croissante
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }
}
int main(){
	int n ;
    int i=0;
	cout<< " Veuillez Entrer la taille du Tableau : "<<endl;
	cin>>n;
	int tab[n];
	for(int i = 0 ; i <n ; i++ ){
		cout<<"Element " << i+1 << " : ";
		cin>>tab[i];
	}
	cout<<"-----------"<<endl;
    cout<<"-----------"<<endl;
	cout<<"Les Elements du Tableau sont :"<< endl;

    cout << "["  ; 
    for (int i = 0; i < n; i++) { 
        cout  <<tab[i] << " "; 
    } 
     cout << "]" << endl;
	cout<<"-----------"<<endl;
	tribulle(tab,n);
	cout<<"-----------"<<endl;
	cout<<"Les Elements du tablau apres Tri Bulle sont :"<<endl;

    cout << "["  ; 
    for (int i = 0; i < n; i++) { 
        cout  <<tab[i] << " "; 
    } 
     cout << "]" << endl;
	return 0;

}
