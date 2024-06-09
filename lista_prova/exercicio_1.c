#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {

    float x, y, distancia;
    float menor_x, menor_y, menor_distancia;
    char primeiro = 's', continuar = 's';

    while(continuar == 's'){
        printf("\nDigite uma cordena x e y separada por espaco: ");
        scanf("%f %f", &x, &y);
        distancia = sqrt(x*x + y*y);

        if (primeiro == 's' || distancia < menor_distancia)
        {
            primeiro = 'n';
            menor_distancia = distancia;
            menor_x = x;
            menor_y = y;
        }

        printf("\nDeseja continuar? (s/n)");
        scanf(" %c", &continuar);

    }

    printf("\nO ponto mais proximo da origem foi: (%.2f,%.2f)\nCom %.3f de distancia", menor_x, menor_y, menor_distancia);




    return 0;
}