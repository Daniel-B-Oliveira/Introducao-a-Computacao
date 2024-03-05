#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(){
    /*
        Sortear um numero no intervalo [0,10]
        e pedir para que o usario tente acertar
        qual o valor do numero.
            - Caso o numero digitado pelo usuario
            seje diferente do sorteado, falar se
            o numero sorteado é maior ou menor;
            - Dar 3 tentativas ao usuario.
    */
    srand(time(NULL));
    int chances = 2, resp, numero = rand() % 11;

    printf("Digite um numero inteiro entre 0 e 10: ");
    scanf("%d", &resp);

    while (resp != numero && chances  >0)
    {
        chances -= 1;
        if (resp > numero) printf("%d nao esta certo, tente um numero menor: ", resp);
        else printf("%d nao esta certo, tente um numero maior: ", resp);
        scanf("%d", &resp);
    }

    if (resp != numero) printf("Que pena, voce nao acertou, o numero era %d.",numero);
    else printf("Parabens, voce acertou em %d tentativas, o numero era %d", 3-chances,numero);

    return 0;
}