/*
4. Napisati program koji za zadanu rijeè (ne veæu od 4 slova) ispisuje sve njene permutacije, tj- sve moguæe kombinacije slova - za string od 4 znaka biæe 4 faktorijel kombinacije što je 4*3*2*1=24 razlièite rijeèi.

Primjer: Permutacije stringa "gora" su:

gora, goar, gaor, garo, groa, grao,
ogra, ogar, orga, orag, oarg, oagr,
roga, roag, rgao, rgoa, rago, raog,
agor, agro, argo, arog, aorg, aogr.
*/

#include <stdio.h>

int main()
{
    char str[5];
    printf("Unesite rijec od 4 karaktera:");
    scanf("%s",&str);

    int k = strlen(str);
    permutacija(str, 0, k-1);
    return 0;
}
void zamijeni(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void permutacija(char *a, int l, int r)
{
   int i;
   if (l == r)
     printf("%s\n", a);
   else
   {
       for (i = l; i <= r; i++)
       {
          zamijeni((a+l), (a+i));
          permutacija(a, l+1, r);
          zamijeni((a+l), (a+i));
       }
   }
}
