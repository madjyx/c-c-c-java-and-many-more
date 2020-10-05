/*

2. Napravite program koji radi izvlaèenje karti iz špila. Karta treba da bude predstavljena znakom (pik, tref, karo, srce) i brojem -
u sluèaju 12 koristiti string žandar, 13 - string Kraljica, 14 - string Kralj. Od korisnika tražiti koliko karti želi da izvuèe, i sluèajnim odabirom mu dodijeliti taj broj karata i ispisati sve dodijeljeno na ekran.

Primjer: Recimo ako je odabir 3 možemo dobiti sljedeæi ispis

7       - Pik
10     - Baklava
Kralj -  Karo */
#include <stdio.h>
#include <string.h>


int main(){
int karta;
int a;
char niz1[4][20] = { "tref", "srce", "pik", "karo"};
char niz2[13][30]={"1","2","3","4","5","6","7","8","9","10","zandar","kraljica","kralj"};
srand(time(NULL));
printf("Koliko karti zelite da izvucete :");
scanf("%d",&karta);
for(a=0;a<karta;a++){


printf ("%s\t-",niz2[rand()%13]);
printf ("%s\n",niz1[rand()%4]);

}
return 0;
}
