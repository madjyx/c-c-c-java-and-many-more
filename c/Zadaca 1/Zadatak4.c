./*4. Napraviti tabelu i svaki tip podatka predstaviti sa osnovnim formaterima (ukupno 6),
 tako da je u jednoj koloni jedan tip podatka.
Napraviti da se vrijednosti za podatke unose sa tastature.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){

int cijeli_broj;
float realan_broj;
char karakter;
long int hex;
long int okt;
unsigned u;




printf("Imamo 6 osnovnih formatera i kucaju se sa znakom procenta ispred slova, a to su:\n\n");

printf("Cijeli broj d\t");
scanf("%d", &cijeli_broj);
printf("Realan broj f\t");
scanf("%f", &realan_broj);
printf("Karakter s\t");
scanf("%s", &karakter);
printf("Heksadecimalni x\t");
scanf("%x", &hex);
printf("Oktalni o\t");
scanf("%o", &okt);
printf("Unsigned u\n");
scanf("%u", &u);
scanf("%u", &u);



return 0;
}
