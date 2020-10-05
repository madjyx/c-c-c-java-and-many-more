/* 2. Pomnoziti dvije matrice A*B 3x3 proizvoljnog tipa da dobijete matricu C ali tako da ispisete na ekranu kako ste dobili
 svaki element matrice C.  Isto uraditi i za B*A (matrica D). Predstaviti rezultante matrice na ekranu.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
int A[3][3], B[3][3], i, j, k, C[3][3],D[3][3], sum ;
printf("Unesite Elemente prve matrice: \n\n");
for(i=0; i<3; i++)
for(j=0; j<3; j++)
{
    scanf("%d", &A[i][j]);
}
printf("\n\n");

printf("Unesite elemente druge matrice\n\n");
for(i=0; i<3; i++)
for(j=0; j<3; j++)
{
    scanf("%d", &B[i][j]);
}
printf("\n\n\n");
printf("Elementi prve matrice:\n");
for (i=0; i<3; i++)
      {
         for (j=0; j<3; j++)
         printf("%d\t", A[i][j]);
         printf("\n");
      }
printf("\n\n\n");
printf("Elementi druge matrice:\n");
for (i=0; i<3; i++)
      {
         for (j=0; j<3; j++)
         printf("%d\t", B[i][j]);
         printf("\n");
      }
      printf("\n\n");
//Multiplication starts
for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
        for(k=0; k<3; k++)
        {
            sum=sum+A[i][k]*B[k][j];
            C[i][j]=sum;
            sum=0;
        }
    }
}
printf("Produkt matrice A*B je: \n");
for (i=0; i<3; i++)
      {
         for (j=0; j<3; j++)
         printf("%d\t", C[i][j]);
         printf("\n");
      }
      printf("\n\n");
      printf("Pritisnite ENTER da vidite produkt matrice B*A\n");
      system("PAUSE");


      for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
        for(k=0; k<3; k++)
        {
            sum=sum+B[i][k]*A[k][j];
            D[i][j]=sum;
            sum=0;
        }
    }
}
printf("Produkt matrice B*A je: \n");
for (i=0; i<3; i++)
      {
         for (j=0; j<3; j++)
         printf("%d\t", D[i][j]);
         printf("\n");
      }
      system("PAUSE");
return 0;
}
