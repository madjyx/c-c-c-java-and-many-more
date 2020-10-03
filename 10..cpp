#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector <string> text;   

	string s;
	while (getline(cin, s))  
		text.push_back(s);  
	cout << "text.size: " << text.size() << endl;
        
        if(!text.empty())
            for(auto p : text)
                cout << p << endl;
                return 0;
}