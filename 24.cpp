/*Napisi lambdu koja dohvata objekat po vrijednosti i ispisuje ga*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1("Neska");
    
    
    auto ispis = [s1] ()  { cout << s1 << endl; };
    
    
    ispis();
    return 0;
    
    
}