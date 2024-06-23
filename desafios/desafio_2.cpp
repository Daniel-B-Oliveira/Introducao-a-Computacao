#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){

    int n = 5, i, c1, c2, c3 ;
    c1 = c2 = c3 = 1;

    for(i=1; i <= n; i++,c1++,c2++){
        c3 = i*i*i;
        printf("%d %d %d\n", c1,c2,c3);
        c2 += 2 * i;
        c3++;  
        printf("%d %d %d\n", c1,c2,c3);
    }
    return 0;
}