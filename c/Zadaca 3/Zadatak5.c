/*5. U zavisnosti od odabranog broja (1-4) ispisati trokut na ekranu sa karakterom '*',
 koji æe biti velièine koja je unijeta sa tastature. Nastaviti ponudivati korisniku broj
 trokuta i duzinu sve dok se ne izabere izlaz iz programa (0).

Primjer trokuta dužine 4 za svaki odabrani broj.

1  *     2     *      3 ****    4 ****

   **         **        ***        ***

   ***       ***        **          **

   ****     ****        *            **/

#include<stdio.h>


int main(){

    int izlaz=1, ispis, sirina,i, j;

    while(izlaz!=0){
        printf("1) *      2)     *  3) *****   4) *****\n");
        printf("   **           **     ****        ****\n");
        printf("   ***         ***     ***          ***\n");
        printf("   ****       ****     **            **\n");
        printf("   *****     *****     *              *\n\n");

        printf("Koji oblik zelite da ispisete na ekranu?\nAko unesete 0 to znaci izlaz iz progrma!\n");
        scanf(" %d", &ispis);
        if((ispis!=0)&&(ispis<5)){
        printf("Unesite sirinu oblika\n");
        scanf(" %d", &sirina);
        printf("\n");
        }
        switch(ispis){
        case 1:
            for(i=1;i<=sirina;i++){
        for(j=0;j<=sirina;j++){
            if(i>j){
                printf("*");
            }else printf(" ");
            }
            printf("\n");
        }
        break;
        case 2:
            for(i=1;i<=sirina;i++){
        for(j=sirina;j>=0;j--){

            if(i>j){
                printf("*");
            }else printf(" ");
            }
            printf("\n");
        }
        break;
        case 3:
            for(i=0;i<=sirina;i++){
        for(j=sirina;j>=1;j--){

            if(i<j){
                printf("*");
            }else printf(" ");
            }
        printf("\n");
        }break;
        case 4:
            for(i=0;i<=sirina;i++){
        for(j=1;j<=sirina;j++){
            if(i<j){
                printf("*");
            }else printf(" ");
            }
        printf("\n");
        } break;
        default:
            if(ispis==0){
            izlaz=0;
            printf("\nHvala vam sto ste koristili nas program!!!\n");
            }else{
                printf("\nNiste odabrali ponudeni oblik niti izlaz iz programa\n\n");
            }

        }
    }




    return 0;
}
