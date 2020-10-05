/*1. Koristeæi pokazivaèe sortirati niz od 100 elemenata koji su popunjeni nasumiènim brojevima.
    Sortirati niz na taj naèin da je najmanji broj na prvom mjestu a najveæi na posljednjem.
    Koristiti funkciju koja kao parametre ima pokazivaèe da bi ovo realizovali. Ispisati niz a
    nakon toga ponuditi korisniku da obriše jedan element tako što æe izabrati njegov redni broj.
    Nakon brisanja elementa ponovo ispisati niz.*/

#include <stdio.h>
#include <time.h>

void ispis(int x[]);
void sort(int x[]);

int main(){

    int brojevi[100];
    int i, broj;

    srand(time(NULL));

    for(i=0;i<100;i++){
        *(brojevi+i)=rand()%100+1;
    }

    printf("BROJEVI PRIJE SORTIRANJA\n");
    ispis(brojevi);

    sort(brojevi);


    printf("BROJEVI POSLIJE SORTIRANJA\n");
    ispis(brojevi);

    printf("\nIzaberite redni broj elementa koji zelite izbrisati\n");
    scanf(" %d", &broj);

     for(i=broj-1;i<100;i++){
        *(brojevi+i)=*(brojevi+i+1);
    }

    printf("\nNAKON BRISANJA ELEMENTA\n");
    for(i=0;i<99;i++){
        printf("%2d. broj je: %3d\n",i+1, *(brojevi+i));
    }

    return 0;
}

void ispis(int x[]){

    int i;
    for(i=0;i<100;i++){
        printf("%3d. broj je: %3d\n",i+1, *(x+i));
    }
    printf("\n");

}

void sort(int x[]){

    int i, temp=0, sorted=1;

    while(sorted!=0){
        sorted=0;
        for(i=0;i<100;i++){
            if(*(x+i)>*(x+i+1)){
                temp=*(x+i);
                *(x+i)=*(x+i+1);
                *(x+i+1)=temp;
                sorted=1;
            }
        }
        if(sorted==0)break;
    }





}
