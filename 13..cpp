/*Napisi program  koji definira objekat, referencu, konstantni objekat, kostantnu referencu, te mijenja vrijednost ovih objekata. 
Komentarisati sadrzaj objekata na kraju programa*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int cijeliBroj = 10;  // objekat cijeli broj
	int &rCijeliBroj = cijeliBroj; //referenca za objekat cijeli broj
	
	cout << cijeliBroj << " " << rCijeliBroj << endl;
	
	cijeliBroj = 15; 
	rCijeliBroj = 20; //mijenjanje vrijednosti objekat pomocu refe
	
	cout << cijeliBroj << " " << rCijeliBroj << endl;
	
	const int konstCijeliBroj = 4; //konstantni objekat
	int drugiCijeliBroj = 1;
	
	const int &konstRef = konstCijeliBroj; //konstantna referenca 
	const int &konstRef2 = drugiCijeliBroj;
	
	cout << konstCijeliBroj <<" " <<  drugiCijeliBroj << endl;
	cout << konstRef << " " <<  konstRef2 << endl;
	drugiCijeliBroj = 40;
	
	cout << konstRef << " " << konstRef2 << endl;
    
    return 0;
	
	
	

}
