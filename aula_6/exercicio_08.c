#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int a,b,c,d,e,f;
    float den_p,num_p, den_n,num_n;         // denominador positivo/negativo e numerador positivo/negativo

    // no final a media positiva sera den_p dividido por num_p, a media negativa sera den_n dividido por num_n.

    den_p = num_p = den_n = num_n = 0;      // atribui 0 as variaves, pois nao sabemos o que pode estar no endereço delas, para depois realizar as operaçoes.

    printf("Digite 5 valores: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    // variavel a
    if (a >= 0)         // se a for positiva ou 0 ela e adicionada no denominador positivo e é adiciona +1 no numerador positivo
    {
        den_p += a;
        num_p += 1;
    }
    else                // se a for negativa ela e adicionada no denominador negativo e é adiciono +1 no numedor negativo
    {
        den_n += a;
        num_n += 1;
    }

    // variavel b
    if (b >= 0)
    {
        den_p += b;
        num_p += 1;
    }
    else
    {
        den_n += b;
        num_n += 1;
    }

    // variavel c
    if (c >= 0)
    {
        den_p += c;
        num_p += 1;
    }
    else
    {
        den_n += c;
        num_n += 1;
    }

    // variavel d
    if (d >= 0)
    {
        den_p += d;
        num_p += 1;
    }
    else
    {
        den_n += d;
        num_n += 1;
    }

    // variavel e
    if (e >= 0)
    {
        den_p += e;
        num_p += 1;
    }
    else
    {
        den_n += e;
        num_n += 1;
    }


    // para evitar divisao por 0, é realizada as seguintes verificaçoes


    if (num_p > 0) printf("A media dos valores positivos e: %.3f\n", (float) den_p/num_p);
    if (num_n > 0) printf("A media dos valores negativos e: %.3f", (float) den_n/num_n);
    
    /*
        isso tambem faz com que apenas mostre a mensagem se aquela media existir,
        por exemplo: se num_p == 0, logo, nao existe nenhum valor positivo,
        entao a media de valores positivos nao existe
    */

    return 0;
}