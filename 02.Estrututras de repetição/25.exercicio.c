/*=============================================================================================================================================================
    Exerc�cio 25 - Cap�tulo 05
    
    Uma ag�ncia banc�ria possui v�rios clientes que podem fazer investimentos com rendimentos mensais,
    conforme a tabela a seguir:

        TIPO        DESCRI��O               RENDIMENTO MENSAL
        1           Poupan�a                1,5%
        2           Poupan�a plus           2%
        3           Fundos de renda fixa    4%

    Fa�a um programa que leia o c�digo do cliente, o tipo do investimento e o valor investido, e que calcule
    e mostre o rendimento mensal de acordo com o tipo do investimento. No final, o programa dever� mostrar
    o total investido e o total de juros pagos.

    A leitura terminar� quando o c�digo do cliente digitado for menor ou igual a 0.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int tipo = 10;
    float codigo;
    float totalInves = 0, totalJur = 0;
    float investimento;
    float rendMensal;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    while (tipo != 0) {
        printf("\n 1 - Poupan�a");
        printf("\n 2 - Poupan�a plus");
        printf("\n 3 - Fundos de renda fixa");
        printf("\nInsira o n�mero de uma das op��es acima: ");
        scanf("%d", &tipo);

            //se tipo for 0
            if (tipo == 0) {
                break;
            }

            //valida��o do tipo
            while (tipo < 1 || tipo > 3) {
                printf("\nValor inv�lido. Tente novamente: ");
                scanf("%d", &tipo);
                printf("\n");
            }

        printf("\nInsira o c�digo do cliente: ");
        scanf("%f", &codigo);

        printf("\nInsira o valor investido: ");
        scanf("%f", &investimento);

            //valida��o do investimento
            while (investimento <= 0) {
                printf("\nValor inv�lido. Tente novamente: ");
                scanf("%f", &investimento);
                printf("\n");
            }

        //categoriza��o e c�lculo de acordo com o tipo escolhido
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