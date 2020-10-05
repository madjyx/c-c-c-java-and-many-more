//5. Napraviti program koji u zavisnosti od odabira, raèuna zapreminu jednog od 3 tijela (proizvoljna).
// Za konstante koristiti pretprocesorku direktivu define.


#include <stdio.h>
#define PI 3.14159

int main()
{   int izbor;
  float zapreminakruga;
  float zapreminalopte;
  float zapreminavaljka;
  float poluprecnikkruga;
  float poluprecniklopte;
  float poluprecnikvaljka,visinavaljka;
  printf("1- Krug, 2- Valjak, 3-Lopta\n");
    printf("Unesite zeljeni broj:");
    scanf("%d", &izbor);

    switch(izbor){

    case 1:

        printf("Izabrali ste da izracunamo zapreminu kruga.\n");
        printf("Unesite poluprecnik:");
        scanf("%f",&poluprecnikkruga);
        zapreminakruga=PI*(poluprecnikkruga*poluprecnikkruga);
        printf("Zapremina kruga je %.2f", zapreminakruga); break;

            case 2 : printf("Izabrali ste da izracunamo zapreminu valjka.\n");
     printf("Unesite poluprecnik:");
        scanf("%f",&poluprecnikvaljka);
         printf("Unesite visinu valjka:");
        scanf("%f",&visinavaljka);
        zapreminavaljka=PI*(poluprecnikvaljka*poluprecnikvaljka)*visinavaljka;
        printf("Zapremina valjka je %.2f", zapreminavaljka);
        break;
    case 3 : printf("Izabrali ste da izracunamo zapreminu lopte.\n");
     printf("Unesite poluprecnik:");
        scanf("%f",&poluprecniklopte);
        zapreminalopte=(4/3)*PI*(poluprecniklopte*poluprecniklopte*poluprecniklopte);
        printf("Zapremina lopte je %2.f", zapreminalopte);
        break;

    default: printf("Pogresan izbor"); break;




}
}
