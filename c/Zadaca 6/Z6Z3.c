/*
3. Napraviti program koji imitira poznatu igru "VJEŠALA".
Igra se igra sa jednim igraèem. Unutar programa napisati rijeè koja treba da bude pogoðena.
Pogaðanje sa vrši na osnovu jednog karaktera, po pogotku ispisati mjesto karaktera u zadatoj rijeci, ili više pozicija po potrebi,
 a ako se desi greška ispisati jedan dio na vješalu i smanjiti broj pokušaja. Dozvoliti broj pokušaja koji je za 3 veæi od broja slova u rijeèi.
 Nakon pogotka ili promašaja oèistiti ekran i ponovo ga prikazati sa updatovanim informacijama.

Primjer vješala:

   ---------
   ||     |
   ||    \O/
   ||     |
   ||    / \
   ||

      p r o _ r _ m _ r _ _ e     / Tražena rijec: programiranje

*/
#include <stdio.h>
#include <conio.h>


char a;
int i,j=1;
int b=0;
int h=8;
char rijec[50]={'a','k','a','d','e','m','i','j','a'}; //izabrali smo da korisnik trazi rijec AKADEMIJA
char le[50]={'_','_','_','_','_','_','_','_','_'};
int main(){
while(1){
clrscr();
vjesala();
igra();
printf("Unesite slovo: ");
scanf("%s",&a);
nekarijec();


}



return 0;
}
void vjesala(){
    printf("Imate %d pokusaja\n",h);

 printf("---------\n");
            printf("||     %s\n", (j>=3)?"|": " ");
            printf("||    %s%s%s\n",(j>=5)?"\\":" ",(j>=4)?"o":" ",(j>=6)?"/":" " );
            printf("||     %s\n",(j>=7)?"|":" ");
            printf("||    %s %s\n",(j>=8)?"/":" ",(j>=9)?"\\":" ");
            printf("||       \n");
            if(h==0){
                printf("Iskoristili ste sve pokusaje vasa rijec je bila AKADEMIJA.\n\n");
                exit(0);
            }
           if(b==9){
               printf("Pobijedili ste, vasa rijec je bila AKADEMIJA.\n");
}
}
void nekarijec(){
switch(a){
case 'a':
le[0]=rijec[0];
le[2]=rijec[2];
le[8]=rijec[8];
b++;
    break;
case 'k':
le[1]=rijec[1];
b++;
    break;
    case 'd':
le[3]=rijec[3];
b++;
        break;
        case 'e':
le[4]=rijec[4];
b++;
            break;
            case 'm':
le[5]=rijec[5];
b++;
            break;
            case 'i':
le[6]=rijec[6];
b++;
            break;
            case 'j':
le[7]=rijec[7];
b++;

            break;
            default:
j++;    h--;
            break;

}

}
void igra(){
    for(i=0;i<9;i++){
printf("%3c",le[i]);
    }
    printf("\n\n\n");
}
void clrscr()
{
    system("@cls||clear");
}






