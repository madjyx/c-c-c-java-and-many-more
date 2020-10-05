/*
1. Napraviti niz karaktera najmanje dužine 100 karaktera. Popuniti ga svojim imenom i prezimenom. Nakon toga u niz dodati "Osnove Programiranja" ali tako da nakon prvog slova vašeg imena ide prvo slovo tog niza, nakon drugog drugo itd.

Za Goran Madzarevic niz bi trebao da izgleda ovako: GOosrnaoovn eM aPdrzoagrreavmiicr a n j a

Ispisati rezultantni niz na ekran.
Dodati karakter koji pretvara ovaj niz u string i pomocu funkcije ga obrnuti, ispisati i naæi njegovu velicinu


*/
#include <stdio.h>
#include <string.h>


int main(){
char niz[100]={'A','O','m','s','r','n','a',' ','o','J','v','a','e','h','P','i','r','c','o','o','g','v','r','i','a','c','m','i','r','a','n','j','a','\0'};
char string[100];
int i=0;
printf("%s\n",niz);
strcpy(string,niz);
strrev(string);
printf("%s\n",string);
i=strlen(string);
printf("Velicina stringa je : %d",i);





return 0 ;
}
