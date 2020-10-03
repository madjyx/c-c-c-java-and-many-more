/*Napisi funkciju koja ce primiti cijeli broj, izmijeniti ga, a izmjena ce se vidjet i u funkciji iz koje je pozvana*/

#include <iostream>
using namespace std;
int izmijeni(int&);



int main()
{
    int x = 10;
    
    cout <<"Prije izmjene broj ima vrijednost: " <<x<<endl;
    cout<<"Poslije izmjene vrijednosti broja je: ";
    izmijeni(x);
    cout<<x<<endl;
    
}

int izmijeni(int& a)
{
   a = 16;
   return a; 
}
