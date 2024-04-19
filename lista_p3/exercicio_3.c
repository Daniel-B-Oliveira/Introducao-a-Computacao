#include <stdlib.h>
#include <stdio.h>

int main() {
    int i, j , n, f;
    float s=0;

    scanf("%d", &n);

    for(i=1;i <= n ; i++)
    {
        f = 1;
        for (j = 2; j <= i; j++)
            f *= j;
        

        if (i % 2 == 0)
            f = -f;
        
        s += 1.0/f;
    }
    printf("Soma %.3f", s);


    return 0;
}