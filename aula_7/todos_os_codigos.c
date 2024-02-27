#include <stdio.h>
#include <stdlib.h>

int main()
{
// exercicio 1
//    float peso_a, peso_b;
//
//    printf("Quantidade de banas [kg]: ");
//    scanf("%f",&peso_b);
//    printf("\nValor banana: %.3f kg x R$ 6,97 = R$%.2f", peso_b, peso_b*6.97);
//
//    printf("\nQuantidade de maças [kg]: ");
//    scanf("%f",&peso_a);
//    printf("\nValor maças: %.3f kg x R$ 10.99 = R$%.2f", peso_a, peso_a*10.99);
//
//    printf("\nValor total: R$ %.2f", peso_a*10.99 + peso_b*6.97);
//
//
//

// exercicio 2

//    char caractere;
//
//    printf("Digite uma letra: ");
//    scanf("%c", &caractere);
//
//    if (caractere >= 'a' && caractere<= 'z')
//        printf("\n%c e uma letra minuscula.", caractere);
//    else if (caractere >= 'A' && caractere <= 'Z')
//        printf("\n%c e uma letra maiuscula.", caractere);
//    else
//        printf("\n%c nao e uma letra.", caractere);

// exercicio 3

//    int ft, in;
//    float altura_m;
//
//    printf("Entre com a altura em pes polegadas");
//
//    printf("\nPes (ft): ");
//    scanf("%d", &ft);
//
//    printf("Polegadas (in): ");
//    scanf("%d", &in);
//
//    altura_m = (ft*30.48 + in*2.54)/100;
//
//    printf("\nA altura de %d'%d\" e equivalente a %.2f metros.", ft, in, altura_m);

// exercicio probabilidade condicional

    float prob_xey, prob_xeyc, prob_xcey, prob_xceyc;
    float verificar;

    printf("Digite p(x e y): ");
    scanf("%f", &prob_xey);

    printf("Digite p(x e -y): ");
    scanf("%f", &prob_xeyc);

    printf("Digite p(-x e y): ");
    scanf("%f", &prob_xcey);

    printf("Digite p(xc e yc): ");
    scanf("%f", &prob_xceyc);

    verificar = prob_xey + prob_xeyc + prob_xcey + prob_xceyc;

    if (verificar >= 0.99 && verificar <= 1.01)
    {
        float x_dado_y, xc_dado_y, yc_dado_x;

        x_dado_y = prob_xey / (prob_xcey + prob_xey);
        xc_dado_y = prob_xcey / (prob_xey + prob_xcey);
        yc_dado_x = prob_xeyc / (prob_xey + prob_xeyc);

        printf("\nP(+x|+y) = %.2f", x_dado_y);
        printf("\nP(-x|+y) = %.2f", xc_dado_y);
        printf("\nP(-y|+x) = %.2f", yc_dado_x);
    }
    else
    {
        printf("Erro, soma das probabilidades != 1, Soma atual: %.2f", verificar);
    }

    return 0;
}
