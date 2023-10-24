#include <iostream>
#include <iomanip> // pour setw
using namespace std ;
main()
{ 
int i, j ;
  cout <<'\0' <<'\0'<<'\0'<<'\0' <<'\0'<<'\0';
  for (j=1 ; j<=10 ; j++) cout << setw(4) << j ;
  cout << "\n" ;
  cout <<"-------" ;
  for (j=1 ; j<=10 ; j++) cout << "----" ;
  cout << "\n" ;
  for (i=1 ; i<=10 ; i++)
  { 
     cout << setw(4) << i << " |" ;
     for (j=1 ; j<=10 ; j++)
     cout << setw(4) << i*j ;
     cout << "\n" ;
  }
getchar() ;
}

