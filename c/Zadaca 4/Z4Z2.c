///2. Predstaviti vrijeme i datum pomocu odgovarajuæe biblioteke. Izbaciti meni za mijenjanje boje pozadine i slova.
///Nakon odabira boja ponovo prikazati datum i vratiti se na meni. Nakon odabira novih boja datum i vrijeme rastaviti string
///vremena i datuma na dijelove i svaki dodati po u jedan niz (delimiter je prazno mjesto).

#include<stdio.h>
#include<string.h>
#include<time.h>

typedef struct tm tm;

int main()
{    int a,b,x,j;
    int izbor=0;


    time_t trenutno_vrijeme;
    time(&trenutno_vrijeme);

    tm *moje_vrijeme=localtime(&trenutno_vrijeme);
    printf("Datum: %i/%i/%i",moje_vrijeme->tm_mday,moje_vrijeme->tm_mon+1,moje_vrijeme->tm_year+1900);
///moje_vrijeme->tm_mon+1 kod ove naredbe ima +1 jer C racuna januar kao nulu pa kako bi prikaz bio tocan pisemo +1
///moje_vrijeme->tm_year+1900 kod ove naredbe C broji vrijeme od 1900-te godine pa se treba dodati ta godina kako bi prikazbio ispravan
printf("\nVrijeme: %i:%i:%i",moje_vrijeme->tm_hour,moje_vrijeme->tm_min,moje_vrijeme->tm_sec);

do{

printf("\nIzaberite boju:\n");
printf("1.Boja pozadine siva, tekst zeleni\n");
printf("2.Boja pozadine plava, tekst svijetlo ljubicasti\n");
printf("3.Boja pozadine zuta, boja teksa crvena\n");
printf("4.Boja pozadine crna, tekst svijetlo plavi\n");
printf("5.Boja pozadine zuta, tekst zeleni\n");
printf("6.Boja pozadine svijetlo ljubicasta, tekst crveni\n");
printf("7.Izlaz\n");
scanf("%d",&izbor);

switch(izbor)
{
case 1:
    system("COLOR 8A");
    printf("Datum: %i/%i/%i",moje_vrijeme->tm_mday,moje_vrijeme->tm_mon+1,moje_vrijeme->tm_year+1900);
    printf("\nVrijeme: %i:%i:%i",moje_vrijeme->tm_hour,moje_vrijeme->tm_min,moje_vrijeme->tm_sec);
    break;
case 2:
    system("COLOR 1D");
    printf("Datum: %i/%i/%i",moje_vrijeme->tm_mday,moje_vrijeme->tm_mon+1,moje_vrijeme->tm_year+1900);
    printf("\nVrijeme: %i:%i:%i",moje_vrijeme->tm_hour,moje_vrijeme->tm_min,moje_vrijeme->tm_sec);
    break;
case 3:
    system("COLOR 6C");
    printf("Datum: %i/%i/%i",moje_vrijeme->tm_mday,moje_vrijeme->tm_mon+1,moje_vrijeme->tm_year+1900);
    printf("\nVrijeme: %i:%i:%i",moje_vrijeme->tm_hour,moje_vrijeme->tm_min,moje_vrijeme->tm_sec);
    break;
case 4:
    system("COLOR 0B");
    printf("Datum: %i/%i/%i",moje_vrijeme->tm_mday,moje_vrijeme->tm_mon+1,moje_vrijeme->tm_year+1900);
    printf("\nVrijeme: %i:%i:%i",moje_vrijeme->tm_hour,moje_vrijeme->tm_min,moje_vrijeme->tm_sec);
    break;
case 5:
    system("COLOR E2");
    printf("Datum: %i/%i/%i",moje_vrijeme->tm_mday,moje_vrijeme->tm_mon+1,moje_vrijeme->tm_year+1900);
    printf("\nVrijeme: %i:%i:%i",moje_vrijeme->tm_hour,moje_vrijeme->tm_min,moje_vrijeme->tm_sec);
    break;
case 6:
    system("COLOR D4");
    printf("Datum: %i/%i/%i",moje_vrijeme->tm_mday,moje_vrijeme->tm_mon+1,moje_vrijeme->tm_year+1900);
    printf("\nVrijeme: %i:%i:%i",moje_vrijeme->tm_hour,moje_vrijeme->tm_min,moje_vrijeme->tm_sec);
    break;
}
}while(izbor<7);

    return 0;
}
