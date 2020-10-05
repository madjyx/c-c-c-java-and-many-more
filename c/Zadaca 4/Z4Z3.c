/*3. Napisati main funkciju prima argumente iz komandnog prozora:

-Ime
-Prezime
-Broj indexa
-smjer
-broj predmeta
-prosjecnu ocjenu u srednjoj školi

Sve proslijeðene argumente smjestiti u jednu strukturu.
Napisati i pozvati funkciju koja ce ispisati na ekran sve elemente strukture.*/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

struct Student {
char ime[10];
char prezime[18];
char broj_indeksa[10];
char smjer[30];
int broj_predmeta;
float ocjena_u_skoli;
}C;
void P();
int main()
{

    int a;
    float b;
    char niz[200];


    struct C;
    struct Student *pok;
    pok=&C;
    printf("Unesite vase ime: ");
    gets(niz);
    strcpy(pok->ime,niz);

    printf("Unesite vase prezime: ");
    gets(niz);
    strcpy(pok->prezime,niz);

    printf("Unesite vas broj indeksa: ");
    gets(niz);
    strcpy(pok->broj_indeksa,niz);

    printf("Unesite vas smijer: ");
    gets(niz);
    strcpy(pok->smjer,niz);

    printf("Unesite broj predmeta: ");
    scanf("%d",&a);
    pok->broj_predmeta=a;

      printf("Uensite prosjecnu ocjenu u srednjoj skoli: ");
    scanf("%f",&b);
    pok->ocjena_u_skoli=b;
printf("\n");
P();
    return 0;
}

void P()
{
    printf("Ime: %s \nPrezime: %s \nBroj indeksa: %s \nSmjer: %s\nBroj predmeta: %d\nProsjecna ocjena u srednjoj skoli: %.2f\n",C.ime,C.prezime,C.broj_indeksa,C.smjer,C.broj_predmeta,C.ocjena_u_skoli);
}
