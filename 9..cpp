/*Napisi program koji poredi dva unesena string objekta po velicini*/

#include <iostream>
#include <string>

using std::cin;using std::cout;using std::string;using std::endl;

int main()
{
	string s1,s2;
	
	cout << "Unesite prvi string:   ";
	cin>>s1;
	cout << "Unesite drugi string:  ";
	cin>>s2;
	
	if(s1.size() == s2.size())
	cout << " Stringovi: " << s1 << " i " << s2 << " su jednake duzine! " << endl;
	
	 else if(s1.size() > s2.size())
    cout<< "String " << s1 << " veci je od stringa " << s2; 
		
	else
	
    cout<< "String " << s2 << " veci je od stringa " << s1; 	

	 
}

