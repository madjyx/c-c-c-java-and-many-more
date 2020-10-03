/*Napisi program koji ucitava brojeve sa tastature u list , a zatim ih ispisuje preko iteratora i petlje*/

#include <iostream>
#include <list>
using namespace std;

int main()
{
    int x;
    list<int>brojevi;
    
    cout << "Unesi brojeve u list:  ";
    
    while(cin >> x)
        brojevi.push_back(x);
    
    cout <<"Brojeve koje ste unijeli u list kontejnera su: " << endl;
    
        for(auto i = brojevi.begin(); i != brojevi.end(); i++ )
            cout << *i << " " << endl;
}