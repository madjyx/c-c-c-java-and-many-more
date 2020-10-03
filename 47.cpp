/*Napravi klasu lista koja koristi dinamicku memoriju. Deklarisi sve metode, konstruktore, destruktore i operatore*/
#include <iostream>
using namespace std;

class Lista
{
private:
    int *glava;
    int vel;
    int kap;
    
public:
    Lista() : glava(new int[1]), vel(0), kap(1) {}
    Lista(int n) : glava(new int[n]), vel(0), kap(n) {}
    Lista(const Lista&);
    
    ~Lista() { delete[] glava;}
    
    int velicina() const {return vel;}
    int kapacitet() const {return kap;}
    int *prvi() const {return glava;}
    
    void dodaj(int a);
    Lista& operator = (const Lista&);
};

Lista::Lista(const Lista& b)
{
    vel = b.velicina();
    kap = b.kapacitet();
    glava = new int[kap];
    for(int i = 0; i < vel; i++)
        *(glava + i) = *(b.prvi() + i);
}

Lista& Lista::operator = (const Lista& b)
{
 if(this != &b)
 {   
     delete[] glava;
     vel = b.velicina();
     kap = b.kapacitet();
     glava = new int[kap];
     
     for(int i = 0; i < vel; i++)
         *(glava + i) = *(b.prvi() + i);
}
}

void Lista::dodaj(int a)
{
    
    if(this->velicina() >= this->kapacitet())
    {
        kap = this->kapacitet() * 2;
        int *temp = new int[kap];
        for(int i = 0; i < this->velicina(); i++)
            *(temp + i) = *(glava + i);
        
        delete [] glava;
        glava = temp;
    }
    
    *(glava+(vel++)) = a;
}



int main()
{
   Lista x,z;
   x.dodaj(3);
   x.dodaj(4);
   x.dodaj(5);
   cout << "X: " << *(x.prvi()) << " " << *(x.prvi()+1) << " " << *(x.prvi()+2) << endl << endl;
   Lista y = x; //poziva se copy konstruktor
   z = x; //poziva se operator za dodjeljivanje vrijednosti
   cout << "X: " << *(x.prvi()) << " " << *(x.prvi()+1) << " " << *(x.prvi()+2) << endl;
   cout << "Y: " << *(y.prvi()) << " " << *(y.prvi()+1) << " " << *(y.prvi()+2) << endl;
   cout << "Z: " << *(z.prvi()) << " " << *(z.prvi()+1) << " " << *(z.prvi()+2) << endl << endl;
   y.dodaj(30);
   cout << "X: " << *(x.prvi()) << " " << *(x.prvi()+1) << " " << *(x.prvi()+2) << endl;
   cout << "Y: " << *(y.prvi()) << " " << *(y.prvi()+1) << " " << *(y.prvi()+2) << " " << *(y.prvi()+3) << endl;
   cout << "Z: " << *(z.prvi()) << " " << *(z.prvi()+1) << " " << *(z.prvi()+2) << endl << endl;

   return 0;
}