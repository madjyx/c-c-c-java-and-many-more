/*3. Napisati program koji simulira prijavljivanje korisnika na raèunar koji je zaštiæen lozinkom.
    Koristiti nizove unutar programa da se smjeste lozinke.  Kada se program pokrene treba da izbaci prompt
    "Korisnièko ime:" nakon kojeg se unosi ime korisnika i dok se ukucava treba da se vidi na ekranu.
    Nakon unosa imena treba da izbaci prompt "Lozinka:" nakon kojeg unosom bilo kojeg znaka se prikazuje zvjezdica (*).
    Ako je Lozinka taèna program treba da izbaci poruku "Uspjesno ste se prijavili. Dobrodosli".Ako je Lozinka netaèna
    korisnik može pokušati još 2 puta da je unese, ako pogriješi sve 3 puta program treba da izbaci poruku "Vas korisnicki
    racun je zakljucan. Kontaktirajte svog administratora".

    Sve ovo realizirati za 3 razlicita korisnika sa od kojih svaki ima drugaciju lozinku.*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

struct login{
    char ime[20];
    char lozinka[20];
};


int main (){

    int i,j=0, k=1;
    char c, password[20];
    struct login korisnik[3];
    struct login *pKorisnik;
    pKorisnik=korisnik;

    printf("%10sREGISTRACIJA\n", " ");
    for(i=0;i<3;i++){
        printf("%d.Ime: ",1+i);
        gets((pKorisnik+i)->ime);
        printf("%d.Lozinka: ",1+i);
        j=0;
        strncpy(password, "",20 );
        while(1){
        c=getch();
        if(c=='\r')break;
        password[j]=c;
        if(c!='\r'){
        printf("*");}
        j++;

    }
        strcpy((pKorisnik+i)->lozinka, password);
        printf("\n--------------------------------\n");
    }

    struct login kor[3];
    struct login *pKor;
    pKor=kor;

    printf("%10sLOGIN\n", " ");
      for(i=0;i<3;i++){
        k=1;
      while(k<=3){
        printf("%d.Ime: ",1+i);
        gets((pKor+i)->ime);

        printf("%d.Lozinka: ",1+i);
        j=0;
        strncpy(password, "",20 );
        while(1){
        c=getch();
        if(c=='\r')break;
        password[j]=c;
        if(c!='\r'){
        printf("*");}
        j++;
    }
        strcpy((pKor+i)->lozinka, password);
        printf("\n--------------------------------\n");

        if (((strcmp((pKorisnik+i)->ime,(pKor+i)->ime))==0)&&((strcmp((pKorisnik+i)->lozinka,(pKor+i)->lozinka))==0)){
            printf("Uspjesno ste se prijavili. Dobro dosli\n");
            k=4;
        }else{// if (((strcmp((pKorisnik+i)->ime,(pKor+i)->ime))!=0)&&((strcmp((pKorisnik+i)->lozinka,(pKor+i)->lozinka))!=0)){
            printf("Vasi podaci nisu tacni. Pokusajte ponovo\n");
        }if((k-3)==0){
        printf("Vas korisnicki racun je zakljucan. Kontaktirajte svog administratora\n");
        }
        k++;

        }
      }

    return 0;
}
