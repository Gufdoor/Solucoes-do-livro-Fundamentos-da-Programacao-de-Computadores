/*=============================================================================================================================================================
    Exerc�cio 23 - Cap�tulo 05
    
    Fa�a um programa que apresente o menu de op��es a seguir, que permita ao usu�rio escolher a op��o
    desejada, receba os dados necess�rios para executar a opera��o e mostre o resultado. Verifique a possibilidade
    de op��o inv�lida e n�o se preocupe com as restri��es como sal�rio inv�lido.

            Menu de op��es:
            1. Novo sal�rio
            2. F�rias
            3. D�cimo terceiro
            4. Sair
        Digite a op��o desejada.

    Na op��o 1: receber o sal�rio de um funcion�rio, calcular e mostrar o novo sal�rio usando as regras a seguir:
            SAL�RIOS                                    PERCENTAGEM DE AUMENTO
            At� R$ 210,00                               15%
            De R$ 210,00 a R$ 600,00 (inclusive)        10%
            Acima de R$ 600,00                          5%

    Na op��o 2: receber o sal�rio de um funcion�rio, calcular e mostrar o valor de suas f�rias. Sabe-se que as
    f�rias equivalem a seu sal�rio acrescido de um ter�o do sal�rio.

    Na op��o 3: receber o sal�rio de um funcion�rio e o n�mero de meses de trabalho na empresa, no m�ximo
    doze, calcular e mostrar o valor do d�cimo terceiro. Sabe-se que o d�cimo terceiro equivale a seu sal�rio
    multiplicado pelo n�mero de meses de trabalho dividido por 12.

    Na op��o 4: sair do programa.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int opcao = 0;                                  //vari�vel intermediadora que receber� o valor de uma op��o
    float salario;                                  //vari�vel que receber� o respectivo valor do usu�rio
    float ferias;
    float meses;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    while (opcao != 4 ) {                  //defini��o de condi��o para limitar o la�o de repeti��o
        printf("\n 1 - Novo sal�rio\n");
        printf(" 2 - F�rias\n");
        printf(" 3 - D�cimo terceiro\n");
        printf(" 4 - Sair\n");
        printf("Insira uma das op��es acima: ");
        scanf("%d", &opcao);

            //valida��o do c�digo
            while (opcao < 1 || opcao > 4) {
                printf("\nValor inv�lido. Tente novamente: ");
                scanf("%d", &opcao);
                printf("\n");
            }

            //condi��o para op��o 1
            if (opcao == 1) {
                printf("\nInsira um sal�rio: ");
                scanf("%f", &salario);

                    //valida��o do sal�rio
                    while (salario <= 0) {
                        printf("\nValor inv�lido. Tente novamente: ");
                        scanf("%f", &salario);
                        printf("\n");
                    }

                if (salario <= 120) {
                    salario *= 1.15;
                    printf("\nNovo sal�rio: R$%.2f\n", salario);
                }

                else if (salario > 120 && salario <= 600) {
                    salario *= 1.1;
                    printf("\nNovo sal�rio: R$%.2f\n", salario);
                }

                else if (salario > 600) {
                    salario *= 1.05;
                    printf("\nNovo sal�rio: R$%.2f\n", salario);
                }
            }

            //condi��o para op��o 2
            if (opcao == 2) {
                printf("\nInsira um sal�rio: ");
                scanf("%f", &salario);

                    //valida��o do sal�rio
                    while (salario <= 0) {
                        printf("\nValor inv�lido. Tente novamente: ");
                        scanf("%f", &salario);
                        printf("\n");
                    }

                ferias = salario / 3;
                ferias += salario;

                printf("\nF�rias = R$%.2f\n", ferias);
            }

            //condi��o para op��o 3
            if (opcao == 3) {
                printf("\nInsira um sal�rio: ");
                scanf("%f", &salario);

                    //valida��o do sal�rio
                    while (salario <= 0) {
                        printf("\nValor inv�lido. Tente novamente: ");
                        scanf("%f", &salario);
                        printf("\n");
                    }

                printf("\nInsira o n�mero de meses que trabalhou na empresa em um ano: ");
                scanf("%f", &meses);

                    //valida��o dos meses
                    while (meses <= 0 && meses > 12) {
                        printf("\nValor inv�lido. Tente novamente: ");
                        scanf("%f", &meses);
                        printf("\n");
                    }

                meses /= 12;
                salario *= meses;

                printf("\n13� = R$%.2f\n", salario);
            }
    }

    //output de dados =========================================================================================================================================
    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}