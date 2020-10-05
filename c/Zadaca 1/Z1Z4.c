#include <stdio.h>
#include <string.h>
//4. Napraviti tabelu i svaki tip podatka predstaviti
//sa osnovnim formaterima (ukupno 6), tako da je u jednoj koloni jedan tip podatka.
//Napraviti da se vrijednosti za podatke unose sa tastature.

int a;
    short b;
    long c;
    float d;
    double e;
    char ime[10];
int main()
{

printf("Unesite podatak za `char`: ");
    gets(ime);

    printf("\nUnesite podatak za `int`: ");
    scanf("%d",&a);
        printf("\nUnesite podatak za `short`: ");
    scanf("%d",&b);
        printf("\nUnesite podatak za `long`: ");
    scanf("%Ld",&c);
        printf("\nUnesite podatak za `float`: ");
    scanf("%f",&d);
        printf("\nUnesite podatak za `double`: ");
    scanf("%lf",&e);

    printf("--------------------------------------------------------------------\n");
    printf("|     int    |   float   |   char   |   short  |  long   |  double |\n");
     printf("-------------------------------------------------------------------\n");
    printf("|%-11d |%-10f |%-9s |%-9d |%-8Ld | %-3lf|\n",a,d,ime,b,c,e);
    printf("-------------------------------------------------------------------\n");

    return 0;
}
