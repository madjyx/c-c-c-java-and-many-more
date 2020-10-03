/*Napravi niz od 3 elementa, popuni ga preko indeksiranja, a ispisi ga preko pointera*/
#include <iostream>
using namespace std;

int main()
{
    int niz[3];
 
    
    niz[0] = 5;
    niz[1] = 2;
    niz[2] = 3;
   
    
    int *pokazivac;
    pokazivac = &niz[0];
    
    cout << *pokazivac << "  " << *(pokazivac + 1) <<"  "<< *(pokazivac + 2)  <<endl;

}