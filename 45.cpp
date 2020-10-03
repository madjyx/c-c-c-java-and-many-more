/*Napravi klasu lista koja koristi dinamicku memoriju. Definiraj samo konsturktore i destruktore klase.*/
#include <iostream>
using namespace std;

class Lista
{
private: 
   int  *glava;

public:
     Lista() : glava(nullptr) {}
     Lista(int n) {glava = new int[n];}
    ~Lista() {delete [] glava;}
    
};

int main()
{
    
   Lista listaBrojeva(5); //glava pokazuje na dinamički niz sa 5 objekata
   return 0; //poziva destruktor klase lista
}
