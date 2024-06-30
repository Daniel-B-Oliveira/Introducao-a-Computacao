#include <stdlib.h>
#include <stdio.h>

int main(){
    int T, i, anos;
    float PA, PB, G1, G2;
    scanf("%d", &T);

    for(i = 1; i <= T; i++){
        scanf("%f %f %f %f", &PA, &PB, &G1, &G2);
        
        anos = 0;
        
        while(PA <= PB){
            PA = (int)PA*(1+G1/100);
            PB = (int)PB*(1+G2/100);
            anos ++;
        }
        printf("%d\n", anos);
    }
    return 0;
}
