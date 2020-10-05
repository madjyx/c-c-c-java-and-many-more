//3. Napisati program koji prikazuje zaglavlje koverte koristeci formatere. Prva 3 reda treba da sadrze na koga je
//naslovljena koverta i da budu s u gornjem lijevom uglu koverte. Datum treba da bude u gornjem desnom uglu koverte
// a zadnjih nekoliko redova treba da sadrze ko salje kovertu i da budu u donjem desnom uglu koverte. Svi redovi treb
// da imaju lijevo poravnanje. (Prikazati obris koverte sa znakovima - i |). Sve informacije unijeti preko tastature
#include<stdio.h>

int main()
{
int dan,mjesec,godina;
char adresa[20];
char ime[20];
char prezime[20];
printf("Unesite datum: (dan mjesec godina)\n");
printf("dan:");scanf("%d",&dan,&mjesec,&godina);printf("mjesec:"); scanf("%d",&mjesec);printf("godina:"); scanf("%d",&godina);
printf("Unesite adresu:");
scanf("%s",adresa);
printf("Unesite ime:");
scanf("%s",ime);
printf("Unesite prezime:");
scanf("%s",prezime);


printf("-----------------------------------\n");
printf("|%-s %11d.%2d.%3d|\n","IPI Akademija",dan,mjesec,godina);
printf("|%-s %27s \n",adresa,"|");
printf("%-s %33s\n","|","|");
printf("%-s %33s\n","|","|");
printf("%-s %33s\n","|","|");
printf("%-s %33s\n","|","|");
printf("%-s %33s\n","|","|");
printf("|%30s%4s\n",ime,"|");
printf("|%31s%3s\n",prezime,"|");
printf("-----------------------------------\n");
return 0;


}
