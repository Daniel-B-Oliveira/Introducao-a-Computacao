#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50], cpf[11], endereco[100];
    int idade;
}paciente;

int main1()
//int main()
{
    paciente pacientes[30];
    int i, id[30], n=0;
    char pergunta;

    for(i=0; i<30; i++)
    {
        printf("Nome: ");
        gets(pacientes[i].nome); fflush(stdin);
        printf("cpf: ");
        gets(pacientes[i].cpf); fflush(stdin);
        printf("Endereco: ");
        gets(pacientes[i].endereco); fflush(stdin);

        printf("Idade: ");
        scanf("%d", &pacientes[i].idade); fflush(stdin);
        if(pacientes[i].idade <= 18)
        {
            id[n] = i;
            n++;
        }

        printf("Deseja continuar? ");
        scanf("%c", &pergunta); fflush(stdin);
        if(pergunta == 'n') break;

    }

    printf("Pacientes menores de 18:");
    for(i=0; i<n; i++)
        printf("\n%s",pacientes[id[i]].nome);

}
