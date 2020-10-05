//3. Napisati program koji prikazuje zaglavlje koverte koristeci formatere.
//Prva 3 reda treba da sadrze na koga je naslovljena koverta i da budu s u gornjem lijevom uglu koverte.
//Datum treba da bude u gornjem desnom uglu koverte a zadnjih nekoliko redova treba da sadrze ko salje kovertu i da budu u donjem desnom uglu koverte.
//Svi redovi treba da imaju lijevo poravnanje. (Prikazati obris koverte sa znakovima - i |). Sve informacije unijeti preko tastature.
//Restrikcija: Prazna mjesta ne dodavati u printf funkciji, dodati ih kroz formatere

#include <stdio.h>
int main(){

printf("-----------------------------------------------------\n");
printf("%.s| IPI Akademija %30.sDatum |\n");
printf("%.s|Kulina bana 2 %37.s|\n");
printf("%.s| Tuzla %44.s|\n");
printf("%.s| %50.s|\n");
printf("%.s| %50.s|\n");
printf("%.s| %50.s|\n");
printf("%.s| %50.s|\n");
printf("%.s| %50.s|\n");
printf("%.s| %50.s|\n");
printf("%.s| %50.s|\n");
printf("%.s| %31.s Zvonimir Madarac |\n");
printf("-----------------------------------------------------\n");











return 0;
}
