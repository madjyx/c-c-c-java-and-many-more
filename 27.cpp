/*Napraviti strukturu osoba sa nekoliko atributa, a zatim i funkciju koja popunjava polja strukture*/

#include <iostream>
#include <string>
using namespace std;

struct osoba
{
    string jmbg;
    string ime;
    string prezime;
    int godiste;
    float visina;
    float tezina;
};

bool unesiOsobu(osoba&,istream&);
void ispisiOsobu(osoba&);

main()
{
    osoba x;
    
    unesiOsobu(x,cin);
    
    ispisiOsobu(x);
}

bool unesiOsobu(osoba& o, istream &cin)
{
    cout << "JMBG: ";
    cin >> o.jmbg;
    cout << "IME: ";
    cin >> o.ime;
    cout << "PREZIME: ";
    cin >> o.prezime;
    cout << "GODISTE: ";
    cin >> o.godiste;
    cout << "VISINA: ";
    cin >> o.visina;
    cout << "TEZINA: ";
    cin >> o.tezina;
    cout << endl;
}

void ispisiOsobu(osoba& o)
{
    cout << "JMBG:  " << o.jmbg << endl;
    cout << "IME:   " << o.ime << endl;
    cout << "PREZIME: " << o.prezime << endl;
    cout << "GODISTE: " << o.godiste << endl;
    cout << "VISINA: " << o.visina << endl;
    cout << "TEZINA: " << o.tezina << endl;  
}
            

