#include<stdlib.h>
#include<stdio.h>

int main() {
    /*
        Exercício com Probabilidade condicional

        Implemente um programa que

            • recebe do teclado as probabilidades dos eventos X
            e Y ocorrerem, ou não - como na tabela de eventos
            de exemplo.
            
            • Confirma se a somatória das probabilidades é
            aproximadamente 1 (lembrem-se que não
            comparamos igualdade de float)
            
            • por fim, calcula e mostra na tela as seguintes
            probabilidades condicionais:
                • P(+x | +y) ?
                • P(-x | +y) ?
                • P(-y | +x) ?
    */


    float prob_xey, prob_xeyc, prob_xcey, prob_xceyc;   // prob_aeb é a probabilidade de (conjunto A e conjunto B)
    float verificador;                                  // ira receber a soma de todas as probabilidades

    printf("Digite p(x e y): ");
    scanf("%f", &prob_xey);

    printf("Digite p(x e -y): ");
    scanf("%f", &prob_xeyc);

    printf("Digite p(-x e y): ");
    scanf("%f", &prob_xcey);

    printf("Digite p(xc e yc): ");
    scanf("%f", &prob_xceyc);

    verificador = prob_xey + prob_xeyc + prob_xcey + prob_xceyc;

    if (verificador >= 0.99 && verificador <= 1.01)     // verifica se a soma é 1
    {
        float x_dado_y, xc_dado_y, yc_dado_x;           // a_dado_b é p(A|B) ac é A complementar, logo ac_dado_b é p(A complementar|B)

        x_dado_y = prob_xey / (prob_xcey + prob_xey);
        xc_dado_y = prob_xcey / (prob_xey + prob_xcey);
        yc_dado_x = prob_xeyc / (prob_xey + prob_xeyc);

        printf("\nP(+x|+y) = %.2f", x_dado_y);
        printf("\nP(-x|+y) = %.2f", xc_dado_y);
        printf("\nP(-y|+x) = %.2f", yc_dado_x);
    }
    else
    {
        printf("Erro, soma das probabilidades != 1, Soma atual: %.2f", verificador);
    }

    return 0;
}