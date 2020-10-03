/*Napisi program koji preko map kontejnera ispisuje tabelu kvadrata brojeva od 1 do 10 */

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int,int>kvadrati;
    
    for(int i = 1; i <= 10; i++)
        kvadrati[i] = i * i;
    
    cout << "Tabela kvadrata" << endl;
    
    for(auto a : kvadrati)
        cout << a.first << " ---> " << a. second << endl;
    cout << endl;
}