/*4. Napisati program koji u jednom matematickom izrazu koristi sve operatore sa bitima.
    Prije toga definisati odgovarajuæi broj razlicitih varijabli koje ce se koristiti u tom
    izrazu (za svaki operator potrebna najmanje jedna varijabla).
    Ispisati rezultat operacije i u komentarima ga objasniti na sljedeci nacin:
    svaku varijablu predstaviti binarno i sta se desava kod svake operacije redom
    (prioritetima) kojim se izvrsavaju operacije.
    Primjer: ako su varijable a,b,c,d,e,f. rez=a&b>>c<<d|(~e)^f*/

#include <stdio.h>

int main(){


    int a=13, b=15, c=19, d=17, e=14, f=18, rez=0;

    //BINARNO
   //  32 16 8 4 2 1
   //a  0  0 1 1 0 1
   //b  0  0 1 1 1 1
   //c  0  1 0 0 1 1
   //d  0  1 0 0 0 1
   //e  0  0 1 1 1 0
   //f  0  1 0 0 1 0

    rez=a&f<<b>>e|(~d)^c;

    printf(" %d", rez);

    //OPERATORI
    //& - mnozi dva binarna broja, u ovom slucaju a i f.
    //| - sabira dva binarna broja, u ovom slucaju e i komplement binarnog broja d.
    //^ - oduzimanje, u ovom slucaju c ce se oduzeti od komplementa d.
    //~ - 1 komplement, u ovom slucaju u binarnom broju gdje se nalazi 0 bice 1, a gdje se nalazi 1 bice 0.
    //>> - pomjeranje bita u desnu stranu.
    //<< - pomjeranje bita u lijevu stranu.

    /*IZVRSAVANJE OPERACIJE PO PRIORITETIMA:
    Prvo ce se pomnoziti a i f i tako pomnozeno pomjeriti u lijevu stranu za b mjesta. Nakon pomjeranja taj broj ce se
    pomjeriti u desnu stranu za broj koji se dobije nakon izvrsavanja operacija sabiranja broja e i komplementa d. Nakon pomjeranja
    od tog broja ce se oduzeti broj c.*/

    return 0;
}
