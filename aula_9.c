#include<stdlib.h>
#include<stdio.h>

int main(){
    // exercicio 1
/*
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
*/
    // exercicio 2
/*
    float doa = 0, soma_doa=0, meta=10000;
    int n = 1;
    do{
        printf("meta: R$%.2f / R$%.2f\n", soma_doa, meta);

        printf("%da doacao: ", n);
        scanf("%f", &doa);

        if (doa > 0)
        {
            n++;
            soma_doa += doa;
        }

        if (soma_doa >= 10000)
        {
            n--;
            break;
        }
    } while(1);

    printf("Fim das doacoes, obrigado aos %d doadores", n);
*/
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
