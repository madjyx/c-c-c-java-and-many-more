/*Napisati generičku funkciju za sumiranje brojeva. Pozovi je iz main funkcije sa više razlicitih parametara*/
#include <iostream>
using namespace std;

template<typename T>
T saberi(T prvi, T drugi)
{
    T rezultat;
    rezultat = prvi + drugi;
    return rezultat;
}

int main()
{
    int i1 = 2, i2 = 4;
    float f1 = 3.2, f2 = 2.2;
    double d1 = 80.2, d2 = 20.2;
    
   auto ir =  saberi(i1,i2);
   auto iff =  saberi(f1,f2);
   auto id =  saberi(d1,d2);
   
   cout << "INT: " << ir << endl << "FLOAT: " << iff << endl << "DOUBLE: " << id  << endl;
}