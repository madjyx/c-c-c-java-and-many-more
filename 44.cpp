/*Dinamicki alociraj memoriju za 2 cijela broja, ispisi njen sadrzaj i oslobodi je nakon ispisa*/

#include <iostream>
#include <assert.h>
using namespace std;

int main()
{
    int *pok;
    
    pok = new int[2];
    
    cout << "Unesi dva cijela broja: " << endl;
    cin>>*pok>>*(pok+1);
    
    cout << *pok << " " << *(pok+1) << endl;
    
    delete [] pok;
}