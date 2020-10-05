/*5. Napraviti igru podmornice za dva igraèa. (Koristiti nizove ili matrice karaktera)

    -Ispisati pravila prije poèetka igre.
        -Inicijalizirati igraæu ploèe
        -Isprintati ploèe
        -postaviti brodove igraèa 1 i igraèa 2 (unutar koda)
        -realizirati igru tako da nakon svakog poteza se ponovo isprintaju table na kojoj se igra sa pogotkom ili promasajem

    Napomena: Za dva igraèa trebaju dvije table*/

#include<stdio.h>

void izlaz(int *x);
void ploca (int (*x)[7]);
void printPloca(int (*x)[7]);

int main(){

    int tabla_1[7][7], tabla_2[7][7];
    int i, j, igra=1, igra_1=1, unos, pogodak=0, pogodak_1=0;
    int *pTabla_1, *pTabla_2;
    pTabla_1=&tabla_1[0][0];
    pTabla_2=&tabla_2[0][0];

    printf("%10sDOBRO DOSLI U IGRU PODMORNICE!!!\n\n", " ");
    while(igra==1){
    ploca(tabla_1);
    ploca(tabla_2);
    igra_1=1;
    pogodak=0;
    pogodak_1=0;
    while(igra_1==1){
        printf("TABLA IGRACA 2\n\n");
        printPloca(tabla_2);
        printf("Igrac 1. napada!!!Unesite polje koje zelite napasti\n");
        printf("Prikazat ce se tabla igraca 2\nBrodovi su rucno postavljeni!!!\n");
        scanf(" %d", &unos);
        *(pTabla_2+(unos-1))=0;
        printPloca(tabla_2);
        if(unos==41||unos==48){
            printf("Pogodak!!!\n\n");
            pogodak++;
        }else if(unos==15||unos==16||unos==17){
            printf("Pogodak!!!\n\n");
            pogodak++;
        }else if(unos==3||unos==4||unos==5){
            printf("Pogodak!!!\n\n");
            pogodak++;
        }else if(unos==21||unos==28||unos==35||unos==42){
            printf("Pogodak!!!\n\n");
            pogodak++;
        }else if(unos==12||unos==8||unos==9||unos==10||unos==11){
            printf("Pogodak!!!\n\n");
            pogodak++;
        }else{
            printf("Promasaj!!!\n\n");
        }
        printf("-----------------------------------------\n\n");
        if(pogodak==17){
            printf("Igrac 1 je pobijedio!!! Cestitamo!!!\n\n");
            igra_1=0;
        }
        printf("TABLA IGRACA 1\n\n");
        printPloca(tabla_1);
        printf("Igrac 2. napada!!!Unesite polje koje zelite napasti\n");
        printf("Prikazat ce se tabla igraca 1\nBrodovi su rucno postavljeni!!!\n");
        scanf(" %d", &unos);
        *(pTabla_1+(unos-1))=0;
        printPloca(tabla_1);
         if(unos==8||unos==9){
            printf("Pogodak!!!\n\n");
            pogodak_1++;
        }else if(unos==19||unos==26||unos==12){
            printf("Pogodak!!!\n\n");
            pogodak_1++;
        }else if(unos==43||unos==44||unos==45){
            printf("Pogodak!!!\n\n");
            pogodak_1++;
        }else if(unos==6||unos==13||unos==20||unos==27){
            printf("Pogodak!!!\n\n");
            pogodak_1++;
        }else if(unos==33||unos==29||unos==30||unos==31||unos==32){
            printf("Pogodak!!!\n\n");
            pogodak_1++;
        }else{
            printf("Promasaj!!!\n\n");
        }
        printf("-----------------------------------------\n\n");
        if(pogodak_1==17){
            printf("Igrac 2 je pobijedio!!! Cestitamo!!!\n\n");
            igra_1=0;
        }
    }

    izlaz(&igra);

    }

    return 0;
}

void ploca (int (*x)[7]){
    int i, j, k=1;

    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            x[i][j]=k++;
        }
    }

}
void printPloca(int (*x)[7]){
    int i,j;
    for(i=0;i<7;i++){
        for(j=0;j<7;j++){
            printf("%3d",x[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

}

void izlaz(int *x){
    char c;
    printf("Da li zelite izaci iz igre? D/N\n");
    scanf(" %c", &c);
     if(c=='D'||c=='N'){
            c+32;
    }
    if(c=='d'){
        *x=0;
    }else{
        *x=1;
    }
}
