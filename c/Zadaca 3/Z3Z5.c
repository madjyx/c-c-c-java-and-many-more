/*5. U zavisnosti od odabranog broja (1-4) ispisati trokut na ekranu sa karakterom '*', koji æe
biti velicine koja je unijeta sa tastature. Nastaviti ponudivati korisniku broj trokuta
i dužinu sve dok se ne izabere izlaz iz programa (0).

Primjer trokuta dužine 4 za svaki odabrani broj.
1  *     2     *      3 ****    4 ****

  **         **         ***        ***

 ***       ***        **          **

 ****     ****        *            *   */

   #include<stdio.h>
   #include<string.h>
   #include<ctype.h>

   int main()
   {
       int pom,vel_trok=0;
       int i,j,a=0,b,col;
       char zvijezda='*';
int pokaz;


       printf("Izaberite zeljeni izgled trokuta: \n");
       do
       {
A: ;   printf("\n");
       printf(" 1 *     2  *  3 ****  4 ****\n");
       printf("   **      **    ***      ***\n");
       printf("   ***    ***    **        **\n");
       printf("   ****  ****    *          *\n");
       printf("5 - Za izlaz\n");
       printf("Vas izbor: ");
       scanf("%d",&b);
if(b==5){a=1;goto B;}
       printf("Koliko zelite da trokut ima redova?:");
       scanf("%d",&vel_trok);

       switch(b)
       {
       case 1: for(i=0;i<vel_trok;i++)
               {   for(j=0;j<=i;j++)
                   {
                   printf("*");
                   }
                   printf("\n");
               }
               break;
       case 3:
           pom=vel_trok;
           for(i=0;i<vel_trok;i++)
                 { for(j=0;j<pom;j++)
                     {
                         printf("*");
                     }
                     printf("\n"); pom--;
                 };
                 break;
       case 2:
            pokaz=vel_trok-1;
           for(i=0;i<vel_trok;i++)
               { for(col=0;col<pokaz;col++)
                  {
                      printf(" ");
                  }
                  pokaz--;
                  for(j=0;j<=i;j++)
                  {
                      printf("*");
                  }
                  printf("\n");
               }
               break;
       case 4:
           pokaz=vel_trok-vel_trok;
           pom=vel_trok;
           for(i=0;i<vel_trok;i++)
               {
                 for(col=0;col<pokaz;col++)
                  {
                      printf(" ");
                  }
                  for(j=0;j<pom;j++)
                  {
                      printf("*");
                  }
                  printf("\n");pokaz++;pom--;
               }
               break;

       default: goto A;

       }
B: ;
       }while(a<=0);
    return 0;
   }
