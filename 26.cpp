/*Napravi sturkturu vozilo sa nekoliko osnovnih atributa. Definirati i popuniti objekat te srukture*/

#include <iostream>
#include <string>
using namespace std;

struct vozilo
{
    string ime;
    string boja;
    string gorivo;
    string pogon;
    int konjskih_snaga;
    int broj_vrata;
    int godiste;
    float cijena;
};

int main()
{
     vozilo mercedes;
    
    mercedes.ime = "Mercedes";
    mercedes.boja = "Siva";
    mercedes.gorivo = "Dizel";
    mercedes.pogon = "Zadnji";
    mercedes.konjskih_snaga = 265;
    mercedes.broj_vrata = 4;
    mercedes.godiste = 2014;
    mercedes.cijena = 25.000;
    
    cout << mercedes.ime << endl;
    cout << mercedes.boja << endl;
    cout << mercedes.gorivo << endl;
    cout << mercedes.pogon << endl;
    cout << mercedes.konjskih_snaga << endl;
    cout << mercedes.broj_vrata << endl;
    cout << mercedes.godiste << endl;
    cout << mercedes.cijena << endl; 
}