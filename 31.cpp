/*Napisi program koji ucitava brojeve sa tastature u kontejner, a zatim brise 2 posljednja elementa kontejnera ako je uneseno vise 
 od 5 broje*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>brojevi;
    int broj;
    
    cout << "Unesite vektor cijelih brojeva:  "<<endl;
    while(cin>>broj)
    brojevi.push_back(broj);
    
    cout << "Vektor cijelih brojeva:  ";
    for(auto i : brojevi)
        cout << i << " ";
        cout << endl;
    
    if(brojevi.size() > 5)
    {
        auto it1 = brojevi.end() - 1;
        auto it2 = brojevi.end() - 2;
        it1 = brojevi.erase(it1);
        it2 = brojevi.erase(it2);
    }
    
    cout << endl << endl << endl;
    cout<< "Vektor cijelih brojeva, nakon brisanja zadnja dva broja: " << endl;
    for(auto i : brojevi)
        cout << i << " ";
    cout << endl;
    
}