/*5. Iskoristiti sizeof operator da se izraèuna umnožak:

-svih tipova realnih brojeva

-svih tipova cijelih brojeva.

Pomjeriti umnožak tipova realnih brojeva za onoliko bita ulijevo koliko iznosi umnožak tipova cijelih brojeva.

Predstaviti dobijeni broj kao karakter */

#include <stdio.h>

int main()
{
int umnozakcijelih, umnozakrealnih,pomjulijevo;
    printf("Velicina int na ovom racunaru je: %d bajta\n",sizeof(int));
    printf("Velicina long int na ovom racunaru je: %d bajta\n",sizeof(long int));
    printf("Velicina short int na ovom racunaru je: %d bajta\n",sizeof(short int));
printf("___________________________________________\n");
    printf("Velicina float na ovom racunaru je: %d bajta\n",sizeof(float));
    printf("Velicina double na ovom racunaru je: %d bajta\n",sizeof(double));
    printf("Velicina long double na ovom racunaru je: %d bajta\n",sizeof(long double));
    printf("___________________________________________\n");
    umnozakcijelih=sizeof(int)*sizeof(long int)*sizeof(short int);
    umnozakrealnih=sizeof(float)*sizeof(double)*sizeof(long double);
    printf("Umnozak cijelih iznosi:%d\n", umnozakcijelih);
    printf("Umnozak realnih iznosi:%d\n\n", umnozakrealnih);
    printf("___________________________________________\n");
    pomjulijevo=umnozakrealnih<<umnozakcijelih;
    printf("Dobijeni broj nakon pomjeranja ulijevo kao karakter izgleda: %c\n",pomjulijevo);
    printf("___________________________________________");
}
