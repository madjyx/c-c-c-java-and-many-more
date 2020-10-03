/*Napisi kriterijsku funkciju koja poredi dva string objekta i vraca tacno/netacno ovisno ima li prvi string objekat 
 vise karaktera od drugog ili nema*/

#include <iostream>
#include <string>
using namespace std;
bool provjeri(string,string);

int main()
{
    string s1,s2;
    
    cout << "Unesi prvi string :  ";
    cin>>s1;
    
    cout << "Unesi drugi string :  ";
    cin>>s2;
    
    if(provjeri(s1,s2) == true)
        
        cout << "string " << s1 << "veci je od stringa " << s2 << endl;
    
    else 
                cout << "string " << s2 << " veci je od stringa " << s1 << endl;
    
}

bool provjeri(string rijec1, string rijec2)
{
    if(rijec1.size() > rijec2.size())
        return true;
}