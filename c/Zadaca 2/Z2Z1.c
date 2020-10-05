/*1. Napisati program koji ispisuje ASCII tabelu na ekranu na sljedeci nacin:

- Napraviti tabelu tako da ima 4 kolone
- Za svaki karakter u ASCII tabeli u ostalim kolonama navesti broj koji ga
- predstavlja u:
        -decimalnom,
        -oktalnom i
        -heksadecimalnom formatu.
- Tabela treba da ima 256 redova */

#include <stdio.h>

int main()
{
    int i;

   printf("________________________________________\n");
    for(i=0; i<=256; i++)
    {

        printf("|Karakter : %-c | DEC:%-d  | OKT:%-o  | HEX:%-x |\n ", i, i, i, i);

    }
 printf("______________________________________________");
    return 0;
}
