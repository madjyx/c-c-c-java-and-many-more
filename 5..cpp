#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main()
{
	
	string s1("Neska "), s2 = ("voli  "), s3 = ("programiranje ");
	
	string s4 = s1  + s2 + s3;
	
	cout << s4 << endl;
	
	string s5("puno");
	
	string s6 = s4 + s5;
	
	cout << s6 <<endl;
	
}
