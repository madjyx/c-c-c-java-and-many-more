/*3.Napisati program koji imitira poznatu igru "X/O". Igra je predvidena za dva igraca (X i O).
    Oba korisnika trebaju da imaju izbor u koje polje zele unijeti svoj karakter 'X' ili 'O'.
    Nakon svakog unosa ispisati ažuriranu tablu na ekran. Ako je uslov pobjednika ispunjen,
    ispisati ko je pobjednik, ali uzeti u obzir da može biti i izjednaèeno.
    Primjer table (ne mora striktno izgledati ovako):

     X  |     |
   ------------------
        |  X  |
   ------------------
        |     |  X      */

#include <stdio.h>
#include <string.h>
#include <time.h>

void izlaz(int *x);
void igratiOp(int *x);

int main(){


    char a='a', b='b', c='c', d='d', e='e', f='f', g='g', h='h', i='i', kockica='N', polje;
    int opet=1, provjera=1, k=1, j=1, broj1, broj2, igratiOpet=1, bodovi1=0,bodovi2=0, igra=1,potezi=1, r=1;
    char igrac1[10], igrac2[10];

    printf("%6sDOBRO DOSLI U IGRU X/O!!!\n\n\n", " ");

    while(opet==1){
            if(j==1){
            printf("Igrac 1. Unesite vase ime:\n");
            gets(igrac1);
            printf("Igrac 2. Unesite vase ime:\n");
            gets(igrac2);


            printf("Koji igrac ce igrati prvi odlucit cemo bacanjem kockice\n\n");
            printf("%s pritisni d/D da bacis kockicu\n\n", igrac1);
            scanf(" %c", &kockica);
            if(kockica=='D'||kockica=='d'){
                srand(time(NULL));
                broj1=rand()%6+1;
            }

            printf("%s pritisni d/D da bacis kockicu\n\n", igrac2);
            scanf(" %c", &kockica);
            if(kockica=='D'||kockica=='d'){
                srand(time(NULL));
                broj2=rand()%6+1;
            }
            while(broj1==broj2){//U slucaju da se pri funkciji random dobije isti rezultat trazit ce se ponovno bacanje kockica
            if(broj1==broj2){
            printf("Posto ste dobili iste brojeve na bacanju kockice molim vas bacite ponovo\n\n");
            printf("%s pritisni d/D da bacis kockicu\n\n", igrac1);
            scanf(" %c", &kockica);
            if(kockica=='D'||kockica=='d'){
                srand(time(NULL));
                broj1=rand()%6+1;
            }

            printf("%s pritisni d/D da bacis kockicu\n\n", igrac2);
            scanf(" %c", &kockica);
            if(kockica=='D'||kockica=='d'){
                srand(time(NULL));
                broj2=rand()%6+1;
            }
            }

            }
            if(broj1>broj2){
                printf(" %s je dobio veci broj i igra prvi\n\n", igrac1);
                printf(" %s je dobio: %d\n\n %s je dobio: %d\n\n", igrac1, broj1, igrac2, broj2);
            }else{
                printf(" %s je dobio veci broj i igra prvi\n\n", igrac2);
                printf(" %s je dobio: %d\n\n %s je dobio: %d\n\n", igrac2, broj2, igrac1, broj1);
            }
            ++j;
            }

            igratiOpet=1;

            while(igratiOpet==1){
                printf("Rezultat:\n %s : %d\n %s : %d \n",igrac1, bodovi1, igrac2, bodovi2);
                igra=1;
                a='a', b='b', c='c', d='d', e='e', f='f', g='g', h='h', i='i';
                if(k%2==1){
                    k=1;
                }
                if(k%2==0){
                    k=2;
                }
                potezi=1;
                r=1;

            while (igra==1){


           if(r==1){

            printf("\n\n");
            printf("  %c  |  %c  |  %c  \n", a, b, c);
            printf("------------------\n");
            printf("  %c  |  %c  |  %c  \n", d, e, f);
            printf("------------------\n");
            printf("  %c  |  %c  |  %c  \n", g, h, i);

            printf("\n\n");
            ++r;
           }

                //IGRA

            if(k%2==1){
                printf(" %s je na potezu\n", (broj1>broj2)?igrac1:igrac2);
                printf(" Unesite polje u koje ce se unijeti X\n\n");
                scanf(" %c", &polje);

            }
            if(k%2==0){
                printf(" %s je na potezu\n", (broj1>broj2)?igrac2:igrac1);
                printf(" Unesite polje u koje ce se unijeti O\n\n");
                scanf(" %c", &polje);

            }


            printf("\n\n");

            switch (polje){
            case 'a':
                if(k%2==1){
                    a='X';
                    break;
                }
                if(k%2==0){
                    a='O';
                    break;
                }
            case 'b':
                if(k%2==1){
                    b='X';
                    break;
                }
                if(k%2==0){
                    b='O';
                    break;
                }
            case 'c':
                if(k%2==1){
                    c='X';
                    break;
                }
                if(k%2==0){
                    c='O';
                    break;
                }
            case 'd':
                if(k%2==1){
                    d='X';
                    break;
                }
                if(k%2==0){
                    d='O';
                    break;
                }
            case 'e':
                if(k%2==1){
                    e='X';
                    break;
                }
                if(k%2==0){
                    e='O';
                    break;
                }
            case 'f':
                if(k%2==1){
                    f='X';
                    break;
                }
                if(k%2==0){
                    f='O';
                    break;
                }
            case 'g':
                if(k%2==1){
                    g='X';
                    break;
                }
                if(k%2==0){
                    g='O';
                    break;
                }
            case 'h':
                if(k%2==1){
                    h='X';
                    break;
                }
                if(k%2==0){
                    h='O';
                    break;
                }
            case 'i':
                if(k%2==1){
                    i='X';
                    break;
                }
                if(k%2==0){
                    i='O';
                    break;
                }
            }
            printf("  %c  |  %c  |  %c  \n", a, b, c);
            printf("------------------\n");
            printf("  %c  |  %c  |  %c  \n", d, e, f);
            printf("------------------\n");
            printf("  %c  |  %c  |  %c  \n", g, h, i);

            printf("\n\n");

            switch(provjera){
            case 1:
                if((a=='X') && (b=='X') && (c=='X')){
                    printf(" %s je pobijedio\n", (broj1>broj2)?igrac1:igrac2);
                    (broj1>broj2)?++bodovi1:++bodovi2;
                    igra=0;
                    break;

                }
                if((a=='O') && (b=='O') && (c=='O')){
                    printf(" %s je pobijedio\n", (broj1>broj2)?igrac2:igrac1);
                    (broj1>broj2)?++bodovi2:++bodovi1;
                    igra=0;
                    break;

                }
            case 2:
                if((d=='X') && (e=='X') && (f=='X')){
                    printf(" %s je pobijedio\n", (broj1>broj2)?igrac1:igrac2);
                    (broj1>broj2)?++bodovi1:++bodovi2;
                    igra=0;
                    break;
                }
                if((d=='O') && (e=='O') && (f=='O')){
                    printf(" %s je pobijedio\n", (broj1>broj2)?igrac2:igrac1);
                    igra=(broj1>broj2)?++bodovi2:++bodovi1;
                    break;
                }
            case 3:
                if((g=='X') && (g=='X') && (i=='X')){
                    printf(" %s je pobijedio\n", (broj1>broj2)?igrac1:igrac2);
                    (broj1>broj2)?++bodovi1:++bodovi2;
                    igra=0;
                    break;
                }
                if((g=='O') && (h=='O') && (i=='O')){
                    printf(" %s je pobijedio\n", (broj1>broj2)?igrac2:igrac1);
                    (broj1>broj2)?++bodovi2:++bodovi1;
                    igra=0;
                    break;
                }
            case 4:
                if((a=='X') && (d=='X') && (g=='X')){
                    printf(" %s je pobijedio\n", (broj1>broj2)?igrac1:igrac2);
                    (broj1>broj2)?++bodovi1:++bodovi2;
                    igra=0;
                    break;
                }
                if((a=='O') && (d=='O') && (g=='O')){
                    printf(" %s je pobijedio\n", (broj1>broj2)?igrac2:igrac1);
                    (broj1>broj2)?++bodovi2:++bodovi1;
                    igra=0;
                    break;
                }
            case 5:
                if((b=='X') && (e=='X') && (h=='X')){
                    printf(" %s je pobijedio\n", (broj1>broj2)?igrac1:igrac2);
                    (broj1>broj2)?++bodovi1:++bodovi2;
                    igra=0;
                    break;
                }
                if((b=='O') && (e=='O') && (h=='O')){
                    printf(" %s je pobijedio\n", (broj1>broj2)?igrac2:igrac1);
                    (broj1>broj2)?++bodovi2:++bodovi1;
                    igra=0;
                    break;
                }
            case 6:
                if((c=='X') && (f=='X') && (i=='X')){
                    printf(" %s je pobijedio\n", (broj1>broj2)?igrac1:igrac2);
                    (broj1>broj2)?++bodovi1:++bodovi2;
                    igra=0;
                    break;
                }
                if((c=='O') && (f=='O') && (i=='O')){
                    printf(" %s je pobijedio\n", (broj1>broj2)?igrac2:igrac1);
                    (broj1>broj2)?++bodovi2:++bodovi1;
                    igra=0;
                    break;
                }
            case 7:
                if((a=='X') && (e=='X') && (i=='X')){
                    printf(" %s je pobijedio\n", (broj1>broj2)?igrac1:igrac2);
                    (broj1>broj2)?++bodovi1:++bodovi2;
                    igra=0;
                    break;
                }
                if((a=='O') && (e=='O') && (i=='O')){
                    printf(" %s je pobijedio\n", (broj1>broj2)?igrac2:igrac1);
                    (broj1>broj2)?++bodovi2:++bodovi1;
                    igra=0;
                    break;
                }
            case 8:
                if((c=='X') && (e=='X') && (g=='X')){
                    printf(" %s je pobijedio\n", (broj1>broj2)?igrac1:igrac2);
                    (broj1>broj2)?++bodovi1:++bodovi2;
                    igra=0;
                    break;
                }
                if((c=='O') && (e=='O') && (g=='O')){
                    printf(" %s je pobijedio\n", (broj1>broj2)?igrac2:igrac1);
                    (broj1>broj2)?++bodovi2:++bodovi1;
                    igra=0;
                    break;
                }
            default:
                if(potezi==8){
                printf("\n\nNERIJESENO!!!\n");
                igra=0;
                break;
                }


            }
            ++k;
            ++potezi;




                }
                igratiOp(&igratiOpet);


            }
        printf("Hvala vam sto ste igrali nasu igru!!!\n\n");
        if(bodovi1!=bodovi2){
        printf("Pobijednik je %s\n\n", (bodovi1>bodovi2)?igrac1:igrac2);
        printf("Rezultat je:\n%s: %d\n", (bodovi1>bodovi2)?igrac1:igrac2,(bodovi1>bodovi2)?bodovi1:bodovi2);
        printf("%s: %d\n", (bodovi1>bodovi2)?igrac2:igrac1,(bodovi1>bodovi2)?bodovi2:bodovi1);
        }
        else{
            printf("NERIJESEN REZULTAT!!!\n\n");
        }
        izlaz(&opet);


    }


    return 0;
}



void izlaz(int *x){

    char y;

    printf("Da li sigurno zelite da napustite igru? D/N\n");
    scanf(" %c", &y);
    if((y=='D')||(y=='d')){
         *x=0;
    }else{
        *x=1;

    }
}

void igratiOp(int *x){

    char y;

    printf("Da li zelite igrati ponovo?? D/N\n");
    scanf(" %c", &y);
    if((y=='D')||(y=='d')){
         *x=1;
    }else{
        *x=0;

    }
}


