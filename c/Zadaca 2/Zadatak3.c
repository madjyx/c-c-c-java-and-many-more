/*3. Napisati zadatak tako da u odnosnu na uslove ispitane pomocu relacionih operatora
     se izvršava jedan, drugi ili treci izraz. Svaki izraz treba da sadrzi:

        -po dva aritmetricka operatora,
        -jedan logicki operator
        -jedan unarni operator.

     Objasniti rezultate u komentarima (koji se operator izvrsava prvi i zasto)

    Restrikcije: Operatori koji se koriste u jednom izrazu ne smiju se koristiti u drugom.
    Sve varijable koje se koriste unijeti sa tastature.*/

#include <stdio.h>

int main(){

    int a, b, c, d=0;

    printf("Unesite tri broja. U zavisnosti od toga koji je najveci\n");

    printf("izvrsit ce se jedan od tri izraza koji ce ispisati tocan ili netocan!!!\n");

    printf("Unesite prvi broj\n");

    scanf(" %d", &a);

    printf("Unesite drugi broj\n");

    scanf(" %d", &b);

    printf("Unesite treci broj\n");

    scanf(" %d", &c);

    if((a==b)||(a==c)||(b==c)){

        a+=2;

        ++c;

    }/*Ukoliko korisnik unese dva ili sva tri ista broja, a i c ce se povecati u pozadini da bi se izvrsila
     jedna od dolje navedenih if petlji.*/

    if((a>b)&&(a>c)){

       d=a+b!=++a+c;

        if(d==1){

       printf("Prvi izraz je tocan\n");

       }else{

       printf("Prvi izraz je netocan\n");

       }/*Ukoliko je uneseni broj a veci i od b i od c izvrsit ce se navedeni izraz. U izrazu se uporedjuje
       suma varijabli a i b sa sumom inkrementiranog a i c. Ukoliko su sume razlicite u varijablu d ce se
       smjestiti 1 sto znaci tocno, a ukoliko su sume iste u varijablu d ce se smjestiti 0 sto znaci netocno.
       U izrazu ce se prvo sumirati a i b, zatim inkrementirati a i tako inkrementirano dodati na c, zatim ce se
       izvrsiti poredjenje lijeve i desne strane.*/

    }else if((b>a)&&(b>c)){

         d=a-b==(a--)/c;

      if(d==1){

            printf("Drugi izraz je tocan\n");

       }else{

            printf("Drugi izraz je netocan\n");


       }/*Ukoliko je uneseni broj b veci i od a i od c izvrsit ce se navedeni izraz. U izrazu se uporedjuje
       razlika unesenog a i b sa kolicnikom a i c. Ukoliko su rezultati jednaki u varijablu d ce se smjestiti
       1 sto znaci tacno, a ukoliko su rezultati razliciti u varijablu d ce se smjestiti 0 sto znaci razlicito.
       Prvo ce se izvrsiti razlika sa lijeve strane jednakosti, a zatim ce se a dekrementirati, ali ce njegova vrijednost
       biti ista kao uneseno a i podijeliti sa c, s tim da bi sljedeca upotreba varijable a bila umanjena za 1. */

    }else if((c>a)&&(c>b)){

         d=a%b&&--a*c;

        if(d==1){

            printf("Treci izraz je tocan\n");

       }else{

            printf("Treci izraz je netocan\n");

       }

    }/*Ukoliko je uneseni broj c veci i od a i od b izvrsit ce se navedeni izraz. U izrazu se nalazi logicko I.
       Ukoliko je izraz sa lijeve strane pozitivan i izraz sa desne strane pozitivan u d ce se smjestiti 1 i tada
       je izraz tacan, ukoliko sa jedne strane bude izraz negativan u d ce se smjestiti 0 i izraz ce biti netacan.
       Sa lijeve strane ce se izvrsiti modulo i takav ce se uporediti sa proizvodom dekrementiranog a i c.*/

    return 0;
}
