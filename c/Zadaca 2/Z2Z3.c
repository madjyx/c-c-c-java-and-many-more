/*3. Napisati zadatak tako da u odnosnu na uslove ispitane pomoću relacionih operatora se izvršava jedan, drugi ili
treci izraz. Svaki izraz treba da sadrži:

-po dva aritmetrička operatora,
-jedan logički operator
-jedan unarni operator. */

#include <stdio.h>
int main()
{

    int prviizraz, drugiizraz, treciizraz;
    int a, b, c;
    printf("Unesite broj a:");
    scanf("%d",&a);
    printf("Unesite broj b:");
      scanf("%d",&b);
    printf("Unesite broj c:");
      scanf("%d",&c);
    if(a>b)
    {
        printf("U ovom slucaju izvrsit ce se prvi izraz.\n");
        prviizraz= (a+(--b))&&(c-a);
        printf("Rješenje prvog izraza (a+(--b))&&(c-a) je: %d", prviizraz);
/*Prvi slucaj se izvrsava kada je nase a vece od b.Koristili smo dva aritmeticka operatora(+,-), jedan logièki(&&)
  i jedan unarni(--). U sluèaju da unesemo vrijednosti npr : za a = 4 , b=2, c=4 rješenje našeg izraza bit ce 0.
  Kako? --b ce smanjiti nase b za 1 i sabrat ce se sa a.
  Tu ce rezultat biti 5(TRUE), kada se bude rjesavalo (c-a) bit ce 4-4 gdje ce rezultat biti nula(FALSE) i s obzirom na
  to da smo stavili operator &&(logièko I ) i jedan i drugi operand moraju biti tacni(TRUE) odnosno razliciti od nule
  da bi rezultat bio 1, sto kod nas nije sluèaj.  */
  }
  else if(a<b)
  {
    printf("U ovom slucaju izvrsit ce se drugi izraz.\n");
      drugiizraz=b-(++a)||(c-a);
        printf("Rjesenje drugog izraza b-(++a)||(c-a) je: %d", drugiizraz);
   /* Drugi slucaj se izvrsava kada je nase a manje od b.Prefiks unarni operator, povecava vrijednost varijable a za
   1 prije nego sto se bilo sta izracuna u izrazu. U sluèaju da smo unijeli npr. a=3, b=5,c=4 rješenje ce biti 1.
   Kako? Kao sto je vec napisano a se odmah povecava za 1, znaci a ce biti 4. Racuna se b-(++a)=1(TRUE), nakon toga se
   racuna (c-a)=4-4=0(FALSE). I s obzirom na to da koristimo logicki operator ili kod njega je rjesenje TRUE ako je
   bilo koji izraz TRUE.     */
  }
  else
  {
       printf("U ovom slucaju izvrsit ce se treci izraz.\n");
       treciizraz= ( !(a && b) ) + (--c);
       printf("Rjesenje treceg izraza (!(a&&b))+(--c): %d", treciizraz);
       /* Treci slucaj se izvrsava kada je nase a jednako b. --c znaci da se se nase c smanjiti za 1.
       U slucaju kada imamo npr: a=2 b=2 c=4 rezultat naseg izraza bit ce 3.
       Kako? a i b su isti u ovom slucaju ali posto smo stavili negaciju ispred izraza !(a&&b) to znaci da ukoliko
       je izraz u zagradi TRUE sto i jeste zbog negacije ce postate FALSE(0) nakon toga ta nula ce se sabrati sa
       c koji zbog prefiksa vise nije 4 nego 3, 0+3=3.  */


  }
    return 0;
}
