/*
    Desafio Jan Kentillion Plus One Pon ou JKPOP

    JKPOP é uma generalização do jogo pedra-papel-tesoura e
    do jogo pedra-papel-tesoura-lagarto-Spock (https://pt.wikipedia.org/wiki/Pedra-papel-tesoura-lagarto-Spock)

    Essa é a ideia, ainda falta tazer o projeto

*/

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <math.h>

int getN(){

    int n;
    scanf("%d",&n);

    if (n < 3 || n % 2 == 0) return 3;
    return n;
}

// int lenumber(int n){
//     int k;
//     k = floor(log10(n)) + 1;
//     return k;
// }


int main(){
    const int N = getN(); //,lenN = lenumber(N);

    int vet[N], p1, p2, t=-1;

    for(int i = 0; i < N; i++) {        
        vet[i] = i+1;
    }

    scanf("%d %d", &p1, &p2);

    vet[p1-1] = 0;
    vet[p2 - 1] = 0;
    
    if (p1 < 1 || p2 < 1 || p1 > N || p2 > N){
        printf("Valores errados");
        return 0;

    }
    
    else if(p1 == p2){
        printf("Empate");
        return 0;
    }
    else if (p1 > p2){
        t = p1;
        p1 = p2;
        p2 = t;
    }

    if (p2 - p1 <= (N-1)/2)
    {
        if (t == -1) printf("P1 ganhou");
        else printf("P2 ganhou");
    }
    else{
        if (t == -1) printf("P2 ganhou");
        else printf("P1 ganhou");
    }

}