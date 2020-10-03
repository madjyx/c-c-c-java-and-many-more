/*Napravi program koji pravi objekat, pointer, inicijalizira ga i ispisuje objekat i pointer(adrese i sadrzaj)*/
#include <iostream>
using namespace std;

int main()
{
    int x = 2;
    int *pok;
    pok = &x;
    
    cout << "Vrijednost objekta: "  << x << "  "  "Adresa objekta: " << &x << endl;
    cout << "Vrijednost pointera: " << pok << "  " "Adresa pointera: " << &pok << endl;
}