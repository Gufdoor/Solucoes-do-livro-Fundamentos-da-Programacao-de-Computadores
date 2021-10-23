/*=============================================================================================================================================================
    Exerc�cio 19 - Cap�tulo 05
    
    Fa�a um programa que receba o tipo da a��o, ou seja, uma letra a ser comercializada na bolsa de valores,
    o pre�o de compra e o pre�o de venda de cada a��o e que calcule e mostre:

        - o lucro de cada a��o comercializada;
        - a quantidade de a��es com lucro superior a R$ 1.000,00;
        - a quantidade de a��es com lucro inferior a R$ 200,00;
        - o lucro total da empresa.

    Finalize com o tipo de a��o ?F?.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <conio.h>      //biblioteca para manipula��o de recursos na tela


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int controle = 1;                               //identificador de ciclos
    char acao;                                      //vari�vel intermediadora que receber� a letra de uma a��o
    float vCompra = 0, vVenda = 0;                  //vari�veis intermediadoras que receber�o os respectivos valores
    float lucroAcao;                                //vari�vel que receber� o lucro de cada acao comercializada
    float lucroMil = 0;                             //vari�vel que receber� a quantidade de a��es com lucro maior que 1000
    float lucroDuz = 0;                             //vari�vel que receber� a quantidade de a��es com lucro menor que 200
    float lucroTotal = 0;                           //vari�vel que receber� o lucro total da empresa

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    while (acao != 'F' || acao != 'f') {            //defini��o de condi��o para limitar o la�o de repeti��o
        printf("\n\nInsira a letra da a��o %d ou digite F para encerrar: ", controle);   //receber a letra da a��o
        scanf(" %c", &acao);

            //quando F for inserido
            if (acao == 'F' || acao == 'f') {
                if (vCompra == 0 && vVenda == 0) {
                    printf("\nVoc� n�o inseriu nenhum valor anteriormente.\n\n\n");
                    return(0);
                }
                break;      //comando para encerrar a execu��o do la�o
            }

        printf("Insira o valor da compra da a��o %c: ", acao);   //receber o valor da compra
        scanf("%f", &vCompra);

            //valida��o do valor da compra
            while (vCompra <= 0) {
                printf("\nValor inserido inv�lido. Tente novamente: ");
                scanf("%f", &vCompra);
                printf("\n");
            }

        printf("Insira o valor da venda da a��o %c: ", acao);   //receber o valor da venda
        scanf("%f", &vVenda);
        printf("\n");

            //valida��o do valor da venda
            while (vVenda <= 0) {
                printf("\nValor inserido inv�lido. Tente novamente: ");
                scanf("%f", &vVenda);
                printf("\n");
            }

            //mostrar o lucro de cada a��o individual
            lucroAcao = vVenda - vCompra;       //c�lculo do lucro por acao

            if (vVenda < vCompra) {
                printf("\nVoc� teve preju�zo na venda da a��o %c e foi de R$%.2f.", acao, lucroAcao);
                printf("\n\nPressione ENTER para continuar.\n");
                getch();    //comando para pausar a execu��o do programa
            }
            else if (vVenda == vCompra) {
                printf("\nVoc� n�o teve nem lucro nem preju�zo na venda da a��o %c.", acao);
                printf("\n\nPressione ENTER para continuar.\n");
                getch();    //comando para pausar a execu��o do programa
            }
            else {
                printf("\nO lucro da a��o %c foi de R$%.2f.", acao, lucroAcao);
                printf("\n\nPressione ENTER para continuar.\n");
                getch();    //comando para pausar a execu��o do programa
            }

            //a��es com lucro acima de 1000 ou menor que 200
            if (lucroAcao > 1000) 
                lucroMil++;
            
            else if (lucroAcao < 200) 
                lucroDuz++;

            //lucro total
            lucroTotal += lucroAcao;
    }

    //output de dados =========================================================================================================================================
    printf("\nResultados:\n");
    printf(" Quantidade de a��es com lucro superior a R$1.000,00: %.f\n", lucroMil);
    printf(" Quantidade de a��es com lucro inferior a R$200,00: %.f\n", lucroDuz);
    printf(" Lucro total da empresa: R$%.2f", lucroTotal);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}