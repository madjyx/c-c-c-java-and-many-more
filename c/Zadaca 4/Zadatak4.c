/*4. Napraviti jednoobraznu tablu karaktera 10x10. Na tabli promjeniti 10-16 karaktera
    u drugi karakter, tako da oni cine neku figuru(po zelji). Napisati funkciju koja nakon poziva
    tu figuru premjesta na tabli za onoliko karaktera desno i onoliko karaktera dole kolike su proslijedjene
    vrijednosti (negativne vrijednosti bi trebale da pomjeraju lijevo i gore).
    Napraviti meni u petlji i dozvoliti odabir vrijednosti za pomjeranje dok se ne izabere kraj.
    Ispisati tablu prije i posle pomijeranja.
    Napomena: Nakon pomjeranja figure karakteri koji su bili ispod figure trebaju biti jednoobrazni
    (kao i ostatak table).*/

#include<stdio.h>
#include<math.h>

void tabla(int *x, int *y);


int main(){

    int igra=0;
    char ploca[10][10];
    int i, j, p=0, c=0, m=1, n=0, o=0, e=0;
    int *pP=&p, *pC=&c;


    while(igra!=1){

    printf("\n1.Unesite 1 za pomijeranje figure.\n");
    printf("2.Unesite 0 za izlaz iz programa.\n");
    scanf(" %d", &e);
    switch(e){
    case 1:
    printf("Prije pomijeranja %d. put\n\n", m);
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            ploca[i][j]=178;
        }
      }  printf("\n");

    ploca[*pP][*pC+1]=176;
    ploca[*pP][*pC+2]=176;
    ploca[*pP+1][*pC]=176;
    ploca[*pP+1][*pC+1]=176;
    ploca[*pP+2][*pC+1]=176;
    ploca[*pP+2][*pC+2]=176;
    ploca[*pP+1][*pC+2]=176;
    ploca[*pP+1][*pC+3]=176;
    ploca[*pP+2][*pC+1]=176;
    ploca[*pP+2][*pC+0]=176;
    ploca[*pP+2][*pC+3]=176;
    ploca[*pP+2][*pC+1]=176;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
           printf("%c", ploca[i][j]);
        }
        printf("\n");
    }
    printf("Negativni brojevi pomjeraju figuru gore i lijevo!!!\n");
    printf("Unesite broj za koji zelite pomjeriti figuru dole/gore\n");
    scanf(" %d", &n);
    printf("Unesite broj za koji zelite pomjeriti figuru desno/lijevo\n");
    scanf(" %d", &o);
    printf("\nPoslije pomijeranja %d. put\n\n", m);
    *pP+=n;
    *pC+=o;
    tabla(pP, pC);//FUNKCIJA PREKO KOJE SE POMJERA OBLIK
    m++;
    break;


    case 0:
        igra=1;break;
    default:printf("\nNiste unijeli validan odabir\n");}

    }
    return 0;
}

void tabla(int *x, int *y){

    char ploca_1[10][10];
    int k, l;
     for(k=0;k<10;k++){
        for(l=0;l<10;l++){
            ploca_1[k][l]=178;
        }
      }  printf("\n");

    ploca_1[*x][*y+1]=176;
    ploca_1[*x][*y+2]=176;
    ploca_1[*x+1][*y]=176;
    ploca_1[*x+1][*y+1]=176;
    ploca_1[*x+2][*y+1]=176;
    ploca_1[*x+2][*y+2]=176;
    ploca_1[*x+1][*y+2]=176;
    ploca_1[*x+1][*y+3]=176;
    ploca_1[*x+2][*y+1]=176;
    ploca_1[*x+2][*y]=176;
    ploca_1[*x+2][*y+3]=176;
    ploca_1[*x+2][*y+1]=176;
    for(k=0;k<10;k++){
        for(l=0;l<10;l++){
           printf("%c", ploca_1[k][l]);
        }
        printf("\n");
    }

}

