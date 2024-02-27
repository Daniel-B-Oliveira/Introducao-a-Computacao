#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    char caracter;

    printf("Digite uma letra: ");
    scanf("%c",&caracter);

    if ((caracter>=65 && caracter >=90) || (caracter>=97 && caracter<=122))     // verifica na tabela ASCii se o codigo esta entre a-z ou entre A-Z.
    {
        switch(caracter)
        {
            // caso a letra seje uma vogal ele ira entrar nessa linha de comando ate o case 'U', onde ocorrera o printf.
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U': printf("a letra %c e uma vogal.", caracter); break;
            default: printf("a letra %c e uma consoante.", caracter); break;
        }
    }
    else printf("o caracter %c nao e uma letra.", caracter);

    return 0;
}