/*2. Pomoæu typedef naredbe definisati stranice (a,b,c..) jednog geometrijskog tijela (trougao, kvadrat, kvadar...).
Dodijeliti vrijednosti uzete sa tastature i izraèunati obim i povrsinu datog tijela pomoæu stranica. Ispisati obim i
povrsinu */

#include <stdio.h>


int main(){

    typedef int stranica;
    stranica a ;
 typedef int obim;
    obim o ;
    typedef int povrsina;
    povrsina p ;
    printf("Unesite stranicu kvadrata:");
    scanf("%d", &a);
      o = 4*a;
    printf("Obim kvadrata:%d\n",o);
     p = a*a;
    printf("Povrsina kvadrata:%d",p);

    return 0;
}
