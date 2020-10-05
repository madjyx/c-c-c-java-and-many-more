/*1. Napisati program koji ispisuje ASCII tabelu na ekranu na sljedeci nacin:

- Napraviti tabelu tako da ima 4 kolone
- Za svaki karakter u ASCII tabeli u ostalim kolonama navesti broj koji ga
- predstavlja u:
        -decimalnom,
        -oktalnom i
        -heksadecimalnom formatu.
- Tabela treba da ima 256 redova*/

#include <stdio.h>

int main(){


    int i;

    printf("R.br. Karakter\tR.br Decimalno\tR.br. Oktalno\t R.br. Heksadecimalno\n");

    for(i=1;i<=256;i++){

        printf("%3d. %3c\t%3d. %3d\t%3d. %3o\t%3d. %3x\n",i,i,i,i,i,i,i,i);

    }

    return 0;
}
