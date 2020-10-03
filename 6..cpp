#include <iostream>
#include <string>
using namespace std;

int main()
{
	string recenica;
	
	cout << "Unesi recenicu:  " << endl;
	
	getline(cin,recenica);
	
	if(!recenica.empty())
	cout << "Recenica nije prazna "<<endl;
	
	else
	
	cout << "Recenica je prazna"<<endl;
	
	cout << "Duzina recenice je " << recenica.size() << " slova " << endl;
}
