/*5. Napraviti meni za odabir jedne od 7 jedinica (metar, kilogram, sekunda, amper, Kelvin, mol, kandela) iz SI sistema i njenu vrijednost.

Nakon unosa pozvati odgovarajuæu rekurzivnu funkciju koja ispisuje tu jedinicu:

- u  deci, centi, mili, micro, nano, pico vrijednostima
- ili u deka, hekto, kilo, mega, giga, tera vrijednostima

Na primjer: Izlaz treba da bude sljedeæi za recimo 7Kg :

7 Kilogram =70000 decigram=700000 centigram=7000000 miligram=7000000000 mikrogram ... itd

Restrikcija:
Unos treba da bude u osnovnim jedinicama (za vrijeme: sekunda, za dužinu: metar, itd)
Dozvoljeno je koristiti header fajlove*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>



void nazivi(int i,int izbor,float velicina,int j);
int main()
{
    int izbor=0,i=0,j=0;
    float velicina=0;

    printf("1.Metar\n");
    printf("2.Kilogram\n");
    printf("3.Sekunda\n");
    printf("4.Amper\n");
    printf("5.Kelvin\n");
    printf("6.Mol\n");
    printf("7.Kandela\n");
    printf("8.Izlaz\n");printf("Vas izbor: ");
    scanf("%d",&izbor);
    printf("\nUnesite velicinu jedinice: ");
    scanf("%f",&velicina);


    switch(izbor)
    {
    case 1:
        nazivi(i,izbor,velicina,j);
        break;
    case 2:
        nazivi(i,izbor,velicina,j);
        break;
    case 3:
        nazivi(i,izbor,velicina,j);
        break;
    case 4:
        nazivi(i,izbor,velicina,j);
        break;
    case 5:
        nazivi(i,izbor,velicina,j);
        break;
    case 6:
        nazivi(i,izbor,velicina,j);
        break;
    case 7:
        nazivi(i,izbor,velicina,j);
        break;
    }

    return 0;
}

void nazivi(int i,int izbor,float velicina,int j)
{
    char *jedinice[6]={"Deci","Centi","Mili","Mikro","Nano","Piko"};
    char *mjere[7]={"metar","kilogram","sekunda","amper","kelvin","mol","kandela"};

    if(i==0)printf("%s%s: %.1f\n",jedinice[i],mjere[izbor-1],velicina=velicina/10);
    if(i==1)printf("%s%s: %.2f\n",jedinice[i],mjere[izbor-1],velicina=velicina/10);
    if(i==2)printf("%s%s: %.3f\n",jedinice[i],mjere[izbor-1],velicina=velicina/10);
    if(i==3)
    {
        for(j=0;j<3;j++){velicina=velicina/10;}
        printf("%s%s: %.6f\n",jedinice[i],mjere[izbor-1],velicina);
    }
    if(i==4)
    {
        for(j=0;j<3;j++){velicina=velicina/10;}
        printf("%s%s: %.9f\n",jedinice[i],mjere[izbor-1],velicina);
    }
    if(i==5)
    {
        for(j=0;j<3;j++){velicina=velicina/10;}
        printf("%s%s: %.12f\n",jedinice[i],mjere[izbor-1],velicina);
    }
    i++;
    if(i<6)
        nazivi(i,izbor,velicina,j);
}
