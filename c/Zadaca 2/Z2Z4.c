/* 4. Napisati program koji u jednom matematickom izrazu koristi sve operatore sa bitima.

Prije toga definisati odgovarajuæi broj razlièitih varijabli koje æe se koristiti u tom izrazu (za svaki operator
potrebna najmanje jedna varijabla).

Ispisati rezultat operacije i u komentarima ga objasniti na sljedeci nacin:

svaku varijablu predstaviti binarno i sta se desava kod svake operacije redom (prioritetima) kojim se izvrsavaju
operacije.

Primjer: ako su varijable a,b,c,d,e,f. rez=a&b>>c<<d|(~e)^f */



#include <stdio.h>

int main()
{
    int a=14,b=10,c=17,d=20,e=24,rez1,rez2,rez3,rez4,rez5,konacno;
    rez1=a&b;
    printf("Nas izraz je (a&b)|(~(d^c)&(e<<3))\n\n");
    //Moramo predstaviti a i b binarno
    // a =  00001110
    // b =  00001010
    //rez1= 00001010 = 10
    printf("Rezultat logickog I sa bitima je: %d\n",rez1);
    rez2=d^c;
    //Moramo predstaviti d i c binarno
    // d = 00010100
    // c = 00010001
    //rez= 00000101 = 5
     printf("Rezultat ekskluzivnog logickog ILI sa bitima je: %d\n",rez2);
    // Sada racunamo ~(d^c) tj ~rez2
    rez3=~rez2;
    //Moramo predstaviti rez2 binarno
    // Prvi komplement zapravo mjenja 0 za 1 u podatku a 1 za 0 tako da dobijemo
    // rez2 = 00000000 00000000 00000000 00000101
    // rez 3= 11111111 11111111 11111111 11111010 = -6
    printf("Rezultat prvog komplementa sa bitima je sa bitima je: %d\n",rez3);
    rez4= e<<3;
    //Moramo predstaviti e binarno
    //e =  00011000
    //rez4=11000000 = 192
    printf("Rezultat pomjeranje bita u lijevo za 3  je: %d\n",rez4);
    //sljedece sto trebamo uraditi je (~(d^c)&(e<<3))
    rez5= rez3&rez4;
//objasnjeno je prethodno kako dobiti rezultat za logicko I
  printf("Rezultat rez3 logickog I je: %d\n",rez5);
  konacno= rez1|rez5;
  //rez1=   00001010
  //rez5=   11000000
  //konacno=11001010 = 202
  printf("Konacni rezultat ( logicko ili ) je: %d\n",konacno);
    return 0;
}
