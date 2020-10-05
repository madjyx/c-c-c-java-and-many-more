/*5. Napraviti meni za odabir jedne od 7 jedinica (metar, kilogram, sekunda, amper, Kelvin, mol, kandela)
    iz SI sistema i njenu vrijednost.
    Nakon unosa pozvati odgovarajuæu rekurzivnu funkciju koja ispisuje tu jedinicu:

    - u  deci, centi, mili, micro, nano, pico vrijednostima
    - ili u deka, hekto, kilo, mega, giga, tera vrijednostima

    Na primjer: Izlaz treba da bude sljedeæi za recimo 7Kg :

    7 Kilogram =70000 decigram=700000 centigram=7000000 miligram=7000000000 mikrogram ... itd

    Restrikcija:
    Unos treba da bude u osnovnim jedinicama (za vrijeme: sekunda, za dužinu: metar, itd)
    Dozvoljeno je koristiti header fajlove.*/

#include <stdio.h>
#include <math.h>

float konverzija(float n);

int main (){

    int program=1, e=0;
    double unos, deci=0, centi=0, mili=0, mikro=0, nano=0, piko=0;

    printf("%15sDOBRO DOSLI!!!\nPROGRAM KONVERTUJE OSNOVNE JEDINICE SI SISTEMA!!!\n\n", " ");
    while (program!=0){

        printf("Odaberite jedinicu za konverziju\n\n");
        printf("1.Metar\n");
        printf("2.Kilogram\n");
        printf("3.Sekunda\n");
        printf("4.Amper\n");
        printf("5.Kelvin\n");
        printf("6.Mol\n");
        printf("7.Kandela\n");
        printf("0 Izlaz\n");
        printf("Unesite odabir\n");
        scanf(" %d", &e);
        switch(e){
        case 1:
            printf("Unesite broj metara\nProgram konvertuje iz osnovnih mjernih jedinica\n");
            scanf(" %lf", &unos);
            deci=unos*konverzija(2);
            centi=unos*konverzija(3);
            mili=unos*konverzija(4);
            mikro=unos*konverzija(7);
            nano=unos*konverzija(10);
            piko=unos*konverzija(13);
            printf("%.2lf m = %.2lf dm - %.2lf cm - %.2lf mm - %.2lf mikrometara - %.2lf nm - %.2lf pm\n",unos, deci, centi, mili, mikro, nano, piko);
             break;
        case 2:
            printf("Unesite broj kilograma\nProgram konvertuje iz osnovnih mjernih jedinica\n");
            scanf(" %lf", &unos);
            deci=unos*konverzija(2);
            centi=unos*konverzija(3);
            mili=unos*konverzija(4);
            mikro=unos*konverzija(7);
            nano=unos*konverzija(10);
            piko=unos*konverzija(13);
            printf("%.2lf kg = %.2lf dg - %.2lf cg - %.2lf mg - %.2lf mikrogram - %.2lf ng - %.2lf pg\n",unos, deci, centi, mili, mikro, nano, piko);
            break;
        case 3:
            printf("Unesite broj sekundi\nProgram konvertuje iz osnovnih mjernih jedinica\n");
            scanf(" %lf", &unos);
            deci=unos*konverzija(2);
            centi=unos*konverzija(3);
            mili=unos*konverzija(4);
            mikro=unos*konverzija(7);
            nano=unos*konverzija(10);
            piko=unos*konverzija(13);
            printf("%.2lf s = %.2lf ds - %.2lf cs - %.2lf ms - %.2lf mikrosekunda - %.2lf nm - %.2lf pm\n",unos, deci, centi, mili, mikro, nano, piko);
            break;
        case 4:
            printf("Unesite broj ampera\nProgram konvertuje iz osnovnih mjernih jedinica\n");
            scanf(" %lf", &unos);
            deci=unos*konverzija(2);
            centi=unos*konverzija(3);
            mili=unos*konverzija(4);
            mikro=unos*konverzija(7);
            nano=unos*konverzija(10);
            piko=unos*konverzija(13);
            printf("%.2lf A = %.2lf dA - %.2lf cA - %.2lf mA - %.2lf mikroA - %.2lf nA - %.2lf pA\n",unos, deci, centi, mili, mikro, nano, piko);
             break;
        case 5:
            printf("Unesite broj kelvina\nProgram konvertuje iz osnovnih mjernih jedinica\n");
            scanf(" %lf", &unos);
            deci=unos*konverzija(2);
            centi=unos*konverzija(3);
            mili=unos*konverzija(4);
            mikro=unos*konverzija(7);
            nano=unos*konverzija(10);
            piko=unos*konverzija(13);
            printf("%.2lf K = %.2lf dK - %.2lf cK - %.2lf mK - %.2lf mikroK - %.2lf nK - %.2lf pK\n",unos, deci, centi, mili, mikro, nano, piko);
            break;
        case 6:
            printf("Unesite broj mola\nProgram konvertuje iz osnovnih mjernih jedinica\n");
            scanf(" %lf", &unos);
            deci=unos*konverzija(2);
            centi=unos*konverzija(3);
            mili=unos*konverzija(4);
            mikro=unos*konverzija(7);
            nano=unos*konverzija(10);
            piko=unos*konverzija(13);
            printf("%.2lf mol = %.2lf dmol - %.2lf cmol - %.2lf mmol - %.2lf mikromol - %.2lf nmol - %.2lf pmol\n",unos, deci, centi, mili, mikro, nano, piko);
             break;
        case 7:
            printf("Unesite broj kandela\nProgram konvertuje iz osnovnih mjernih jedinica\n");
            scanf(" %lf", &unos);
            deci=unos*konverzija(2);
            centi=unos*konverzija(3);
            mili=unos*konverzija(4);
            mikro=unos*konverzija(7);
            nano=unos*konverzija(10);
            piko=unos*konverzija(13);
            printf("%.2lf cd = %.2lf dcd - %.2lf ccd - %.2lf mcd - %.2lf mikrocd - %.2lf ncd - %.2lf pcd\n",unos, deci, centi, mili, mikro, nano, piko);
             break;
        case 0:printf("Hvala vam sto ste koristili nas program\n");
                program=0; break;
        default:printf("Niste unijeli odgovarajuci odabir\n");break;}

    }

    return 0;
}
float konverzija(float n){
    if(n==1){
        return 1;
    }else{

    return (10*konverzija(n-1));
    }
}
