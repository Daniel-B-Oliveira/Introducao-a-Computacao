#include<stdlib.h>
#include<stdio.h>

int main() {
    // exercicio 2

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
    
    return 0;
}