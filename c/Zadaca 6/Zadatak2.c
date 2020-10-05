/*2. Napravite program koji radi izvlaèenje karti iz špila. Karta treba da bude predstavljena znakom
    (pik, tref, karo, srce) i brojem - u sluèaju 12 koristiti string žandar, 13 - string Kraljica, 14 - string Kralj.
     Od korisnika tražiti koliko karti želi da izvuèe, i sluèajnim odabirom mu dodijeliti taj broj karata i ispisati
     sve dodijeljeno na ekran.

     Primjer: Recimo ako je odabir 3 možemo dobiti sljedeæi ispis

      7       - Pik
     10     - Baklava
     Kralj -  Karo*/

#include <stdio.h>
#include <time.h>


int main(){

    char znak[7][15]={{"Pik"},
                     {"Tref"},
                     {"Herc"},
                     {"Karo"},
                     {"Zandar"},
                     {"Kraljica"},
                     {"Kralj"}};
    int brKarata, i, rand_1, rand_2;

     srand (time(NULL));

    printf("Koliko karata zelite izvuci\n\n");
    scanf(" %d", &brKarata);

    printf("IZVUKLI STE SLJEDECE KARTE:\n\n");

    for(i=0;i<brKarata;i++){
        rand_1=rand()%12+2;
        rand_2=rand()%3;
        if(rand_1<12){
        printf("%2d.Karta: %d - %s\n",i+1, rand_1, znak[rand_2]);
        }else{
        printf("%2d.Karta: %s - %s\n",i+1, (rand_1==12)?znak[4]:(rand_1==13)?znak[5]:(rand_1==14)?znak[6]:" ", znak[rand_2]);
        }

    }




    return 0;
}
