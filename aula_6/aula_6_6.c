#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float salario, imposto;

    printf("Digite o seu salario: ");
    scanf("%f",&salario);

    if (salario >= 0)
    {
        if (salario <= 3000) printf("Imposto de renda: R$0");
        else
        {
            if (salario <= 5000) printf("Imposto de renda: R$%.2f", (salario - 3000)*0.1);

            //imposto == (salario - 5000)*0.15 + 200, pois (5000-3000)*0.1 sempre sera 200
            else printf("Imposto de renda: R$%.2f", (salario-5000)*0.15 + 200);

        }
    }
    else printf("Valor invalido.");

    return 0;
}