#include <stdlib.h>
#include <stdio.h>


// Exercicio 2
int main() {
    int i, f=1 ,n;

    scanf("%d", &n);

    for(i=1; i <= n; i++)
        f*= i;
    
    printf("%d", f);
    
    return 0;
}

