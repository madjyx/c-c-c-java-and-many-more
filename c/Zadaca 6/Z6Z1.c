/*
1. Koristeci pokazivace sortirati niz od 100 elemenata koji su popunjeni nasumicnim brojevima.
Sortirati niz na taj nacin da je najmanji broj na prvom mjestu a najveæi na posljednjem. Koristiti funkciju koja kao parametre ima pokazivaèe da bi ovo realizovali.
Ispisati niz a nakon toga ponuditi korisniku da obriše jedan element tako što æe izabrati njegov redni broj. Nakon brisanja elementa ponovo ispisati niz.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int *p1;
    int tmp;
    int i,j;
srand(time(NULL));
int n=100;
int *a[n];
int u;
int o;
for(i = 0 ; i < 100 ; i++){
 *(a+i) = rand() % 100+1 ;
}
  printf("\nPrije sortiranja niza\n");

 for(i=0;i<n;i++)
   {
    printf("element[%d]: %d\n",i, *(a+i));

   }

for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
       if( *(a+i) > *(a+j))
       {
      tmp = *(a+i);
      *(a+i) = *(a+j);
      *(a+j) = tmp;
       }
    }
   }
     printf("\nPoslije sortiranja niza\n");
 for(i=0;i<n;i++)
   {
    printf("element[%d]: %d\n",i, *(a+i));

   }
   int p=0;
   while(1){
        p++;
   printf("\n\nDa li zelite da obrisete jedan element u nizu ili da izadjete iz programa\n0-Izlaz\n1-Brisanje jednog elementa\n");
scanf("%d",&u);
if(u==0){
        printf("Izabrali ste izlaz!");
exit(0);
}
printf("Izaberite koji element u nizu zelite izbrisati : ");
scanf("%d",&o);

int z=0;
   for ( i = o - 1 ; i < 100 - p ; i++ ){
         *(a+o) = *(a+o+1);
   }
for(i=0;i<100-p;i++,z++)
   {
       if(z==o)z++;
    printf("element[%d]: %d\n",z, *(a+i));

   }

   }
return 0;
}
