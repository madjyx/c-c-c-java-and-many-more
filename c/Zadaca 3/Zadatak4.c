/*4. Napisati program koji imitira igru "Kamen - Papir - Makaze".
  Korisniku omoguciti izbor izmedju ponudena tri elementa, racunaru dodjeliti
  "random" vrijednost. Igra treba da ima pet krugova,a na kraju ispisati konacan rezultat
  i završiti program.*/

#include<stdio.h>
#include<time.h>

int main(){

    char kompjuter[3][10]={"PAPIR", "MAKAZE", "KAMEN"};
    char izbor, opet=0, provjera=1;
    int i,j,bodovi1=0,bodovi2=0, randNum;
    printf("%6sDobro dosli u igru PAPIR/MAKAZE/KAMEN!!!\n", " ");
    while (opet!=5){

        printf("Unesite vas izbor\n\n");
        printf("P=PAPIR - M=MAKAZE - K=KAMEN\n");
        scanf(" %c", &izbor);

        srand ( time(NULL) );
        randNum=rand()%3;

    printf("%s \n\n", kompjuter[randNum]);

   switch(provjera){
    case 1:
        if(((izbor=='p')||(izbor=='P'))&&(randNum==0)){
            break;
        }
    case 2:
         if(((izbor=='m')||(izbor=='M'))&&(randNum==1)){
            break;
        }
    case 3:
         if(((izbor=='k')||(izbor=='K'))&&(randNum==2)){
            break;
        }
    case 4:
         if(((izbor=='p')||(izbor=='P'))&&(randNum==2)){
            bodovi1++;
            break;
        }
    case 5:
        if(((izbor=='k')||(izbor=='K'))&&(randNum==0)){
                    bodovi2++;
                    break;
        }
    case 6:
        if(((izbor=='k')||(izbor=='K'))&&(randNum==1)){
            bodovi1++;
            break;
        }
    case 7:
        if(((izbor=='m')||(izbor=='M'))&&(randNum==2)){
                    bodovi2++;
                    break;
        }
    case 8:
        if(((izbor=='m')||(izbor=='M'))&&(randNum==0)){
            bodovi1++;
            break;
        }
    case 9:
        if(((izbor=='p')||(izbor=='P'))&&(randNum==1)){
                    bodovi2++;
                    break;
        }

    }
            ++opet;

    }

     printf("Rezultat:\nIgrac : Kompjuter\n  %d   :    %d\n\n", bodovi1, bodovi2);


    if(bodovi1==bodovi2){
            printf(" Rezultat je nerijesen\n");}
        if(bodovi1>bodovi2){
    printf("Igrac je pobjednik\n");
        }else if(bodovi2>bodovi1)
        {
            printf("Kompjuter je pobjednik\n");}

       return 0;
    }
