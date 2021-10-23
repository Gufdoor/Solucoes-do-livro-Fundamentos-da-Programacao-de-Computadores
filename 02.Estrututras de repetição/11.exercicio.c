/*=============================================================================================================================================================
    Exercício 11 - Capítulo 05
    
    Faça um programa que receba o valor de um carro e mostre uma tabela com os seguintes dados: preço
    final, quantidade de parcelas e valor da parcela. Considere o seguinte:

        - o preço final para compra à vista tem desconto de 20%;
        - a quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54 e 60; e
        - os percentuais de acréscimo encontram-se na tabela a seguir.

                    QUANTIDADE                      PERCENTUAL DE ACRÉSCIMO
                    DE PARCELAS                     SOBRE O PREÇO FINAL
                        6                                   3%
                        12                                  6%
                        18                                  9%
                        24                                  12%
                        30                                  15%
                        36                                  18%
                        42                                  21%
                        48                                  24%
                        54                                  27%
                        60                                  30%
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int parcelas = 6;                   //variável que receberá e limitará o número de parcelas
    float percentual = 1.03;            //variável que receberá e limitará o percentual de aumento do preço final
    float valorCarro;                   //variável a receber o valor do carro inserido pelo usuário     
    float valorVista;                   //variável que receberá o valor à vista do carro
    float valorFinal;                   //variável que receberá o valor final do carro parcelado
    float valorParcelado;               //variável que receberá o valor das parcelas

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira o valor de um carro: ");
    scanf("%f", &valorCarro);

        //validação do valor inserido
        while (valorCarro <= 0 ) {
            printf("\nO valor inserido é inválido. Insira um novo valor: ");
            scanf("%f", &valorCarro);
            printf("\n");
        }

    //processamento e output de dados =========================================================================================================================
    
        //cálculo do valor à vista
        valorVista = valorCarro * 0.8;
        printf("\nPreço final   Quantidade de parcelas   Valor da parcela");
        printf("\n  R$%.2f            À vista               R$%.2f", valorVista, valorVista);

        //cálculo do valor final parcelado
        while (parcelas < 61) {         //definição de condição para limitar o laço de repetição das parcelas

            valorFinal = valorCarro * percentual;           //cálculo do valor final do carro parcelado
            valorParcelado = valorFinal / parcelas;         //cálculo do valor das parcelas

            printf("\n  R$%.2f              %d                 R$%.2f", valorFinal, parcelas, valorParcelado);

            parcelas += 6;                                  
            percentual += 0.03;
        }

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}