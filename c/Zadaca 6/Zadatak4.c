/*4. Napisati program koji za zadanu rije� (ne ve�u od 4 slova) ispisuje sve njene permutacije,
     tj- sve mogu�e kombinacije slova - za string od 4 znaka bi�e 4 faktorijel kombinacije
     �to je 4*3*2*1=24 razli�ite rije�i.

    Primjer: Permutacije stringa "gora" su:

    gora, goar, gaor, garo, groa, grao,
    ogra, ogar, orga, orag, oarg, oagr,
    roga, roag, rgao, rgoa, rago, raog,
    agor, agro, argo, arog, aorg, aogr.*/

#include<stdio.h>


int main(){

    char a[4]={"abcd"}, b[4];
    int i, j, k, l;



    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            for(k=0;k<4;k++){
                for(l=0;l<4;l++){
                    if(i!=j&&i!=k&&i!=l&&j!=k&&j!=l&&k!=l){
                        printf("%c %c %c %c", a[i],a[j],a[k],a[l]);
                        printf("\n");
                    }
                }
            }
        }
    }





    return 0;
}


