/*Napisi funkciju koja pretrazuje kontejner i vraca indeks trazenog elementa.(U suprotnom vraca -1).*/

#include <iostream>
#include <vector>
using namespace std;
int pretraga(const vector <int>&,int);

int main()
{
    vector <int> cijeli = {20,80,33,99,250,14,2,7,36};
    
    cout << "Vektor cijeli brojeva " << endl;
    for(auto i : cijeli)
        cout << i << " ";
    cout << endl << endl;
    
    int broj;
    cout<<"Unesite element koji zelite pretrazivat " << endl;
    cin>>broj;
    
    cout << "Indeks trazenog elementa " << broj << " je " << pretraga(cijeli,broj) << endl << endl;
    cout << endl;
    
    return 0;
}

int pretraga(const vector <int>& ulaz, int x)
{
    int indeks = -1;
    
    for(auto i: ulaz )
    {
        indeks++;
        if(i == x) return indeks;
    }
    return -1;
    }
