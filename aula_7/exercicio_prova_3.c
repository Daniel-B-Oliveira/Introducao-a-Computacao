#include<stdlib.h>
#include<stdio.h>

int main() {
    /*
        Exercicio 3

        Implemente um programa que recebe os valores da altura de uma pessoa em pés ( ‘ )e 
        polegadas ( ‘ ‘ ), calcula e mostra o equivalente em metros (com precisão de duas casas 
        decimais). Sabendo-se que 1 pé (ft) equivale a 30,48cm e 1 pol (in) equivale a 2,54cm. 
    */

   int ft, in;
   float altura_m;

   printf("Entre com a altura em pes polegadas");

   printf("\nPes (ft): ");
   scanf("%d", &ft);

   printf("Polegadas (in): ");
   scanf("%d", &in);

   altura_m = (ft*30.48 + in*2.54)/100;

   printf("\nA altura de %d'%d\" e equivalente a %.2f metros.", ft, in, altura_m);

   return 0;
}