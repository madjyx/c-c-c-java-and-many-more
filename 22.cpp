/*Napisi funkciju koja prima broj i ispisuje ga na ekran. U main() funkciji dodijeli tu funkciju function objektu i pozovi je preko
 tog objekta*/

#include <iostream>
#include <functional>
using namespace std;

void ispis(int x)
{
    cout<< x << endl;
}


int main()
{
    int broj;
    cout << "Unesite broj:  ";
    cin>>broj;
    
     function<void(int)> isp = ispis;
    
     cout << "Funkcija je dodijeljena function objektu " << endl;
      isp(broj);
      return 0;
    
}
