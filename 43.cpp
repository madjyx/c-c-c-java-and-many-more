/*Dinamicki alociraj memoriju za 5. cijelih brojeva, popuni je brojevima i ispisi na ekran*/
#include <iostream>
#include <assert.h>
using namespace std;

int main()
{
    int broj;
    int *pok;
    
    pok = new int[5];
    
    cout << "Unesite 5. brojeva" << endl;
    cin>>*pok >> *(pok+1) >> *(pok+2) >>*(pok+3) >> *(pok + 4);
    
   cout << *pok << " ";
   cout << *(pok+1) << " ";
   cout << *(pok+2) << " ";
   cout << *(pok+3) << " ";
   cout << *(pok + 4) << " ";
   cout << endl;
   
   delete [] pok;

        
}