/*Napiši program koji ispisuje vrijednost sume brojeva od 1 do 100.*/

#include <iostream>
using namespace std;

int main()
{
	int suma = 0;
	cout<<"Sumiranje brojeva od 1-100"<<endl;
	
	for(int i = 0; i < 100; i++)
	{
		suma += i;
	}
	
    cout<<" Suma brojeva od 1-100 iznosi: "<< suma <<endl;
	
	system("pause>0");
	return 0;
}
