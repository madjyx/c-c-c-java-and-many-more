/*3. Napraviti program koji imitira poznatu igru "VJEŠALA".  Igra se igra sa jednim igraèem.
    Unutar programa napisati rijeè koja treba da bude pogoðena. Pogaðanje sa vrši na osnovu
    jednog karaktera, po pogotku ispisati mjesto karaktera u zadatoj rijeci, ili više pozicija po potrebi,
    a ako se desi greška ispisati jedan dio na vješalu i smanjiti broj pokušaja. Dozvoliti broj pokušaja
    koji je za 3 veæi od broja slova u rijeèi. Nakon pogotka ili promašaja oèistiti ekran i ponovo ga
    prikazati sa updatovanim informacijama.

    Primjer vješala:

     ---------
     ||     |
     ||    \O/
     ||     |
     ||    / \
     ||

      p r o _ r _ m _ r _ _ e     / Tražena rijec: p r o g r a m i r a n  j  e*/
                                 //                0 1 2 3 4 5 6 7 8 9 10 11 12
#include <stdio.h>
#include <conio.h>

int main(){

    char rijec[14]={'_','_','_','_','_','_','_','_','_','_','_','_','_','\0'};
    int i=15, j, k=0,t=0;
    char unos;

    while(1){
        printf("Preostalo pokusaja: %d\n\n", i);

            printf("---------\n");
            printf("||     %s\n", (k>=3)?"|": " ");
            printf("||    %s%s%s\n",(k>=5)?"\\":" ",(k>=4)?"o":" ",(k>=6)?"/":" " );
            printf("||     %s\n",(k>=7)?"|":" ");
            printf("||    %s %s\n",(k>=8)?"/":" ",(k>=9)?"\\":" ");
            printf("||       \n");
            if(k==9||i==0){
                printf("\n\nZao nam je niste pogodili datu rijec, a bila je:\n\n PROGRAMIRANJE\n\n");
                break;
            }
            if(t==10){
                printf("\n\nCestitamo pogodili ste trazenu rijec\n\n");
                break;
            }

        for(j=0;j<13;j++){
            printf("%c ", rijec[j]);
        }
        printf("\n");
        printf("Unesite slovo\n");
        scanf(" %c", &unos);

        if(unos=='P'||unos=='p'){
            rijec[0]='P';
            printf("\n\nPogodak!!!\n\n");
            t++;
        }else if(unos=='r'||unos=='R'){
            rijec[1]='r';
            rijec[4]='r';
            rijec[8]='r';
            printf("\n\nPogodak!!!\n\n");
            t++;
        }else if(unos=='o'||unos=='O'){
            rijec[2]='o';
            printf("\n\nPogodak!!!\n\n");
            t++;
        }else if(unos=='g'||unos=='G'){
            rijec[3]='g';
            printf("\n\nPogodak!!!\n\n");
            t++;
        }else if(unos=='a'||unos=='A'){
            rijec[5]='a';
            rijec[9]='a';
            printf("\n\nPogodak!!!\n\n");
            t++;
        }else if(unos=='m'||unos=='M'){
            rijec[6]='m';
            printf("\n\nPogodak!!!\n\n");
            t++;
        }else if(unos=='i'||unos=='I'){
            rijec[7]='i';
            printf("\n\nPogodak!!!\n\n");
            t++;
        }else if(unos=='n'||unos=='N'){
            rijec[10]='n';
            printf("\n\nPogodak!!!\n\n");
            t++;
        }else if(unos=='j'||unos=='J'){
            rijec[11]='j';
            printf("\n\nPogodak!!!\n\n");
            t++;
        }else if(unos=='e'||unos=='E'){
            rijec[12]='e';
            printf("\n\nPogodak!!!\n\n");
            t++;
        }else{
            printf("\n\nPromasaj\n\n");
            k++;
        }

        i--;
        system("cls");
    }





    return 0;
}
