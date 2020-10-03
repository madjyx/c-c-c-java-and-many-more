#include <iostream>
#include <string>
using namespace std;


class Osoba
{
    private:
        string ime;
        string prezime;
        int godiste;
        
public:
    
    Osoba() : godiste(0) {}
    Osoba(string i, string p, float g) : ime(i), prezime(p), godiste(g){}
    
    string getIme() { return ime;}
    string getPrezime() { return prezime;}
    float getGodiste() { return godiste;}
    
    void setIme(string novo) { ime = novo;}
    void setPrezime(string novo) {prezime = novo;}
    void setGodiste(int novo) { godiste = novo;}
    
    virtual void ispis();
};


void Osoba::ispis()
{
    cout <<"Osoba\t" <<ime << "\t" <<prezime << "\t" << godiste << "\t" <<endl;
}


class Student : public Osoba
{
private:
    string fakultet;
    int godinaStudija;
    
public:
    Student(string i, string p, float g, string f, int gS) : Osoba(i,p,g), fakultet(f), godinaStudija(gS) {}
    
    string getFakultet() { return fakultet;}
    float getGodinaStudija() { return godinaStudija;}
    
    void setFakultet(string novo) {fakultet = novo;}
    void setGodinaStudija(int novo) { godinaStudija = novo;}
 
    void ispis();
};

void Student::ispis()
{
    cout << "Ucenik\t" << this->getIme() << "\t" << getPrezime() << "\t" << getGodiste() << "\t" << fakultet << "\t" << getGodinaStudija() << endl;
}

int main()
{
    Osoba o1("Nesiba","Spahic",1992);
    Student s1("Amina","Saletovic",1992,"IPI", 2);
    
    
      cout << "Klasa\tIme\tPrezime\tGodiste" << endl;

    o1.ispis();
    
    cout << endl<<"Klasa\tIme\tPrezime\t\tGodiste\tFax\tGodina" << endl;

    s1.ispis();
    
}