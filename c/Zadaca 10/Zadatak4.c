/*4. Definisati fajl sa preprocesorskim direktivama tako da ako nije ukljuèena
    (#ifndef) biblioteka math.h
    javlja se greška (#error) a ako jeste izvrsava
    se  glavni program u kojem se koristi bar jedna funkcija iz math.h
    (sqrt(), pow(). itd).
    Napomena: Ne zaboraviti zatvoriti #ifndef*/

    #include<stdio.h>

//#define MATH_H_INCLUDED*/
#ifndef MATH_H_INCLUDED
#error Bibiloteka <math.h> nije ukljucena
#endif //MATH_H_INCLUDED


int main(){

    int broj=9, broj2;

    broj2=sqrt(broj);

    printf("Korijen od %d je: %d\n",broj,broj2 );


    return 0;
}
