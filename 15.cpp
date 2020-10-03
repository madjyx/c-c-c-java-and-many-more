/*Napisati funkciju koja ce vratiti sumu 2 double broja. Pozvati je iz main() funkcije*/

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
double sum(double,double);

double sum(double x, double y)
{
    double suma;
    suma = x + y;
    return suma;  
}

int main()
{
    double a,b;
    cout << "Unesite prvi broj:   ";
    cin >> a;
    cout << "Unesite drugi broj: ";
    cin >> b;
    cout << a << " + " << b << " = " << sum(a,b) << endl;
}