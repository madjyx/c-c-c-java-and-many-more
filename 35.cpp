
#include <iostream>
#include <vector>
using namespace std;

template<typename A,typename B>
int pretraga(const A&, B);

   int main()
{
    vector <int> cijeli = {2,4,6,8};
    
    cout << "Vektor cijelih brojeva:" << endl;
    for(auto i : cijeli)
        cout << i << " ";
    cout << endl ;
    
    cout << "Indeks trazenog elementa je: " << " " << pretraga(cijeli,6) << endl;
   }
template<typename A, typename B>
int pretraga(const A& ulaz, B x)
{
    int indeks = -1;
    for(auto i : ulaz)
    {
        indeks++;
        if(i == x) return indeks;
    }
    
    
    return -1;
}
