#include <iostream>
using namespace std ;
main()
{
	const char etoile ='*', espace='\0';
	int ligne,i,esp,j;
	cout <<"combien de ligne ? \n ligne:";
	cin>>ligne;
	for (i=0;i<ligne;i++)
	{
		esp=ligne-i;
		for(j=0;j<esp;j++)cout << espace ;
		for (j=0 ; j<2*i+1 ; j++) cout << etoile ;
		cout << '\n' ;
	}
getchar() ;
}


