#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int cafe, pao;

    printf("Digite a quantida de cafe: ");
    scanf("%d",&cafe);

    printf("Digite a quantidade de pao de queijo: ");
    scanf("%d",&pao);

    if (cafe >= 0 && pao >= 0)      // verifica se os valores sao positivos
    {
        printf("Total: R$%.2f", cafe*2+pao*0.5);
    }
    else printf("Valor(es) invalido(s).");

    return 0;
}