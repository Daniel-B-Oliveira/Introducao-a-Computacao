#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float ang;
    char medida;
    const float pi = 3.14;

    printf("Digite o valor do angulo e sua unidade (r/g): ");
    scanf("%f %c", &ang, &medida);

    switch(medida) {
        case('g'):                          // medida do angulo em graus
        {
            if (ang >= 0 && ang <= 180)     // verifica se o angulo esta no nintervalo [0,180]
            {
                if (ang >= 89 && ang <= 91) printf("%.2f° e um angulo reto",ang);
                else {
                    if (ang <= 90) printf("%.2f° e um angulo agudo",ang);
                    else printf("%.2f° e um angulo obtuso",ang);
                }
            }
            else printf("%.2f° e um angulo invalido",ang);
        } break;

        case('r'):                          // medida do angulo em radianos
        {
            if (ang >= 0 && ang <= pi)      // verifica se o angulo esta no intervalo [0,pi=(3,14)]
            {
                if (ang >= pi/2 - 0.01 && ang <= pi/2 + 0.01) printf("%.3f rad e um angulo reto",ang);
                else {
                    if (ang <= pi/2) printf("%.3f rad e um angulo agudo", ang);
                    else printf("%.3f rad e um angulo obtuso",ang);
                }
            }
            else printf("%.3f rad e um angulo invalido",ang);
        } break;

        // medida invalida
        default: printf("Unidade de medida invalida");
    }

    return 0;
}