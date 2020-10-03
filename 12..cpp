/*Napisi program koji ucitava brojeve sa tastature u kontejner, sortira ih i ispisuje na ekran*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector <int> brojevi;
	int broj;
	
	do
	{
		cin>>broj;
		brojevi.push_back(broj);
	}while(cin>>broj);
	
	cout << "Broj objekata u kontejneru je: " << brojevi.size() << endl;
	cout << "Sortiram objekte " << endl;
	sort(brojevi.begin(), brojevi.end());
	
	for(auto br : brojevi) /*ovdje mora bit drugacije nego gore*/
	cout << br << " ";
	cout << endl;
	return 0;
}
