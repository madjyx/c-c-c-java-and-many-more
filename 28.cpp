/*Napisi strukturu vozilo, a zatim i kriterijsku funkciju za sortiranje objekata ove strukture po nekom parametru*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


struct vozilo
{
    string ime;
    string boja;
    int godiste;
    float cijena;
    
};

bool sortpoCijeni(const vozilo& prvi, const vozilo& drugi) //kriterijska funkcija
{
    return prvi.cijena < drugi.cijena;
}

bool unesiVoziloCin(vozilo&,istream&);
bool unosVozila(vozilo&,string,string,int,float);
void IspisiVozilo(vozilo & );
 
int main()
{
    
    vector<vozilo>vozila;
    vozilo x;

    unosVozila(x,"Bmw", "Plava", 2015, 25000);
    vozila.push_back(x);
    
    unosVozila(x,"Audi", "Crna", 2011, 19000);
    vozila.push_back(x);

    unesiVoziloCin(x,cin);
    vozila.push_back(x);

    
    for(auto a: vozila)
    IspisiVozilo(a);  
    
    sort(vozila.begin(), vozila.end(), sortpoCijeni);
    
        cout <<"sortirano po cijeni" <<endl;
        cout << endl << endl << endl;
        
        for(auto a: vozila)
            IspisiVozilo(a);

   }

bool unesiVoziloCin(vozilo& v ,istream& cin)
{
    
    cout << "Ime: ";
    cin>>v.ime;
     cout << "Boja: ";
    cin>>v.boja;
    cout<< "Godiste: ";
    cin>>v.godiste;
    cout << "Cijena: ";
    cin>>v.cijena;
    cout << endl;
    
}

bool unosVozila(vozilo& v,string i,string b,int g,float c)
{
    v.ime = i;
    v.boja = b;
    v.godiste = g;
    v.cijena = c;
}

    
    void IspisiVozilo(vozilo & v) 
{
       cout << "Ime: " <<  v.ime << endl;
       cout << "Boja: " << v.boja <<endl;
       cout << "Godiste: " << v.godiste <<endl;
       cout << "Cijena: " << v.cijena <<endl;
        cout << endl;
}
    
    
    
    
    
    
    
