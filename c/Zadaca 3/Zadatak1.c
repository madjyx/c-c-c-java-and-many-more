/*1. Napisati program koji moze izvrsiti osnovne aritmeticke operacije (+,-./,*)
    sa dva niza od 10 elemenata koje korisnik treba da unese (vrijednosti mogu ici od 0-99).
    Rezultat ispisati na ekran, a poslije toga korisniku dati mogucnost izbora da li da nastavi sa programom ili da ga napusti.
    Rezultat ispisati u sljedecem obliku (za recimo operaciju +):
    1  2  3    4    5   6    7    8    9   10
    +  +  +    +    +   +    +    +    +    +
    2  4  6    8    9  11   32   51   35   53
    --------------------------------------------
    3  6  9   12   14  17   39   59   44   63*/

#include <stdio.h>


void izlaz(int *x);


int main (){

    int prvi[10];
    int drugi[10];
    int rez[10];
    float dijeljenje[10];
    int i, j=0, opet=1;
    char znak, linija='-', promjena, novi;

    printf("Unesite 10 brojeva u rasponu od 0-99\n");
    for(i=0;i<10;i++){
        printf("Unesite %2d. broj:\n", i+1);
        scanf(" %d", &prvi[i]);
    }
    printf("Unesite drugih 10 brojeva u rasponu od 0-99\n");
    for(i=0;i<10;i++){
        printf("Unesite %2d. broj:\n", i+1);
        scanf(" %d", &drugi[i]);
    }
    printf("Unesite operaciju koju zelite da izvrsite nad nizovima:\n");
    scanf(" %c", &znak);

    while(opet==1){

    j++;
    if(j>1){
        printf("Zelite li unijeti nove nizove\n");
        scanf(" %c", &novi);
        if(novi=='D'||novi=='d'){
             printf("Unesite 10 brojeva u rasponu od 0-99\n");
    for(i=0;i<10;i++){
        printf("Unesite %2d. broj:\n", i+1);
        scanf(" %d", &prvi[i]);
    }
    printf("Unesite drugih 10 brojeva u rasponu od 0-99\n");
    for(i=0;i<10;i++){
        printf("Unesite %2d. broj:\n", i+1);
        scanf(" %d", &drugi[i]);
        }
        }

    }
     if(j>1){
    printf("Unesite aritmeticku operaciju\n");
    scanf(" %c", &znak);
    }
        switch(znak){
    case '+':
        for(i=0; i<10; i++){
            printf(" %2d", prvi[i]);
        }printf("\n");
         for(i=0; i<10; i++){
            printf(" %2c", znak);
        }printf("\n");
         for(i=0; i<10; i++){
            printf(" %2d", drugi[i]);
        }printf("\n");
         for(i=0; i<10; i++){
            printf(" %2c", linija);
        }printf("\n");
         for(i=0; i<10; i++){
            rez[i]=prvi[i]+drugi[i];
            printf(" %2d", rez[i]);
        }printf("\n");
        printf("Da li zelite da promjenite operaciju??\n");
            scanf(" %c", &promjena);
            if (promjena=='D'||promjena=='d')
            {
                znak='t';
            }else{
                 izlaz(&opet);
        }
        case 't':break;
        case '-':
        for(i=0; i<10; i++){
            printf(" %2d", prvi[i]);
        }printf("\n");
         for(i=0; i<10; i++){
            printf(" %2c", znak);
        }printf("\n");
         for(i=0; i<10; i++){
            printf(" %2d", drugi[i]);
        }printf("\n");
         for(i=0; i<10; i++){
            printf(" %2c", linija);
        }printf("\n");
         for(i=0; i<10; i++){
            rez[i]=prvi[i]-drugi[i];
            printf(" %2d", rez[i]);
        }printf("\n");
         printf("Da li zelite da promjenite operaciju??\n");
            scanf(" %c", &promjena);
            if (promjena=='D'||promjena=='d')
            {
                znak='l';
            }else{
                 izlaz(&opet);
        }
        case 'l':break;
        case '*':
        for(i=0; i<10; i++){
            printf(" %2d", prvi[i]);
        }printf("\n");
         for(i=0; i<10; i++){
            printf(" %2c", znak);
        }printf("\n");
         for(i=0; i<10; i++){
            printf(" %2d", drugi[i]);
        }printf("\n");
         for(i=0; i<10; i++){
            printf(" %2c", linija);
        }printf("\n");
         for(i=0; i<10; i++){
            rez[i]=prvi[i]*drugi[i];
            printf(" %2d", rez[i]);
        }printf("\n");
        printf("Da li zelite da promjenite operaciju??\n");
            scanf(" %c", &promjena);
            if (promjena=='D'||promjena=='d')
            {
                znak='p';
            }else{
                 izlaz(&opet);
        }
        case 'p':break;
        case '/':
        for(i=0; i<10; i++){
            printf(" %4d", prvi[i]);
        }printf("\n");
         for(i=0; i<10; i++){
            printf(" %4c", znak);
        }printf("\n");
         for(i=0; i<10; i++){
            printf(" %4d", drugi[i]);
        }printf("\n");
         for(i=0; i<10; i++){
            printf(" %4c", linija);
        }printf("\n");
         for(i=0; i<10; i++){
            dijeljenje[i]=(float)prvi[i]/(float)drugi[i];
            printf(" %2.2f", dijeljenje[i]);
        }printf("\n");
        printf("Da li zelite da promjenite operaciju??\n");
            scanf(" %c", &promjena);
            if (promjena=='D'||promjena=='d')
            {
                znak='D';
            }else{
                 izlaz(&opet);
        }

        case 'D':break;

        }



    }


    return 0;
}

void izlaz(int *x){

    char y;

    printf("Da li zelite nastaviti sa programom D/N\n");
    scanf(" %c", &y);
    if((y=='N')||(y=='n')){
         *x=0;
    }else{
        *x=1;

    }
}




