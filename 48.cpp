#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int i = 10;
    
    //lvalue
    a; //izraz
    ++i; //izraz
    int &lra = a; //referenca
    
    //rvalue
    10+2; //izraz
    i++; //izraz
    int &&rri = i*10; //referenca
    
    cout << lra<<" "<<&lra<<endl;
    cout << rri<<" "<<&rri<<endl;
    
    return 0;
}
