#include <stdlib.h>
#include <stdio.h>

int main(){
    int hi, mi, hf, mf, ti, tf, ht, mt;

    printf("Digite (h min h min): ");
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);



    if( hi == hf){                          //Dias iguais ou nao
        if(mi < mf){                        //Mesmo dia
            ti = hi*60 + mi;
            tf = hf*60 + mf;

        }else if(mi > mf){                  //Dias diferentes
            hf += 24;

            ti = hi*60 + mi;
            tf = hf*60 + mf;

        }else{  // mi == mf                 //24 horas de diferenca
            hf += 24;

            ti = hi*60 + mi;
            tf = hf*60 + mf;
        }
    }else if(hi < hf || hf == 0){           //Sempre mesmo dia
        if(hf == 0) hf = 24;                //00:xx = 24:xx

        ti = hi*60 + mi;
        tf = hf*60 + mf;

    }else{      // hi > hf                  //Sempre dias diferentes
        hf += 24;                           

        ti = hi*60 + mi;
        tf = hf*60 + mi;
    }

    ht = (tf - ti) / 60;
    mt = (tf - ti) % 60;

    printf("O tempo da partida foi de %d h e %d min", ht, mt);

    return 0;

}