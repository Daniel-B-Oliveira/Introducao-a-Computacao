#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    // exercicio 1
//    float salario = 1, soma_sal = 0;
//    int contador = 0;
//    while (contador < 30)
//    {
//        contador += 1;
//        printf("Digite o salario do %d jogador: ", contador);
//        scanf("%f", &salario);
//        soma_sal += salario;
//    }
//
//    printf("A soma dos salario dos jogadores e : R$%.2f", soma_sal);

// exercicio 2
//    int numero = 1, contador = 1;
//
//    printf("Digite um número divisivel por 17: ");
//    scanf("%d", &numero);
//
//    while (numero % 17 != 0)
//    {
//        printf("%d nao e divisivel por 17\n", numero);
//        printf("Digite um número divisivel por 17: ");
//        scanf("%d", &numero);
//        contador += 1;
//    }
//    printf("%d e divisivel por 17 , voce conseguiu em %d tentativas",numero, contador);

// exercicio 3
    float nota, soma_nota=0;
    int contador=0;
    char pergunta;


    while (pergunta != 'x')
    {
        contador += 1;
        printf("Digite a %da nota: ", contador);
        scanf("%f", &nota);

        while (nota < 0 || nota > 100)
        {
            printf("\nDigite uma nota correta\n");
            printf("Digite a %da nota: ", contador);
            scanf(" %f", &nota);
        }

        printf("Digite (x) caso nao queira colocar mais notas: ");
        scanf("%c%c", &pergunta, &pergunta);

        soma_nota += nota;

    }
    printf("A media das notas e : %.2f", soma_nota / contador);

// exercicio 4:
//    srand(time(NULL));
//    int numero = rand() % 11;
//    int resposta, vidas = 3;
//
//    printf("Digite um numero entre 0 e 10: ");
//    scanf("%d", &resposta);
//
//
//    while (resposta != numero && vidas != 1)
//    {
//        vidas -= 1;
//        printf("Resposta errada\n");
//        if (resposta > numero) printf("Tente um valor menor: ");
//        else printf("Tente um valor maior: ");
//        scanf("%d", &resposta);
//    }
//    if (vidas != 1 )
//        printf("\nParabens voce acertou, o numero era %d", numero);
//    else
//        printf("\nQue pena, voce errou, o numero era %d", numero);
//
//
//    return 0;
}

