/*Napisi program koji ucitava prvih 5 rednih brojeva u map kontejner, a zatim brise broj sa kljucem 3.*/

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int,int>m;
    
    m[1] = 1;
    m[2] = 2;
    m[3] = 3;
    m[4] = 4;
    m[5] = 5;
    
    for(auto b : m)
        cout << b.first << " ---> " << b.second << endl;
    cout << endl;
    
    auto it = m.find(3);
    m.erase(it);
    
    cout << "Ispis mape nakon brisanja broja sa kljucem 3."<<endl << endl;
    
      for(auto b : m)
        cout << b.first << " ---> " << b.second << endl;
    cout << endl;
    
    
}