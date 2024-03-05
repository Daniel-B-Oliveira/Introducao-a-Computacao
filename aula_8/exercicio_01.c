#include <stdlib.h>
#include <stdio.h>

int main()
{
    /*
        Realizar a soma do salario de 30 jogadores de futebol
    */

   float salario, soma = 0;
   int contador = 0, n_jogadores = 30;

    while(contador < n_jogadores)
    {
        contador += 1;
        printf("Digite o salario do %do jogador: ", contador);
        scanf("%f",&salario);
        while (salario <= 0)
        {
            printf("Valor invalido\n");
            printf("Digite o salario do %do jogador: ", contador);
            scanf("%f",&salario);
        }
        soma += salario;
    }

    printf("A soma do salarios dos %d jogadores e de R$%.2f", n_jogadores, soma);
    
    return 0;
}