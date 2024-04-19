#include <stdlib.h>
#include <stdio.h>


// Exercicio 1
int main() {
    int n, i, j;

    scanf("%d", &n);

    

    for(i=1; i <= n; i++)
    {
        for(j=2; j < i; j++)
            if(i%j==0)
                break;
        if (i == j)
        printf("%d ", j);
    }
}