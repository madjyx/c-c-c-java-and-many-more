/*Napravi strukturu vozilo i par funkcija koje mijenjaju atribute strukture*/

#include <iostream>
using namespace std;

struct vozilo
{
    string ime;
    double cijena;
    int godiste;
    
};
void povecajCijenu(vozilo& v, double iznos)
{
    v.cijena = v.cijena + iznos;
}

void promijeniIme(vozilo& v, string novoIme)
{
    v.ime = novoIme;
}


int main()
{
    vozilo audi;
    audi.ime = "Audi";
    audi.cijena = 15000;
    audi.godiste = 2014;
    
    cout << " Ime: " << audi.ime << endl << " Cijena " << audi.cijena << endl <<" Godiste" << audi.godiste << endl;
    
    cout << endl << endl;
    cout << "Nakon povecanja cijene: " << endl;
    cout << endl;
    povecajCijenu(audi,1000);
    
     cout << " Ime: " << audi.ime << endl << " Cijena " << audi.cijena << endl<<" Godiste" << audi.godiste << endl;

    
     cout << "Novo ime: " << endl;
     cout << endl;
     
     cout<<"Unesite novo ime auta: ";
     string i;
     cin>>i;
     
     promijeniIme(audi,i);
     cout << endl;
     
     cout << " Ime: " << audi.ime << endl << " Cijena " << audi.cijena << endl<<" Godiste" << audi.godiste << endl;

    
    
}