#include <stdlib.h>
#include <stdio.h>

int main(){
    int T, i, anos = 0;
    float PA, PB, G1, G2;
    scanf("%d", &T);

    for(i = 1; i <= T; i++){
        scanf("%f %f %f %f", &PA, &PB, &G1, &G2);
        while(PA <= PB){
            PA = PA*(1+G1/100);
            PA = (int)PA;
            PB = PB*(1+G2/100);
            PB = (int)PB;
            anos ++;
        }
        printf("%d\n", anos);
        anos = 0;
    }
    return 0;
}