#include <stdlib.h>
#include <stdio.h>

// Exercicio 5

int main() {
    int n, i, j, k;

    scanf("%d", &n);

    for(i=1; i <= n; i++)
    {
        printf("(%3d): ", i);
        for(j=i; j > 1; j--)
        {
            for(k=2; k < j; k++)
                if(j % k == 0)
                    break;
            if (j == k)
                printf("%d ", j);
        }
        printf("1\n");
    }
    return 0;
}