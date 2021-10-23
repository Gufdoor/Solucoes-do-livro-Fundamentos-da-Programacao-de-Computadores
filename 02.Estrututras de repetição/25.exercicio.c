/*=============================================================================================================================================================
    Exercício 25 - Capítulo 05
    
    Uma agência bancária possui vários clientes que podem fazer investimentos com rendimentos mensais,
    conforme a tabela a seguir:

        TIPO        DESCRIÇÃO               RENDIMENTO MENSAL
        1           Poupança                1,5%
        2           Poupança plus           2%
        3           Fundos de renda fixa    4%

    Faça um programa que leia o código do cliente, o tipo do investimento e o valor investido, e que calcule
    e mostre o rendimento mensal de acordo com o tipo do investimento. No final, o programa deverá mostrar
    o total investido e o total de juros pagos.

    A leitura terminará quando o código do cliente digitado for menor ou igual a 0.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int tipo = 10;
    float codigo;
    float totalInves = 0, totalJur = 0;
    float investimento;
    float rendMensal;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    while (tipo != 0) {
        printf("\n 1 - Poupança");
        printf("\n 2 - Poupança plus");
        printf("\n 3 - Fundos de renda fixa");
        printf("\nInsira o número de uma das opções acima: ");
        scanf("%d", &tipo);

            //se tipo for 0
            if (tipo == 0) {
                break;
            }

            //validação do tipo
            while (tipo < 1 || tipo > 3) {
                printf("\nValor inválido. Tente novamente: ");
                scanf("%d", &tipo);
                printf("\n");
            }

        printf("\nInsira o código do cliente: ");
        scanf("%f", &codigo);

        printf("\nInsira o valor investido: ");
        scanf("%f", &investimento);

            //validação do investimento
            while (investimento <= 0) {
                printf("\nValor inválido. Tente novamente: ");
                scanf("%f", &investimento);
                printf("\n");
            }

        //categorização e cálculo de acordo com o tipo escolhido
        if (tipo == 1) {
            rendMensal = investimento * 0.015;
            totalInves += investimento;
            totalJur += rendMensal;

            printf("\nRendimento mensal: R$%.2f\n", rendMensal);
        }

        else if (tipo == 2) {
            rendMensal = investimento * 0.02;
            totalInves += investimento;
            totalJur += rendMensal;

            printf("\nRendimento mensal: R$%.2f\n", rendMensal);
        }

        else if (tipo == 3) {
            rendMensal = investimento * 0.04;
            totalInves += investimento;
            totalJur += rendMensal;

            printf("\nRendimento mensal: R$%.2f\n", rendMensal);
        }
    }

    //output de dados =========================================================================================================================================
    if (investimento != 0) {
        printf("\nResultados:\n");
        printf(" Total investido: R$%.2f\n", totalInves);
        printf(" Juros pagos: R$%.2f\n", totalJur);
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}