/*Napisi program koji ucitava string objekat i ispisuje ga karakter po karakter*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	
	cout << "Unesi rijec/recenicu: " << endl;
	
	getline(cin,s);
	
	for(int i = 0; i < s.size(); i++)
	
	cout << s[i] << endl;
}
