/*4. Napisati program koji imitira igru "Kamen - Papir - Makaze". Korisniku omoguciti izbor
izmedju ponudena tri elementa, racunaru dodjeliti "random" vrijednost.
Igra treba da ima pet krugova,a na kraju ispisati konacan rezultat i završiti program.*/

#include<stdio.h>
#include<string.h>

int main()
{
    int igrac=0;
    int r;
    int racunar=0,a,c,i,j,x;

    printf("\t\tKAMEN PAPIR MAKAZE IGRA\n");
for(j=0;j<5;j++){
A:  printf("\nIzaberite \n");
    printf("1. KAMEN\n");
    printf("2. PAPIR\n");
    printf("3. MAKAZE\nVas izbor: ");
    scanf("%d",&a);

    for(i=0;i<1;i++)
        {
            r=(rand()%3)+1;
        }
if(r==1)printf("KAMEN\n");
if(r==2)printf("PAPIR\n");
if(r==3)printf("MAKAZE\n");

if(r==1&&a==2){printf("Igrac pobjedjuje\n"); ++igrac;}
else if(r==1&&a==3){printf("Racunar pobjedjuje\n"); ++racunar;}
else if(r==1&&a==1){printf("nerijeseno ponovite\n"); goto A;}
else if(r==2&&a==1){printf("Racunar pobjedjuje\n"); ++racunar;}
else if(r==2&&a==2){printf("nerijeseno ponovite\n"); goto A;}
else if(r==2&&a==3){printf("Igrac pobjedjuje\n"); ++igrac;}
else if(r==3&&a==1){printf("Igrac pobjedjuje\n"); ++igrac;}
else if(r==3&&a==2){printf("Racunar pobjedjuje\n"); ++racunar;}
else if(r==3&&a==3){printf("Nerjeseno ponovite\n"); goto A;}
}
printf("Igrac: %d  -  Racunar: %d",igrac,racunar);
if(igrac>racunar)printf("\nIgrac je pobjedio!!\n");
else printf("\nRacunar je pobjedio!\n");

    return 0;
}
