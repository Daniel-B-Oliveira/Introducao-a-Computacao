#include <stdio.h>
#include <stdlib.h>

int main()
{
    // exercicio 1
    /*
    int i, n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    for(i=1; i <= 10; i++) printf("%5d * %2d = %5d\n",n,i,n*i);

    */

    // exercicio 2
    /*
    int x,y,i;

    printf("Digite um limite inferior: ");
    scanf("%d", &x);

    printf("Digite o limite superior: ");
    scanf("%d", &y);

    for(i = x; i <= y; i++) if(i%3==0) printf("%d - ", i);
    */

    // exercicio 3
    /*
    float nota, soma=0;
    int i, n = 5;

    for (i = 1; i <= 5; i++)
    {
        printf("Digite a %da nota: ", i);
        scanf("%f", &nota);
        soma += nota;
    }
    printf("\nMedia: %.2f", soma/n);
    */

    // exercicio 4
    /*
    int n, i;
    float armonico = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) armonico += (float) 1/i;

    printf("%.5f", armonico);
    */


    // exercicio 5
    /*
    float s, s0, v0, t, a;
    a = -9.8;    // gravidade da Terra

    printf("Digite a altura inicial: ");
    scanf("%f", &s0);

    printf("Digite a velocidade inicial: ");
    scanf("%f", &v0);
    if(v0 > 0) v0 = -v0;    // velocidade na queda é negativa

    float inter_t = 0.1;    // intervalo de tempo

//    for (t = 0; t <= 10; t += inter_t)
//    {
//        s = s0 + v0*t + a*t*t/2;
//        s0 = s;
//        printf("%.3f\n", s0);
//    }

    printf("\nPROXIMO\n");

    for (t = 0; s0 > 0; t += inter_t)
    {
        s = s0 + v0*t + a*t*t/2;
        s0 = s;
        if(s0 > 0) printf("%.3f\n", s0);
    }
    */
    //exercicio 6
    int n, i, j, p = 1;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &n);

    for(i = 1; i<=n; i++)
    {
        for (j = 1; j <= i; j++) printf("%d ", p++);
        printf("\n");
    }

    p = 1;

    printf("\nInvertido\n");

    for(i = 0; i<n; i++)
    {
        for (j = 0; j < n-i; j++)printf("%d ", p++);
        printf("\n");
    }

    printf("\nOutro invertido\n");
    p=p-1;  // estou pegando o ultimo valor de p no ultimo for e usando p - 1 como valor, pois ela sera o ultimo

        for(i = 0; i<n; i++)
    {
        for (j = 0; j < n-i; j++)printf("%d ", p--);
        printf("\n");
    }


    return 0;
}
