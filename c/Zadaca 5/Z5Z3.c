/*3. Napisati program koji simulira prijavljivanje korisnika na ra�unar koji je za�ti�en lozinkom.Koristiti nizove unutar programa da se smjeste lozinke.  Kada se program pokrene treba da izbaci prompt "Korisni�ko ime:" nakon kojeg se unosi ime korisnika i dok se ukucava treba da se vidi na ekranu.
Nakon unosa imena treba da izbaci prompt "Lozinka:" nakon kojeg unosom bilo kojeg znaka se prikazuje zvjezdica (*).
Ako je Lozinka ta�na program treba da izbaci poruku "Uspjesno ste se prijavili. Dobrodosli".Ako je Lozinka neta�na korisnik mo�e poku�ati jo� 2 puta da je unese, ako pogrije�i sve 3 puta program treba da izbaci poruku "Vas korisnicki racun je zakljucan. Kontaktirajte svog administratora".
Sve ovo realizirati za 3 razlicita korisnika sa od kojih svaki ima drugaciju lozinku.  */

#include <stdio.h>



void main()

{

	char password[10], korisnickoime[10], ch;

	int i;



	printf("Ukucajte ime: ");

	gets(korisnickoime);

	printf("Ukucajte password< 8 karaktera>: ");

	for (i = 0; i < 8; i++)

	{

            ch = getch();


            password[i] = ch;

ch = '*' ;

            printf("%c", ch);

	}

        password[i] = '\0';



	printf("\n Vas password je:");

	for (i = 0; i < 8; i++)

	{

            printf("%c", password[i]);

	}

}


