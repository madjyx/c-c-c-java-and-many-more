
/*Napravi klasu vozilo sa nekoliko atributa, metoda i konsturktora.Definiraj konstruktore*/
#include <iostream>
#include <string>
using namespace std;

class Vozilo
{
private:
    string naziv;
    float cijena;
    
public:
    
    Vozilo() : cijena(0.0) {}
    Vozilo(float,string); 
    
    string getNaziv(){return naziv;} //metoda
    float getCijena() {return cijena;}
    
      
    void setCijena(float iznos) { cijena = iznos; }
    void setNaziv(string novi) { naziv = novi; } 
};
        
Vozilo::Vozilo(float c, string n)
{ 
  cijena = c; 
  naziv = n; 
}

int main()
{
    Vozilo audi;
    
    audi.setNaziv("Audi");
    audi.setCijena(50000);
    
    cout << "Auto: " << endl;
    cout << audi.getNaziv() << endl << audi.getCijena() << endl;
    
}
        