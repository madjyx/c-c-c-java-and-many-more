/*1. Uraditi zadatak Z3Z5 pomocu varijabilne funkcije*/



#include<stdio.h>
#include<stdarg.h>



void izlaz();
void b(int,...);

int main(){


    izlaz();




    return 0;
}




void izlaz(){


int a , c;


printf("1) *      2)     *  3) *****   4) ***** \n");
printf("   **           **     ****        **** \n");
printf("   ***         ***     ***          *** \n");
printf("   ****       ****     **            ** \n");
printf("   *****     *****     *              * \n");

printf("Unesite jedan od ponujednih oblika \n");
scanf(" %d",&a);
if((a!=0)&&(a<5)){
    printf("Unesite sirinu koju zelite \n");
    scanf(" %d", &c);
}
b(2, a, c);


}

void b(int num,...){
    va_list valist;
    int a, c, i, j,exit=1;

    va_start(valist, num);

    a=va_arg(valist, int);
    c=va_arg(valist, int);

    switch(a){

case 1:
    for(i=1;i<=c;i++){
        for(j=0;j<=c;j++){
            if(i>j){
                printf("*");
            }else printf("");
        }printf("\n");
    }
break;
  case 2:
            for(i=1;i<=c;i++){
        for(j=c;j>=0;j--){

            if(i>j){
                printf("*");
            }else printf(" ");
            }
            printf("\n");
        }
break;
case 3:
    for(i=0;i<=c;i++){
        for(j=c;j>=1;j--){
            if(i<j){
                printf("*");

            }else printf("");
        }printf("\n");
    }
break;
        case 4:
            for(i=0;i<=c;i++){
        for(j=1;j<=c;j++){
            if(i<j){
                printf("*");
            }else printf(" ");
            }
        printf("\n");
        } break;

default:
    if(a==0){
  exit=0;
        printf("Dovidjenja\n");
    }else{
    printf("Greska\n");}


    }
    va_end(valist);
}
