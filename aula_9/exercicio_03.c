#include<stdlib.h>
#include<stdio.h>

int main() {
    // exercicio 3
    int n,c,l,x;
    n = c = l = 0;

    printf("Digite o numero de linhas: ");
    scanf("%d", &x);

    while(l < x)
    {
        l++;
        c = 0;
        while(c < l)
        {
            c++;
            n++;
            printf("%d ",n);
        }
        printf("\n");
    }


    return 0;
}