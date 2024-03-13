#include<stdlib.h>
#include<stdio.h>

int main(){
    // exercicio 1

    int x, n=0;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &x);

    printf("Usando while\n");
    while(n < 10)
    {
        n++;
        printf("%d x %d = %d\n", x, n, x*n);
    }

     n = 0;
     printf("Usando do while\n");
     do{
        n++;
        printf("%d x %d = %d\n", x, n, x*n);
     } while(n<10);

    return 0;
}
