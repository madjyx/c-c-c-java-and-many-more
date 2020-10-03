/*Napiši program koji ucitava brojeve sa tastature u vector, a zatim ih ispisuje preko iteratora*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>brojevi;
    
    int broj;
    
    cout << "Unesite brojeve u vector: ";
     while(cin>>broj)
    brojevi.push_back(broj);
    
    cout << "Brojeve koje ste unijeli u vector su:  ";
            for(vector<int>::iterator it = brojevi.begin(); it < brojevi.end(); it++)
                cout << *it << " ";
    cout << endl;
}