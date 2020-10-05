/* 3.Napisati program koji imitira poznatu igru "X/O". Igra je predvidena za dva igraca (X i O).
Oba korisnika trebaju da imaju izbor u koje polje zele unijeti svoj karakter 'X' ili 'O'.
Nakon svakog unosa ispisati ažuriranu tablu na ekran. Ako je uslov pobjednika ispunjen,
ispisati ko je pobjednik, ali uzeti u obzir da može biti i izjednaèeno. */

#include <stdio.h>
#include <conio.h>

char polje[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int provjerapobjede();
void igra();

int main()
{
    int igrac = 1, i, izbor;

    char znak;
    do
    {
        igra();
        igrac = (igrac % 2) ? 1 : 2;

        printf("igrac %d, unesi broj:  ", igrac);
        scanf("%d", &izbor);

        znak = (igrac == 1) ? 'X' : 'O';

        if (izbor == 1 && polje[1] == '1')
            polje[1] = znak;

        else if (izbor == 2 && polje[2] == '2')
            polje[2] = znak;

        else if (izbor == 3 && polje[3] == '3')
            polje[3] = znak;

        else if (izbor == 4 && polje[4] == '4')
            polje[4] = znak;

        else if (izbor == 5 && polje[5] == '5')
            polje[5] = znak;

        else if (izbor == 6 && polje[6] == '6')
            polje[6] = znak;

        else if (izbor == 7 && polje[7] == '7')
            polje[7] = znak;

        else if (izbor == 8 && polje[8] == '8')
            polje[8] = znak;

        else if (izbor == 9 && polje[9] == '9')
            polje[9] = znak;

        else
        {
            printf("Pogresan potez ");

            igrac--;
            getch();
        }
        i = provjerapobjede();

        igrac++;
    }while (i ==  - 1);

    igra();

    if (i == 1)
        printf("*****\aIgrac %d je pobijedio**** ", --igrac);
    else
        printf("*****\aIZJEDNACENO******");

    getch();

    return 0;
}


int provjerapobjede()
{
    if (polje[1] == polje[2] && polje[2] == polje[3])
        return 1;

    else if (polje[4] == polje[5] && polje[5] == polje[6])
        return 1;

    else if (polje[7] == polje[8] && polje[8] == polje[9])
        return 1;

    else if (polje[1] == polje[4] && polje[4] == polje[7])
        return 1;

    else if (polje[2] == polje[5] && polje[5] == polje[8])
        return 1;

    else if (polje[3] == polje[6] && polje[6] == polje[9])
        return 1;

    else if (polje[1] == polje[5] && polje[5] == polje[9])
        return 1;

    else if (polje[3] == polje[5] && polje[5] == polje[7])
        return 1;

    else if (polje[1] != '1' && polje[2] != '2' && polje[3] != '3' &&
        polje[4] != '4' && polje[5] != '5' && polje[6] != '6' && polje[7]
        != '7' && polje[8] != '8' && polje[9] != '9')

        return 0;
    else
        return  - 1;
}





void igra()
{
    system("cls");
    printf("\n\n\Igrica X O\n\n");

    printf("Igrac 1 (X)  -  Igrac 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", polje[1], polje[2], polje[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", polje[4], polje[5], polje[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", polje[7], polje[8], polje[9]);

    printf("     |     |     \n\n");
}
