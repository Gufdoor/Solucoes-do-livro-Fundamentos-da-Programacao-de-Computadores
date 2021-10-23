/*=============================================================================================================================================================
    Exercício 23 - Capítulo 05
    
    Faça um programa que apresente o menu de opções a seguir, que permita ao usuário escolher a opção
    desejada, receba os dados necessários para executar a operação e mostre o resultado. Verifique a possibilidade
    de opção inválida e não se preocupe com as restrições como salário inválido.

            Menu de opções:
            1. Novo salário
            2. Férias
            3. Décimo terceiro
            4. Sair
        Digite a opção desejada.

    Na opção 1: receber o salário de um funcionário, calcular e mostrar o novo salário usando as regras a seguir:
            SALÁRIOS                                    PERCENTAGEM DE AUMENTO
            Até R$ 210,00                               15%
            De R$ 210,00 a R$ 600,00 (inclusive)        10%
            Acima de R$ 600,00                          5%

    Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor de suas férias. Sabe-se que as
    férias equivalem a seu salário acrescido de um terço do salário.

    Na opção 3: receber o salário de um funcionário e o número de meses de trabalho na empresa, no máximo
    doze, calcular e mostrar o valor do décimo terceiro. Sabe-se que o décimo terceiro equivale a seu salário
    multiplicado pelo número de meses de trabalho dividido por 12.

    Na opção 4: sair do programa.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int opcao = 0;                                  //variável intermediadora que receberá o valor de uma opção
    float salario;                                  //variável que receberá o respectivo valor do usuário
    float ferias;
    float meses;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    while (opcao != 4 ) {                  //definição de condição para limitar o laço de repetição
        printf("\n 1 - Novo salário\n");
        printf(" 2 - Férias\n");
        printf(" 3 - Décimo terceiro\n");
        printf(" 4 - Sair\n");
        printf("Insira uma das opções acima: ");
        scanf("%d", &opcao);

            //validação do código
            while (opcao < 1 || opcao > 4) {
                printf("\nValor inválido. Tente novamente: ");
                scanf("%d", &opcao);
                printf("\n");
            }

            //condição para opção 1
            if (opcao == 1) {
                printf("\nInsira um salário: ");
                scanf("%f", &salario);

                    //validação do salário
                    while (salario <= 0) {
                        printf("\nValor inválido. Tente novamente: ");
                        scanf("%f", &salario);
                        printf("\n");
                    }

                if (salario <= 120) {
                    salario *= 1.15;
                    printf("\nNovo salário: R$%.2f\n", salario);
                }

                else if (salario > 120 && salario <= 600) {
                    salario *= 1.1;
                    printf("\nNovo salário: R$%.2f\n", salario);
                }

                else if (salario > 600) {
                    salario *= 1.05;
                    printf("\nNovo salário: R$%.2f\n", salario);
                }
            }

            //condição para opção 2
            if (opcao == 2) {
                printf("\nInsira um salário: ");
                scanf("%f", &salario);

                    //validação do salário
                    while (salario <= 0) {
                        printf("\nValor inválido. Tente novamente: ");
                        scanf("%f", &salario);
                        printf("\n");
                    }

                ferias = salario / 3;
                ferias += salario;

                printf("\nFérias = R$%.2f\n", ferias);
            }

            //condição para opção 3
            if (opcao == 3) {
                printf("\nInsira um salário: ");
                scanf("%f", &salario);

                    //validação do salário
                    while (salario <= 0) {
                        printf("\nValor inválido. Tente novamente: ");
                        scanf("%f", &salario);
                        printf("\n");
                    }

                printf("\nInsira o número de meses que trabalhou na empresa em um ano: ");
                scanf("%f", &meses);

                    //validação dos meses
                    while (meses <= 0 && meses > 12) {
                        printf("\nValor inválido. Tente novamente: ");
                        scanf("%f", &meses);
                        printf("\n");
                    }

                meses /= 12;
                salario *= meses;

                printf("\n13º = R$%.2f\n", salario);
            }
    }

    //output de dados =========================================================================================================================================
    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}