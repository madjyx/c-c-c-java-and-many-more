/*. Napiši program koji uèitava 2 cijela broja, sumira ih i ispisuje brojeve i sumu na ekran.*/



#include <iostream>
using namespace std;

 int main()
{
	int prvi_broj, drugi_broj,suma;
	
	cout<<"Unesite prvi broj:  ";
	cin>>prvi_broj;
	cout<<"Unesite drugi broj: ";
	cin>>drugi_broj;
	
	suma = prvi_broj + drugi_broj;
	cout<<endl;

	
	cout<<prvi_broj << " + " << drugi_broj << " = " << suma<<endl; 
	

	return 0;
}
