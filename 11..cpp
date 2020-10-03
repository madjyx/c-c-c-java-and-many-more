/*Napisi program koji ucitava brojeve sa tastature u kontejner, a zatim ispisuje broj elemenata kontejnera*/

#include <iostream>
#include <vector>
using std::cout; using std::cin;using std::vector;
using std::endl;

int main()
{
	vector <int> niz;
	int broj;
	
	cout << "Unesi brojeve: " << endl;
	
	do
	{
	cin>>broj;
	niz.push_back(broj);

	}while(broj != 0);

	cout << "Broj elemenata u kontejneru iznosi : " << niz.size() << "." << "ukljucujuci i unesenu 0. kao element niza " << endl;
	return 0;
}
