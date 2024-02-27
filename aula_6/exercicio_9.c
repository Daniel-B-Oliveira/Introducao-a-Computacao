#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int a,b,c,d,e,f;
    float den_p,num_p, den_n,num_n;
    char tipo_media;     

    den_p = num_p = den_n = num_n = 0;

    printf("Digite 5 valores: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    printf("Digite se quer a media dos valores positivos ou dos negativos (p/n): ");
    scanf(" %c",&tipo_media);

    // variavel a
    if (a >= 0)
    {
        den_p += a;
        num_p += 1;
    }
    else
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

    switch(tipo_media)
    {
        case('p'):
        case('P'):
        {
            if (num_p > 0) printf("A media dos valores positivos e: %.3f\n", (float) den_p/num_p);
            else printf("Nao existe valores positivos");
        } break;

        case('n'):
        case('N'):{
            if (num_n > 0) printf("A media dos valores negativos e: %.3f", (float) den_n/num_n);
            else printf("Nao existe valores negativos");
        } break;

        default: printf("A medias dos valores e: %.3f", (den_n+den_p)/5.0); break;
    }
    return 0;
}