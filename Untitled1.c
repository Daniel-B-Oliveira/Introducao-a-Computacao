#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int h, min, sec;
}horario;

typedef struct{
    int d, m, a;
}data;

typedef struct{
    horario horario_compromisso;
    data data_compromisso;
    char desc[200];
}compromisso;

int main()
{
    compromisso meus_eventos[10];
    int i, j;
    char novo = 's';
    for(i=0; i<10; i++)
    {
        //printf("Data d/m/a -> ");
        scanf("%d/%d/%d",
              &meus_eventos[i].data_compromisso.d,
              &meus_eventos[i].data_compromisso.m,
              &meus_eventos[i].data_compromisso.a);

        //printf("Horario h:min:sec -> ");
        scanf("%d:%d:%d",
              &meus_eventos[i].horario_compromisso.h,
              &meus_eventos[i].horario_compromisso.min,
              &meus_eventos[i].horario_compromisso.sec);

        //printf("Descricao compromisso: ");
        fflush(stdin);
        gets(meus_eventos[i].desc);

        //printf("Deseja adicionar um novo evento? ");
        fflush(stdin);
        scanf("%c", &novo);
        if(novo == 'n') break;
    }

    for(j=0; j<=i; j++)
    {
        printf("\nCompromisso %d\n", j+1);
        printf("Data: %d/%d/%d - horario: %d:%d:%d\n",
               meus_eventos[j].data_compromisso.d,
               meus_eventos[j].data_compromisso.m,
               meus_eventos[j].data_compromisso.a,
               meus_eventos[j].horario_compromisso.h,
               meus_eventos[j].horario_compromisso.min,
               meus_eventos[j].horario_compromisso.sec);
        printf("Descricao:%s\n", meus_eventos[j].desc);
    }

    return 0;
}
