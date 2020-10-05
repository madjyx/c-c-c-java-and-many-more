/*2. Pomocu typedef naredbe definisati stranice (a,b,c..) jednog geometrijskog tijela
 (trougao, kvadrat, kvadar...). Dodijeliti vrijednosti uzete sa tastature i izracunati
  obim i povrsinu datog tijela pomocu stranica. Ispisati obim i povrsinu.*/

#include <stdio.h>
#include <math.h>

int main(){


    typedef float kvadrat;

    kvadrat a, P=0, O=0;

    printf("Program izracunava povrsinu i obim kvadrata!!!\n\n");

    printf("Molimo vas unesite duzinu stranice a\n");

    scanf(" %f", &a);

    P=pow(a,2);

    O=4*a;

    printf("Povrsina i obim za kvadrat cija je stranica duzine %.2f iznose:\nP=%.2f\nO=%.2f\n",a, P, O);

    return 0;
}
