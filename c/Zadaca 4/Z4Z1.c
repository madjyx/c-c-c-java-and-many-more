/*1. Napisati svoj ".h" fajl i implementirati ga.
U fajlu je potrebno da bude deklaracija i definicija funkcija koje raèunaju obim, površinu i zapreminu geometrijskih
tijela.
Izabrati 4 tijela od kojih su 2 dvodimenzionalna a 2 trodimenzionalna (može se racunati zapremina).
Napisati .c fajl koji koristi funkcije iz .h fajla da izracuna obim, površinu i zapreminu i prikaže ih na ekranu.*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#include "Z4Z1.h"
int main()
{
    int izbor;
int a,b,c,r;

    printf("RACUNANJE OBIMA POVRSINE I ZAPREMINE\n");
 A:  ;
 printf("\n");
    printf("1.Obim i povrsina Kvadrata\n");
    printf("2.Obim i povrsina Jednakostranicnog trokuta\n");
    printf("3.Povrsina i zapremina Kvadra\n");
    printf("4.Povrsina i zapremina Lopte\n");
    printf("5.Izlaz\n");
    printf("Vas izbor: ");
    scanf("%d",&izbor);

    switch(izbor){
case 1:
    printf("Unesite stranicu kvadrata a= ");
    scanf("%d",&a);
    printf("\nObim Kvadrata: %.2f",obim_kvadrata(a));
    printf("\nPovrsina Kvadrata: %.2f",povrsina_kvadrata(a));
    goto A;
case 2:
    printf("Unesite stranicu jednakostranicnog trokuta a= ");
    scanf("%d",&a);
    printf("\nObim Trokuta: %.2f",obim_trokuta(a));
    printf("\nPovrsina Trokuta: %.2f",povrsina_trokuta(a));
    goto A;
case 3:
    printf("Unesite stranice kvadra\na= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d",&b);
    printf("c= ");
    scanf("%d",&c);
    printf("\nPovrsina Kvadra: %.2f",povrsina_kvadra(a,b,c));
    printf("\nZapremina Kvadra: %.2f",zapremina_kvadra(a,b,c));
    goto A;
case 4:
    printf("Unesite stranicu lopte r= ");
    scanf("%d",&r);
    printf("\nPovrsina Lopte: %.2f",povrsina_lopte(r));
    printf("\nZapremina Lopte: %.2f",zapremina_lopte(r));
    goto A;
default:
    if(izbor==5)goto B;
    if(izbor>5)goto A;
    }
B: ;
    return 0;
}
