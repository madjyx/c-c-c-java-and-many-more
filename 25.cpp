/*Napisi lambdu koja dohvata objekat po referenci i ispisuje ga*/

#include <iostream>
using namespace std;

int main()
{
    int broj = 4;
    
    
    auto ispis = [&broj] ()  { cout << broj << endl; };
    
    
    ispis();
    return 0;
    
    
}