/*=============================================================================================================================================================
    Exerc�cio 11 - Cap�tulo 05
    
    Fa�a um programa que receba o valor de um carro e mostre uma tabela com os seguintes dados: pre�o
    final, quantidade de parcelas e valor da parcela. Considere o seguinte:

        - o pre�o final para compra � vista tem desconto de 20%;
        - a quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54 e 60; e
        - os percentuais de acr�scimo encontram-se na tabela a seguir.

                    QUANTIDADE                      PERCENTUAL DE ACR�SCIMO
                    DE PARCELAS                     SOBRE O PRE�O FINAL
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



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int parcelas = 6;                   //vari�vel que receber� e limitar� o n�mero de parcelas
    float percentual = 1.03;            //vari�vel que receber� e limitar� o percentual de aumento do pre�o final
    float valorCarro;                   //vari�vel a receber o valor do carro inserido pelo usu�rio     
    float valorVista;                   //vari�vel que receber� o valor � vista do carro
    float valorFinal;                   //vari�vel que receber� o valor final do carro parcelado
    float valorParcelado;               //vari�vel que receber� o valor das parcelas

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira o valor de um carro: ");
    scanf("%f", &valorCarro);

        //valida��o do valor inserido
        while (valorCarro <= 0 ) {
            printf("\nO valor inserido � inv�lido. Insira um novo valor: ");
            scanf("%f", &valorCarro);
            printf("\n");
        }

    //processamento e output de dados =========================================================================================================================
    
        //c�lculo do valor � vista
        valorVista = valorCarro * 0.8;
        printf("\nPre�o final   Quantidade de parcelas   Valor da parcela");
        printf("\n  R$%.2f            � vista               R$%.2f", valorVista, valorVista);

        //c�lculo do valor final parcelado
        while (parcelas < 61) {         //defini��o de condi��o para limitar o la�o de repeti��o das parcelas

            valorFinal = valorCarro * percentual;           //c�lculo do valor final do carro parcelado
            valorParcelado = valorFinal / parcelas;         //c�lculo do valor das parcelas

            printf("\n  R$%.2f              %d                 R$%.2f", valorFinal, parcelas, valorParcelado);

            parcelas += 6;                                  
            percentual += 0.03;
        }

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}