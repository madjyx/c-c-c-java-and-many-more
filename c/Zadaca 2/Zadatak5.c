/*5. Iskoristiti sizeof operator da se izra�una umno�ak:
    -svih tipova realnih brojeva
    -svih tipova cijelih brojeva.
    Pomjeriti umno�ak tipova realnih brojeva za onoliko bita ulijevo
    koliko iznosi umno�ak tipova cijelih brojeva.
    Predstaviti dobijeni broj kao karakter.*/

#include <stdio.h>

int main(){

    int cijeliBr=0, realniBr=0, pomjereno;

    realniBr=sizeof(float)*sizeof(double)*sizeof(long double);

    cijeliBr=sizeof(int)*sizeof(short)*sizeof(long)*sizeof(char);

    pomjereno=realniBr<<cijeliBr;

    printf("Karakter nakon pomjeranja bita je: %c\n", pomjereno);

    return 0;
}
