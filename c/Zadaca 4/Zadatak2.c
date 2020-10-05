/*2. Predstaviti vrijeme i datum pomocu odgovarajuce biblioteke. Izbaciti meni za mijenjanje boje pozadine i slova.
    Nakon odabira boja ponovo prikazati datum i vratiti se na meni. Nakon odabira novih boja datum i vrijeme rastaviti string
    vremena i datuma na dijelove i svaki dodati po u jedan niz (delimiter je prazno mjesto).*/

#include<stdio.h>
#include<time.h>
#include<string.h>
#include<conio.h>

int main(){

    int a, b, sat=0,i;
    char *pDan, *pMon, *pDat, *pHr, *pMin, *pSec, *pGod;

    time_t trenutnoVrijeme;
    time(&trenutnoVrijeme);
    struct tm *vrijeme=localtime(&trenutnoVrijeme);
    ctime(&trenutnoVrijeme);
    printf("%s\n",ctime(&trenutnoVrijeme));
    pDan=strtok(ctime(&trenutnoVrijeme), " ");
    pMon=strtok(NULL, " :");
    pDat=strtok(NULL, " :");
    pHr=strtok(NULL, " :");
    pMin=strtok(NULL, " :");
    pSec=strtok(NULL, " :");
    pGod=strtok(NULL, " :");





    while(sat!=2){
        printf("Sat: %d:%d:%d\n", vrijeme->tm_hour, vrijeme->tm_min, vrijeme->tm_sec);
        printf("Datum: %d.%d.%d.\n\n", vrijeme->tm_mday, vrijeme->tm_mon+1, vrijeme->tm_year+1900);
        printf("Odaberite boju sata i pozadine!!!\n");
        printf("1.Crvena\n");
        printf("2.Plava\n");
        printf("3.Zuta\n");
        printf("4.Zelena\n");
        printf("5.Bijela\n");
        printf("Unesite boju teksta\n");
        scanf(" %d", &a);

        if(a!=0){
        printf("Unesite boju pozadine\n");
        scanf(" %d", &b);}

        switch(a){
        case 1:
        system("COLOR 4");
         break;
        case 2: break;
        system("COLOR 1");
         break;
        case 3: break;
        system("COLOR 2");
         break;
        case 4: break;
        system("COLOR 2");
         break;
        case 5: break;
        system("COLOR 7");
         break;
        default: printf("Niste unijeli odgovarajuci odabir\n"); break;
        }
        switch(b){
        case 1:
        system("COLOR C4");
         break;
        case 2: break;
        system("COLOR B1");
         break;
        case 3: break;
        system("COLOR E2");
         break;
        case 4: break;
        system("COLOR A4");
         break;
        case 5: break;
        system("COLOR F7");
         break;
        default: printf("Niste unijeli odgovarajuci odabir\n"); break;

        }


        if(sat==1){
        printf("RASTAVLJENO NA STRINGOVE DATUM I VRIJEME:\n\n");
        printf("%s/%s/%s", pDat, pMon, pGod);
        printf("%s:%s:%s", pHr, pMin, pSec);}

        sat++;



    }
return 0;
}
