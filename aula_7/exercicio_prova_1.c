#include <stdio.h>
#include <stdlib.h>

int main() {
    /*
        Exercicio 1
        
        Implemente um programa (função main() ) em linguagem C,
        que simula o caixa de um sacolão.
        Suponha que o sacolão tenha somente duas frutas:
        maças (R$ 10,99 / kg) e banana (R$ 6,97 / kg).
        O programa recebe (via teclado) os pesos em kg de cada produto,
        calcula e imprime o valor total da compra. 
    */

    float peso_a, peso_b;

    printf("Quantidade de banas [kg]: ");
    scanf("%f",&peso_b);
    printf("\nValor banana: %.3f kg x R$ 6,97 = R$%.2f", peso_b, peso_b*6.97);

    printf("\nQuantidade de macas [kg]: ");
    scanf("%f",&peso_a);
    printf("\nValor macas: %.3f kg x R$ 10.99 = R$%.2f", peso_a, peso_a*10.99);

    printf("\nValor total: R$ %.2f", peso_a*10.99 + peso_b*6.97);

    return 0;
}