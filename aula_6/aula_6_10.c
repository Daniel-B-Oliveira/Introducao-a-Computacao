#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float temp_a, temp_b, temp_c;
    float primeiro, segundo, terceiro;
    char tres_empatados;

    printf("Digite o tempo em segundos dos tres primeiros colocados: ");
    scanf("%f %f %f", &temp_a, &temp_b, &temp_c);

    if (temp_a > 0 && temp_b > 0 && temp_c > 0)                                         // verifica se todos os valores sao positivos
    {
        if (temp_a == temp_b && temp_a == temp_c)                                       // verifica empate entre os 3 atletas
        {
            tres_empatados = 's';                                                       // tres pessoas empataram
            printf("Os tres atletas chegaram ao mesmo tempo");
        }
        else if (temp_a == temp_b || temp_a == temp_c || temp_b == temp_c)              // verifica empate entre 2 atletas
        {        
            if (temp_a == temp_b)                                                       // caso o empate ocorra entre atleta_a e atleta_b
            {
                if (temp_a < temp_c)                                                    // verifica se os empatados estao no primeiro e segundo lugar ou segundo e terceiro lugar
                {
                    printf("O atleta_a e o atleta_b empataram no primeiro lugar");
                    primeiro = segundo = temp_a;
                    terceiro == temp_c;
                }
                else
                {
                    printf("O atleta_a e o atleba_b empataram no segundo lugar");
                    primeiro = temp_c;
                    segundo = terceiro = temp_a;
                }
            }
            else if(temp_a == temp_c)                                                   // caso e empate ocorra entre o atleta_a e o atleta_c 
            {
                if (temp_a < temp_b)                                                    // verifica se os empatados estao no primeiro e segundo lugar ou segundo e terceiro lugar
                {
                    printf("O atleta_a e o atleta_c empataram no primeiro lugar");
                    primeiro = segundo = temp_a;
                    terceiro = temp_b;
                }
                else
                {
                    printf("O atleta_a e o atleta_c empataram no segundo lugar");
                    primeiro = temp_b;
                    segundo = terceiro = temp_a;
                }
            }
            else                                                                        // caso o empate ocorra entre o atleta_b e o atleta_c
            {
                if (temp_b < temp_a)                                                    // verifica se os empatados estao no primeiro e segundo lugar ou segundo e terceiro lugar
                {
                    printf("O atleta_b e o atleta_c empataram no primeiro lugar");
                    primeiro = segundo = temp_b;
                    terceiro = temp_a;
                }
                else
                {
                    printf("O atleta_b e o atleta_c empataram no segundo lugar");
                    primeiro = temp_a;
                    segundo = terceiro = temp_b;
                }
            }
        }
        else                                                                            // caso nao ocorra empate
        {  
            /*
                Apartir daqui, como nao ha mais igualdades, basta verificar quem é o primeiro,
                apos isso, é preciso verificar quem é o segundo, e,
                por consequencia, resultara em quem é o terceiro.
            */

            if (temp_a < temp_b && temp_a < temp_c)
            {
                primeiro = temp_a;
                if (temp_b < temp_c)
                {
                    printf("1-atleta_a\n2-atleta_b\n3-atleta_c");
                    segundo = temp_b;
                    terceiro = temp_c;
                }
                else
                {
                    printf("1-atleta_a\n2-atleta_c\n3-atleta_b");
                    segundo = temp_c;
                    terceiro = temp_b;
                }
            }
            else if (temp_b < temp_a && temp_b < temp_c)
            {
                primeiro = temp_b;
                if (temp_a < temp_c)
                {
                    printf("1-atleta_b\n2-atleta_a\n3-atleta_c");
                    segundo = temp_a;
                    terceiro = temp_c;
                }
                else
                {
                    printf("1-atleta_b\n2-atleta_c\n3-atleta_a");
                    segundo = temp_c;
                    terceiro = temp_a;
                }
            }
            else
            {
                terceiro = temp_c;
                if (temp_a < temp_b)
                {
                    printf("1-atleta_c\n2-atleta_a\n3-atleta_b");
                    segundo = temp_a;
                    terceiro = temp_b;
                }
                else
                {
                    printf("1-atleta_c\n2-atleta_b\n3-atleta_a");
                    segundo = temp_b;
                    terceiro = temp_a;
                }
            }
        }
        switch(tres_empatados)
        {
            case('s'): printf("\nNao ha diferenca entre os colocados em primeiro, em segundo e em terceiro"); break;
            default:{
                printf("\nA diferenca entreo o mais rapido e o segundo colocado e de %.2f segundo(s)", segundo - primeiro);
                printf("\nA diferenca entre o mais rapido e o terceiro colocado e de %.2f segundo(s)", terceiro - primeiro);
            } break;
        }
    }
    else printf("Erro, valor <= 0");

    

    return 0;
}