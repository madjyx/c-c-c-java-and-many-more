/*Napravi klasu vozilo sa nekoliko atributa, metoda i konstruktora. Definiraj metode*/

#include <iostream>
using namespace std;

class Vozilo
{
private:
    string naziv;
    float cijena;
    
public:
    Vozilo() : cijena(0.0) {}
    Vozilo(string,float);
    
    string getNaziv();
    float getCijena();
    
    void setNaziv(string novi);
    void setCijena(float iznos); 
};


string Vozilo :: getNaziv() {return naziv;}
float Vozilo :: getCijena() {return cijena;}

void Vozilo :: setNaziv(string novi) {  naziv=novi;}
void Vozilo :: setCijena(float iznos) { cijena = iznos;} 

int main()
{
    Vozilo v;
    
    v.setNaziv("BMW");
    v.setCijena(4000);
   
    cout << "Auto: " << v.getNaziv() << endl << "Cijena: " << v.getCijena()<<endl;
}