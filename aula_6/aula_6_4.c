#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int idade;

    printf("Entrada do bar.\nDigite sua idade: ");
    scanf("%d",&idade);

    if (idade < 18)
    {
        char acompanhado;           // cria a variavel apenas se a idade for menor que 18

        printf("Voce nao possui idade para entrar desacompanhado.\nVoce esta acompanhado (s/n)?");
        scanf(" %c",&acompanhado);

        if (acompanhado == 's')
        {
            int idade_acomp;        // cria a variavel apenas se existir um acompanhate

            printf("Digite a idade do acompanhante: ");
            scanf("%f",&idade_acomp);

            if (idade_acomp >= 18) printf("Voce pode entrar apenas com o acompanhente.");
            else printf("Ambos nao possuem idade para entrar, volte daqui %d ano(s).", 18-idade);
        }
        else printf("Voce nao pode entrar, volte daqui %f ano(s).", 18-idade);
    }
    else printf("Voce pode entrar.");

    return 0;
}