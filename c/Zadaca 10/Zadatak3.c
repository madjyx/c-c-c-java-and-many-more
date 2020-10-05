   /*3 U glavnom programu definisati realni niz od 10 elemenata
    i ispuniti ga nasumicnim vrijednostima koje nisu vece od 10 (module 10 * 0.1).
    Ispitati svaka dva susjedna elementa preko parametriziranog makro-a
    defnisanog u prvom dijelu zadatka*/


    #include<stdio.h>
    #include<time.h>
    #define provjera(a,b) ((a*b)>10)?"Veci":"Nije Veci"
int main(){
srand(time(NULL));
    float broj[10];
    int i;



    for(i=0;i<10;i++){
        broj[i]=rand()%10*0.1;
    }


    for(i=0;i<10;i++){
printf("Broj[%d]\t\tBroj[%d]*Broj[%d]\t\tProvjera\n",i,i,i+1);
printf("%.2f\t\t%.2f\t\t\t%s\n\n",broj[i],broj[i]*broj[i],provjera(broj[i],broj[i+1]));

    }

    return 0;}
