/*5. Napraviti niz realnih brojeva od 500.000 elemenata i popuniti ga
    nasumicnim vrijednostima (rand()*0.1 ili
    bilo koji realan broj) i sortirati ga. Dozvoliti korisniku da bira
    izmeðu binarnog pretraživanja sekvencijalnog pretraživanja.
    Uporediti vrijeme završavanja programa jednog i drugog*/

#include<stdio.h>
#include<time.h>
#define MAX 500

int main(){

    float niz[MAX];
    int i,j, a, zamjena, pozicija, provjera=0;
    float kljuc;
    int nadjen, pocetak=0, kraj=MAX-1, tacka=(pocetak+kraj)/2;

    srand(time(NULL));

    for(i=0;i<MAX;i++){
        niz[i]=rand()*0.1;
    }

    printf("\n\nMENU_1\n\n");//za binarno pretrazivanje lista mora biti sortirana, za testiranje algoritama mozete
    printf("1.Selekcijom\n");//staviti manji broj elemenata u predefinisanoj konstanti MAX
    printf("2.Bubble Sort\n");


    printf("Izaberite nacin sortiranja\n");
    scanf(" %d", &a);

    switch(a){
    case 1:
    for(i=0;i<MAX-1;i++){

        pozicija=i;

        for(j=i+1;j<MAX;j++){
        if(niz[pozicija]>niz[j]){
            pozicija=j;
        }
        if(pozicija!=i){
            zamjena=niz[i];
            niz[i]=niz[pozicija];
            niz[pozicija]=zamjena;
        }
        }
    }break;
    case 2:
        for(i=0;i<MAX-1;i++){
            for(j=0;j<MAX-1;j++){
                if(niz[j]>niz[j+1]){
                    zamjena=niz[j];
                    niz[j]=niz[j+1];
                    niz[j+1]=zamjena;
                }
            }
        }break;

    }


    printf("\n\nMENU_2\n\n");
    printf("1.Sekvencijalno\n");
    printf("2.Binarno\n");


    printf("Odaberite nacin pretrazivanja\n");
    scanf(" %d", &a);

    switch(a){
    case 1:
        printf("Unesite element koji trazite\n");
        scanf(" %f", &kljuc);
        for(i=0;i<MAX;i++){
        if(niz[i]==kljuc)
        {
            printf("Kljuc je nadjen\n");
            provjera=1;
        }
    }
    if(provjera==0)printf("Kljuc nije nadjen\n");

    break;
    case 2:
        printf("Unesite element koji trazite\n");
        scanf(" %f", &kljuc);
        while(kraj>=pocetak){
            if(kljuc>niz[tacka]){
                pocetak=tacka+1;
            }else{
                if(kljuc==niz[tacka]){
                printf("Kljuc je nadjen\n");}
                else printf("Kljuc nije nadjen\n");
                break;
            }tacka=(pocetak+kraj)/2;
        }

        break;

    }




    return 0;
}
