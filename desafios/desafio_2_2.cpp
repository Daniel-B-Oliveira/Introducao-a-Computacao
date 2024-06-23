#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int max, i, c1=0, c2=0, c3=1;

    scanf("%d", &max);

    for(i = 0; i < max*2; i++){
        if(i % 2 == 0){
            c1++;
            c2++;
            c3 = pow(i/2 + 1, 3);
        }
        else{
          //c1 += 0;
            c2 += 2*i;
            c3 += 1;
        }
        printf("%d %d %d\n", c1, c2, c3);
    }

    return 0;
}