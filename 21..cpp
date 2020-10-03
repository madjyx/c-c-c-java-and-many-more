/*Napisi lambdu za sortiranje string objekata operatorom <.*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector <string> rijeci;
    string rijec;
    
    while(cin >> rijec)
        rijeci.push_back(rijec);
    
    //lambda izraz sluzi kao kriterijska funkcija za sortiranje
    auto jeKraci = [] (const string& prvi, const string& drugi) { return prvi.size() < drugi.size(); };
    
    cout << endl;
    cout << "Prije sortiranja " << endl;
    for(auto r : rijeci)
        cout << r << endl;
    
    
    //sortiranje lambdom i ispis
    cout << endl << endl << endl;
    cout << "Poslije sortiranja " << endl;
    
    sort(rijeci.begin(), rijeci.end(), jeKraci);
    
    for(auto r : rijeci)
        cout << r << endl;

        
}
        
        
        

