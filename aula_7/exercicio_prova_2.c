#include<stdlib.h>
#include<stdio.h>

int main() {
    /*
        Exercicio 2

        Implemente um programa que recebe do teclado um caractere, verifica e imprime se ele 
        corresponde a uma letra maiúscula ou minúscula. Caso o caractere digitado não seja uma 
        letra, o programa imprime uma mensagem dizendo que ‘o caractere digitado não é uma 
        letra’
    */

    char caractere;

    printf("Digite uma letra: ");
    scanf("%c", &caractere);

    if (caractere >= 'a' && caractere<= 'z')
        printf("\n%c e uma letra minuscula.", caractere);
    else if (caractere >= 'A' && caractere <= 'Z')
        printf("\n%c e uma letra maiuscula.", caractere);
    else
        printf("\n%c nao e uma letra.", caractere);

    return 0;
}