/*5. Iskoristiti sizeof operator da se izraèuna umnožak:
    -svih tipova realnih brojeva
    -svih tipova cijelih brojeva.
    Pomjeriti umnožak tipova realnih brojeva za onoliko bita ulijevo
    koliko iznosi umnožak tipova cijelih brojeva.
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
