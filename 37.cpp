/*Napravi strukturu artikal i definiraj nekoliko metoda*/
#include <iostream>
#include <string>
using namespace std;

struct Artikal
{
private:
    string naziv;
    float cijena;
    
public:
    string getNaziv();
    float  getCijena();
    
    void setNaziv(string novi);
    void setCijena(float iznos);   
};

 float Artikal::getCijena() {return cijena;}
 string Artikal::getNaziv() {return naziv;}
 
 void Artikal::setCijena(float iznos) {cijena = iznos;}
 void Artikal::setNaziv(string novi) {naziv = novi;}

int main()
{
    Artikal mlijeko;
    
    Artikal mlijeko;
    mlijeko.setCijena(1.5);
    mlijeko.setNaziv("Mlijeko 2.8%");
    
    cout << "Naziv:  " << mlijeko.getNaziv() <<endl<< "Cijena: " << mlijeko.getCijena() << endl;
   


    
    
}