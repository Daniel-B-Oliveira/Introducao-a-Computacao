#include <stdlib.h>
#include <stdio.h>


// Exercicio 4
int main() {
    int n, i, j;

    scanf("%d", &n);

    for(i = 1; i <= 2*n - 1; i++)
    {
        if(i <= n)
        {
            for(j = 1; j <= i; j++)
                printf("*");
        }
        else
        {
            for(j=2*n-i; j >= 1; j--)
                printf("*");
        }
        printf("\n");

    }

    return 0;
}