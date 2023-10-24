#include <iostream>
using namespace std; 

void incrementer(int *a){
	(*a)++;

}
void permuter(int *x, int *y) {
    int temp ;
	temp = *y;
    *y = *x;
    *x = temp;
}


int main(){
  int m=20;
  int n=30;
  incrementer(&m);
  cout<< " la valeur de m est :" << m  <<endl;
  permuter(&m , &n);
  cout<< " Les Valeurs de m et n sont :" << m << " " << n <<endl;
  
return 0;
}
