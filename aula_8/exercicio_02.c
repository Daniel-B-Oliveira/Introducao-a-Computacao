#include <stdlib.h>
#include <stdio.h>

int main() {
    /*
        Receba números e verifique se é divisível por 17,
        continua recebendo até o número ser divisível.
            - conte quantos números foram digitados.
    */
   int i_num, d_num = 17, i=1;

    printf("Digite um numero divisivel por %d: ", d_num);
    scanf("%d", &i_num);

    while (i_num % d_num != 0)
    {
        printf("%d nao e divisiel por %d", i_num, d_num);
        printf("\nDigite um numero divisivel por %d: ", d_num);
        scanf("%d", &i_num);
        i += 1;
    }
    printf(
        "%d e divisivel por %d (%d/%d=%d),\nvoce acertou em %d tentavias",
        i_num, d_num, i_num, d_num, i_num/d_num, i
    );
}