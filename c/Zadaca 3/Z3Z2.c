/*2. Napisati program koji imitira igru "Tko želi biti milijunaš". Napraviti odredjenu skalu (min-max), kako bi
korisnik sa svakim tacnim odgovorom osvojio odredjeni iznos zamisljenog novca(Bodova), a ukoliko igrac napravi
grešku bodovi se brišu, osim u slucaju da je prešao odredjeni sigurni iznos, gdje je broj bodova jednak tom
sigurnom iznosu. Isprintati rezultat i zavrsiti program.*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int a,b,c,d;
    int izlaz;
    char D[]="D";
    char nizA[]="A";
    char nizB[]="B";
    char nizC[]="C";
    char niz[]="r";
    char niz1[]="";
printf("\n\nODGOVORE PISITE VELIKM SLOVIMA\n\n");
do{

    printf("\t\tDOBRODOSLI U MILIJUNAS\n\n");
    printf("\aPrvo pitanje za 10KM\n 1.Sta nije jedno od osjetila?\n");
    printf("A-Vid  B-Opip\nC-Okus  D-Govor\n");
    printf("Vas odgovor je pod -> ");
    gets(niz1);
    if(strcmp(niz1,D)==0){printf("TACAN ODGOVOR osvojili ste 10KM\n\n");}
    else {printf("Zao nam je to je NETACAN ODGOVOR izgubili ste sve\n\n");goto A;}

    printf("Koji je zid izgradjen 1961 godine?\n");
    printf("A- Berlinski   B- Zid placa\nC- Kineski zid   D- Zid srama\n");
    printf("Vas odgovor je pod -> ");
    gets(niz1);
    if(strcmp(niz1,nizA)==0)printf("TACAN ODGOVOR osvojili ste 50KM\n\n");
    else {printf("Zao nam je to je NETACAN ODGOVOR izgubili ste sve\n\n");goto A;}

    printf("Trece pitanje za 100KM(sigurnosni iznos)\n 3.Najvise snage napojne jedinice odlazi na?\n");
    printf("A- Graficke kartice   B- Opticke uredjaje\nC- Radnu memoriju  D- Grijanje hladnjaka procesora C\n");
    printf("Vas odgovor je pod -> ");
    gets(niz1);
    if(strcmp(niz1,nizA)==0)printf("TACAN ODGOVOR osvojili ste 100KM\n\n");
    else {printf("Zao nam je to je NETACAN ODGOVOR izgubili ste sve\n\n");goto A;}

    printf("Cetvrto pitanje za 200KM\n 4.Koju memoriju koristi vecina grafickih kartica?\n");
    printf("A- PCI Express memoriju   B- AGP memoriju\nC- SDDR memoriju   D-GDDR memoriju\n");
    printf("Vas odgovor je pod -> ");
    gets(niz1);
    a=strcmp(niz1,D);
    if(strcmp(D,niz1)==0)printf("TACAN ODGOVOR osvojili ste 200KM\n\n");
    else {printf("Zao nam je to je NETACAN ODGOVOR Ostvareni iznos=100KM\n\n%d",a);goto A;}

    printf("Peto pitanje za 300KM(Sigurnosni iznos)\n 5.Koliko ima kontinenata?\n");
    printf("A- 5   B- 7\nC- 6  D- 8\n");
    printf("Vas odgovor je pod -> ");
    gets(niz1);
    if(strcmp(niz1,nizB)==0)printf("TACAN ODGOVOR osvojili ste 300KM\n\n");
    else {printf("Zao nam je to je NETACAN ODGOVOR Ostvareni iznos=100KM\n\n");goto A;}

    printf("Sesto pitanje za 500KM\n 6.Nastavi uzrecicu.. Svjetlo je uvijek na kraju?\n");
    printf("A- Puta  B- Tunela\nC-Balade  D- Ulice\n");
    printf("Vas odgovor je pod -> ");
    gets(niz1);
    if(strcmp(niz1,nizB)==0)printf("TACAN ODGOVOR osvojili ste 500KM\n\n");
    else {printf("Zao nam je to je NETACAN ODGOVOR Ostvareni iznos=300KM\n\n");goto A;}

     printf("Sedmo pitanje za 700KM(sigurnosni iznos)\n 7.Koliko puta godisnje Zemlja obidje Sunce?\n");
    printf("A-365  B-7\nC- 52  D- 1\n");
    printf("Vas odgovor je pod -> ");
    gets(niz1);
    if(strcmp(niz1,D)==0)printf("TACAN ODGOVOR osvojili ste 700KM\n\n");
    else {printf("Zao nam je to je NETACAN ODGOVOR Ostvareni iznos=300KM\n\n");goto A;}

     printf("Osmo pitanje za 850KM\n 8.Koliko je u bajci snjeguljica bilo patuljaka?\n");
    printf("A- 8  B-10 \nC-7    D-12\n");
    printf("Vas odgovor je pod -> ");
    gets(niz1);
    if(strcmp(niz1,nizC)==0)printf("TACAN ODGOVOR osvojili ste 850KM\n\n");
    else {printf("Zao nam je to je NETACAN ODGOVOR Ostvareni iznos=700KM\n\n");goto A;}

    printf("Deveto pitanje za 1000KM(sigurnosni iznos)\n 9.Ahilovo jedino ranjivo mjesto bilo je?\n");
    printf("A-oko   B-ruka\nC- koljeno  D-peta\n");
    printf("Vas odgovor je pod -> ");
    gets(niz1);
    if(strcmp(niz1,D)==0){printf("TACAN ODGOVOR osvojili ste \n\n\t\t****\aMILIJUNAS\a****\n\n\tOstvareni iznos=1000KM");izlaz=2;}
    else {printf("Zao nam je to je NETACAN ODGOVOR Ostvareni iznos=700KM\n\n");goto A;}

A:izlaz=2;
}while(izlaz==1);

    return 0;
}
