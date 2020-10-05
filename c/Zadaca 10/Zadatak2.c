/*2. Definisati dvije matrice int i char koje su 3x3. Napuniti
    matrice sa nasumiènim vrijednostima ne veæim od 250.
    Iskoristiti jedan pokazivaè (void) da se predstave obje matrice.*/

#include<stdio.h>


int main(){
int niz[3][3];
char niz1[3][3];

int i,j;
void *pNiz;

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        niz[i][j]=rand()%250+1;
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        niz1[i][j]=rand()%250+1;
    }
}
   pNiz=&niz[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%3d ",*((int*)pNiz+i+j));
        }
        printf("\n");
    }
    printf("\n\n");
    pNiz=&niz1;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%3c ",*((char*)pNiz+i+j));
        }
        printf("\n");
    }

    return 0;}
