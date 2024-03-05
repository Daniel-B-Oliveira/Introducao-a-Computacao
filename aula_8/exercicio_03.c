#include <stdlib.h>
#include <stdio.h>

int main() {
    /*
        Calcule a media de 2 notas. Garante que
        elas sejam validas, entre [0,100]
            (b) expanda para 'n' (entrada) notas
            (c) vai perguntando se há nova nota 
                p/ ser inserida. Calcule e mostre
                a media quando digitas 'X'.
    */

   float nota, soma_nota = 0;
   int i = 0;
   char pergunta = ' ';

    while (pergunta != 'x' && pergunta != 'X')
    {
        i += 1;
        printf("Digite a %da nota: ", i);
        scanf("%f", &nota);

        while (nota < 0 || nota > 100)
        {
            printf("Nota invalida\n");
            printf("Digite a %da nota: ", i);
            scanf("%f", &nota);
        }

        soma_nota += nota;

        printf("Digite (x) caso queira parar de enviar notas: ");
        scanf("%c%c", &pergunta, &pergunta);
        /*
            APARENTEMENTE o scanf nao consegue pegar o \n
            entao em vez de {scanf(" %c",...);}
            foi utlizado {scanf("%c,%c", ...);}
            para pegar o \n que vem apos o primeiro scanf
            (Scanf para a nota) e o proximo caracter,
            dessa forma é possivel que o \n funcione como
            uma entrada valida para informar ao computador
            que se deseja adicionar mais uma nota.
        */
    }

    printf("Medias das %d notas: %.2f", i, soma_nota/i);

    return 0;
}