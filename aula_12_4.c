#include <stdlib.h>
#include <stdio.h>

int main(){
    /*
    // Exercicio 1
    int i, j;
    int imax, jmax;

    printf("Digite um i maximo: ");
    scanf("%d", &imax);

    printf("Digite um j maximo: ");
    scanf("%d", &jmax);

    printf("i j");

    for(i=1; i<=imax; i++)
        for(j=1; j<=jmax; j++)
            printf("\n%d %d",i,j);
    */

    /*
    // Exercicio 2 a)
    int i, j, n, p=1;

    printf("Digite o numero de linahs: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
            printf("%3d", p++);
        printf("\n");
    }
    */

    /*
    //Exercicio 2 b)
    int i, j, n;

    printf("Ditite o numero de linhas: ");
    scanf("%d", &n);

    for(i=1; i <= n; i++)
    {
        for(j=1; j<=i; j++)
            printf("%3d", i);
        printf("\n");
    }
    */

    /*
    //Exercicio 2 c)
    int i, j, n;

    printf("Ditite o numero de linhas: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
            printf("%3d", j);
        printf("\n");
    }
    */

    /*
    //Exercicio 2 d)
    int i, j, k, n, p=1;

    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
            printf(" ");

        for(k=1; k<=i; k++)
            printf("%d ", p++);

        printf("\n");
    }
    */

    /*
    //Exercicio 3 a)
    int s, slim, d;

    printf("Digite o numero de semanas: ");
    scanf("%d", &slim);

    for(s=1; s<=slim; s++)
    {
        printf("Semana %d:\n", s);

        for(d=1; d<=7; d++)
            printf("Dia %d:\n", d);
    }
    */

    /*
    //Exercicio 3 b)
    int s, slim, d;

    printf("Digite o numero de semanas: ");
    scanf("%d", &slim);

    for(s=1; s<=slim; s++)
    {
        printf("Semana %d:\n", s);

        for(d=1; d<=7; d++)
        {
            printf("Dia %d:\n", d);

            if((s==1 && d==5) || (s==2 && d==6))
                break;
        }
    }
    */

    /*
    //Exercicio 4
    int nAluno, nNota, i, j;
    float nota, SomaAl, SomaTu=0;

    printf("Digite o numero de Alunos: ");
    scanf("%d", &nAluno);

    printf("Digite o numero de Notas: ");
    scanf("%d", &nNota);

    for(i=1; i<=nAluno; i++)
    {
        printf("Aluno %d:\n", i);

        SomaAl = 0;

        for(j=1; j<=nNota; j++)
        {
            nota = -1;
            while(nota<0 || nota>100)
            {
                printf("Digite a %da nota: ", j);
                scanf("%f", &nota);
            }
            SomaAl += nota;
        }
        printf("Media aluno %d: %.2f\n", i,SomaAl/nNota);
        SomaTu += SomaAl;
    }

    printf("Media da turma: %.2f\n", SomaTu/(nAluno*nNota));
    */

    /*
    //Exercicio 5
    int s, sini=1, slim, d;

    printf("Digite o numero de semanas: ");
    scanf("%d", &slim);

    for(s=1; s<=slim; s++)
    {
        printf("Semana %d:\n", s);

        for(d=sini; d<=7; d += 2)
            printf("Dia %d:\n", d);

        sini = d-7;
    }

    printf("Digite o numero de semanas");
    */

    //Exercicio 6
    int i, j;

    for (i=1; i<=10; i++)
    {
        for(j=1; j<=10; j++)
            printf("%3d", j*i);
        printf("\n");
    }
    return 0;
}


