/*Napravi klasu lista koja koristi dinamicku memoriju. Definiraj samo konsturktore(ukljucujuci i copy).*/

#include <iostream>
using namespace std;

class Lista
{
private:
    
    int *glava;
    
public:
    
    Lista() : glava(nullptr) {}
    Lista(int n) { glava = new int[n];}
    Lista(const Lista&);
};

int main()
{
   Lista listaBrojeva(5); 
}