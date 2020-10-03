/*Napisi program koji ucitava dva string objekta i testira jesu li isti*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s1,s2;
	
	cout << "Unesi prvi string  objekat:  " ;
	cin>>s1;
	
	cout << "Unesi drugi string objekat: ";
	cin>>s2;
	
	if(s1 == s2)
	cout << "String " << s1 << " i string " << s2 << " su isti " << endl<<endl;
	
	else 
	cout << "String " << s1 << " i string " << s2 << " nisu isti " << endl;
}
