#include <stdlib.h>
#include <stdio.h>


// Exercicio 3
int main() {
    int i, j , n, f=1;
    // criação de 4 variaveis inteiras,
    /*
        n : conta o limite de i
        exemplo n = 5, o ira de 1 até 5
        
        i : conta a parte da soma que o for esta
        exemplo 1/4! , o i é 4
                1/99!, o i é 99
        
        j : contador do número fatorial
        exemplo
            quando i for 7 o j será usado para calcular
            o fatorial de 7
            então j ira de 1 até 7
        
        f : local onde será guardado o fatorial
        retomando o exemplo anterior
            quando i for 7 o j será usado para calcular
            o fatorial de 7
            então j ira de 1 até 7
            quadno j for 1
                f = f*1
            quando j for 2
                f = f*1*2
                .
                .
                .
            quando f for 7
                f = f*1*2*...*7
        
    */
    float s=0;

    // s irá guardar os valores de 1/f para cada repetição do i no for
    /*
        exemplo quand i = 1
        k vai 1 até 1
        então f será 1!

        s = s + 1/f (pois i =1 é um valor impar, então a operação é soma)

        quadno i = 2
        k vai de 1 até 2
        então f será 2! = 1*2

        s = s - 1/f (pois i = 2 é um valor par, então a operação é subtração)

        quando i = 11
        k vai de 1 até 11
        então f será 11! = 1*2*3*...*11

        s = s + 1/f (pois i = 11 é um valor impar, então a operação é soma)

        .
        .
        .

        quando i = n
        k vai de i até n
        então f será n! = 1*2*3*...*n

        s = s (+-) 1/n! (se n for par, será s - 1/n!, se impar, s + 1/n!) 
    */

    scanf("%d", &n);

    for(i=1;i <= n ; i++) // <- ciclo de cada membro da soma S = 1/1! - 1/2! + 1/3! - ... +- 1/n!
    {
        f = 1;  // recomeã o valor de f, respota ao final ***
        for (j = 2; j <= i; j++) // cria o fatorial
            f *= j;     // <- criação do fatorial
        

        if (i % 2 == 0) // <- se o i for par, tranforma f em negarivo para a soma virar s = s - 1/f
            f = -f;
        
        s += 1.0/f; // <- soma da série

        // **** se, por exemplo, i for 8, f vale agora 8!, 
        //então para que possamos calcular no próximo
        // passo 9!, precisamos reiniciar o valor de f, por isso f = 1.
    }
    printf("Soma %.3f", s);


    return 0;
}