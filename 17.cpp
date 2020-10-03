/*Napisi funkciju koja prima dva broja po referenci i vraca njihovu summu. Pozvati je iz main() funkcije*/

#include <iostream>
#include <cmath>
using namespace std;
int suma(const int&, const int&);

int suma(const int &x,const int &y)
{
    int sum;
    sum = x + y;
    return sum;
}


int main()
{
   int broj1,broj2;
   cout<<"Unesite prvi broj:   ";
   cin>>broj1;
   cout << "Unesite drugi broj:  ";
   cin>>broj2;
   cout << "Suma brojeva po referenci:  " << endl;
   cout << broj1 << " + " << broj2 << " = " << suma(broj1,broj2) << endl;
}