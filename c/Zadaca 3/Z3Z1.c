/*1. Napisati program koji moze izvrsiti osnovne aritmeticke operacije (+,-./,*) sa dva niza od 10
elemenata koje korisnik treba da unese (vrijednosti mogu ici od 0-99). Rezultat ispisati na ekran,
a poslije toga korisniku dati mogucnost izba da li da nastavi sa programom ili da ga napusti.

 Rezultat ispisati u sljedecem obliku (za recimo operaciju +):
 1  2  3    4    5   6   7   8   9  10
 +  +  +    +    +   +   +   +   +   +
 2  4  6    8    9  11  32  51  35  53
 --------------------------------------------
 3  6  9  12  14  17  39  59  44  63 */
#include<stdio.h>


int main()
{

    int i;
    int a,b;
    int niz1[10],niz2[10];
    int rez[10];
    int izl,izb;
do{
        printf("Unesite brojeve od 0 do 99 u prvi niz\n");
   for(i=0;i<10;i++)
   {
       printf("Unesite %d. broj niza: ",i+1);
       scanf("%2d",&niz1[i]);
   }
    printf("\nUnesite brojeve od 0 do 99 u drugi niz\n");
      for(i=0;i<10;i++)
   {
       printf("Unesite %d. broj niza: ",i+1);
       scanf("%2d",&niz2[i]);
   }
A:
   printf("-Izaberite operacije-\n");
   printf("Mnozenje  - 1\n");
   printf("Dijeljenje  - 2\n");
   printf("Sabiranje  - 3\n");
   printf("Oduzimanje- 4");
   printf("\nUnesite odgovor: ");
   scanf("%d",&izb);

   if(izb==3){
for(i=0;i<10;i++){
       printf("%3d ",niz1[i]);
   }
      printf("\n");
   for(i=0;i<10;i++){
       printf(" +  ");
   }
      printf("\n");
   for(i=0;i<10;i++){
       printf("%3d ",niz2[i]);
   }
   printf("\n-----------------------------------------------------------\n");
    for(i=0;i<10;i++){
       printf("%3d ",niz1[i]+niz2[i]);
   }
  }

  if(izb==1){
for(i=0;i<10;i++){
       printf("%4d ",niz1[i]);
   }
      printf("\n");
   for(i=0;i<10;i++){
       printf("  *  ");
   }
      printf("\n");
   for(i=0;i<10;i++){
       printf("%4d ",niz2[i]);
   }
   printf("\n-----------------------------------------------------------\n");
    for(i=0;i<10;i++){
       printf("%4.1f ",(float)niz1[i]*(float)niz2[i]);
   }
  }

  if(izb==2){
for(i=0;i<10;i++){
       printf("%4d ",niz1[i]);
   }
      printf("\n");
   for(i=0;i<10;i++){
       printf("  /  ");
   }
      printf("\n");
   for(i=0;i<10;i++){
       printf("%4d ",niz2[i]);
   }
   printf("\n-----------------------------------------------------------\n");
    for(i=0;i<10;i++){
       printf("%4.1f ",(float)niz1[i]/(float)niz2[i]);
   }
  }

  if(izb==4){
for(i=0;i<10;i++){
       printf("%4d ",niz1[i]);
   }
      printf("\n");
   for(i=0;i<10;i++){
       printf("  -  ");
   }
      printf("\n");
   for(i=0;i<10;i++){
       printf("%4d ",niz2[i]);
   }
   printf("\n-----------------------------------------------------------\n");
    for(i=0;i<10;i++){
       printf("%4d ",niz1[i]-niz2[i]);
   }
  }
printf("\n\n\aDa li zelite ponoviti program? \n\t\tZELIM - 1  NE ZELIM - 2\nAko zelite izabrati novu operaciju NOVA OPERACIJA - 3");
printf("\nUnesite odgovor: ");
scanf("%d",&a);
if(a==3)goto A;
else if(a==2)izl=2;
else izl=1;
}while(izl==1);
    return 0;
}
