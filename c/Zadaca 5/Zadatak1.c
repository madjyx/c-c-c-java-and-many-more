/*1. Napraviti niz karaktera najmanje dužine 100 karaktera. Popuniti ga svojim imenom i prezimenom.
    Nakon toga u niz dodati "Osnove Programiranja" ali tako da nakon prvog slova vašeg imena ide prvo
    slovo tog niza, nakon drugog drugo itd.

    Za Goran Madzarevic niz bi trebao da izgleda ovako: GOosrnaoovn eM aPdrzoagrreavmiicr a n j a

    Ispisati rezultantni niz na ekran.
    Dodati karakter koji pretvara ovaj niz u string i pomocu funkcije ga obrnuti, ispisati i naæi njegovu velicinu.*/

#include<stdio.h>
#include<string.h>

int main(){

    char karakteri[100]={'Z','O','v','s','o','n','n','o','i','v','m','e','i','r', 'M','P','a','r','d','o','a','g','r','r','a','a','c','m','k','i','','r','a','n','j','a','\0'};
    char string[100];
    int i;

    printf("%s\n\n", karakteri);
    strcpy(string, karakteri);
    strrev(string);
    printf("%s\n\n", string);
    printf("Duzina stringa je: %d\n\n", strlen(string));


    return 0;
}
