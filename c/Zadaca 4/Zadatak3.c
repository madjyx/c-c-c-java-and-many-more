/*3. Napisati main funkciju prima argumente iz komandnog prozora:
    -Ime
    -Prezime
    -Broj indexa
    -Smijer
    -Broj predmeta
    -Prosjecnu ocjenu u srednjoj skoli
    Sve proslijedene argumente smjestiti u jednu strukturu. Napisati i pozvati funkciju koja
    ce ispisati sve elemente strukture.*/

#include<stdio.h>
#include<string.h>

struct student{
    char ime[20];
    char prezime[20];
    float broj_indexa;
    char smijer[30];
    float broj_predmeta;
    float prosjecna_ocjena;
};
struct student f_student(struct student);

int main(){

    char ime[20];
    char prezime[20];
    char Smijer[30];
    float broj_predmeta, prosjecna_ocj, broj_indexa;

    puts("Unesite ime:");
    gets(ime);

    puts("Unesite prezime:");
    gets(prezime);

    puts("Smijer koji pohadate:");
    gets(Smijer);

    printf("Unesite broj indexa:\n");
    scanf(" %f", &broj_indexa);

    printf("Unesite broj predmeta:\n");
    scanf(" %f", &broj_predmeta);

    printf("Unesite prosjecnu ocjenu iz srednje skole:\n");
    scanf(" %f", &prosjecna_ocj);

    struct student prvi;
    strcpy(prvi.ime,ime);
    strcpy(prvi.prezime,prezime);
    prvi.broj_indexa=broj_indexa;
    strcpy(prvi.smijer,Smijer);
    prvi.broj_predmeta=broj_predmeta;
    prvi.prosjecna_ocjena=prosjecna_ocj;
    printf("-------------------------------------------\n");

    f_student(prvi);



    return 0;
}

struct student f_student(struct student isti){

    printf("Ime: %s\n",isti.ime);
    printf("Prezime: %s\n",isti.prezime);
    printf("Br.Indexa: %.0f\n",isti.broj_indexa);
    printf("Smijer: %s\n",isti.smijer);
    printf("Broj predmeta: %.0f\n",isti.broj_predmeta);
    printf("Prosjecna ocjena: %.2f\n",isti.prosjecna_ocjena);

};
