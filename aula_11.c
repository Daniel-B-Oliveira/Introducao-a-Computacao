#include<stdlib.h>
#include<stdio.h>

int main() {

    int c1, c2, c3, cn, cb, voto, nvotos;
    c1 = c2 = c3 = cn = cb = nvotos = 0;

    int senha = 123456, entrada=0;

    do{
        printf("\nCandidatos: ");
        printf("\n(1)Candidato Jair Rodruiges\n(2)Candidato Carlos Luz\n(3)Candidato Neves Rocha\n(4)Nulo\n(5)Branco\n");
        scanf("%d", &voto);
        if (voto < 0 || voto > 5) {
                printf("Opcao invalida");
                continue;
        }
        nvotos++;
        switch(voto)
        {
            case 1: c1++; break;
            case 2: c2++; break;
            case 3: c3++; break;
            case 4: cn++; break;
            case 5: cb++; break;
            default: nvotos--; break;     // caso seje 0
        }
        if (voto == 0)
        {
            do{
                printf("digite a senha (digite -1 para sair): ");
                scanf("%d", &entrada);
            }while(entrada != senha && entrada != -1);
            if (entrada == -1) continue;
            break;
        }
    }while(1);


    printf("\nNumero de votos: %d", nvotos);
    printf("\nCandidato Jair Rodrigues: %f", (float) c1/nvotos);
    printf("\nCandidato Carlos Luz: %f", (float) c2/nvotos);
    printf("\nCandidato Neves Rocha: %f", (float) c3/nvotos);
    printf("\n\nNulu: %f", (float) cn/nvotos);
    printf("\nBranco: %f", (float) cb/nvotos);

    int vencedor, i = 0;

    if (c1 / nvotos > 0.5) vencedor = 1;
    else if(c2 / nvotos > 0.5) vencedor = 2;
    else if(c1 / nvotos > 0.5) vencedor = 3;
    else vencedor = -1;

    switch(vencedor){
        case 1: printf("\nCandidato Jair Rodrigues foi o vencedor"); break;
        case 2: printf("\nCandidato Carlos Luz foi o vencedor"); break;
        case 3: printf("\nCandidato Neves Roch foi o vencedor"); break;
        default: printf("\nSera necessario uma nova votacao"); break;
    }

    return 0;
}
