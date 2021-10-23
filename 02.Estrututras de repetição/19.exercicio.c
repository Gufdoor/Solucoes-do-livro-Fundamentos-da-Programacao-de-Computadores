/*=============================================================================================================================================================
    Exercício 19 - Capítulo 05
    
    Faça um programa que receba o tipo da ação, ou seja, uma letra a ser comercializada na bolsa de valores,
    o preço de compra e o preço de venda de cada ação e que calcule e mostre:

        - o lucro de cada ação comercializada;
        - a quantidade de ações com lucro superior a R$ 1.000,00;
        - a quantidade de ações com lucro inferior a R$ 200,00;
        - o lucro total da empresa.

    Finalize com o tipo de ação ?F?.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <conio.h>      //biblioteca para manipulação de recursos na tela


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int controle = 1;                               //identificador de ciclos
    char acao;                                      //variável intermediadora que receberá a letra de uma ação
    float vCompra = 0, vVenda = 0;                  //variáveis intermediadoras que receberão os respectivos valores
    float lucroAcao;                                //variável que receberá o lucro de cada acao comercializada
    float lucroMil = 0;                             //variável que receberá a quantidade de ações com lucro maior que 1000
    float lucroDuz = 0;                             //variável que receberá a quantidade de ações com lucro menor que 200
    float lucroTotal = 0;                           //variável que receberá o lucro total da empresa

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    while (acao != 'F' || acao != 'f') {            //definição de condição para limitar o laço de repetição
        printf("\n\nInsira a letra da ação %d ou digite F para encerrar: ", controle);   //receber a letra da ação
        scanf(" %c", &acao);

            //quando F for inserido
            if (acao == 'F' || acao == 'f') {
                if (vCompra == 0 && vVenda == 0) {
                    printf("\nVocê não inseriu nenhum valor anteriormente.\n\n\n");
                    return(0);
                }
                break;      //comando para encerrar a execução do laço
            }

        printf("Insira o valor da compra da ação %c: ", acao);   //receber o valor da compra
        scanf("%f", &vCompra);

            //validação do valor da compra
            while (vCompra <= 0) {
                printf("\nValor inserido inválido. Tente novamente: ");
                scanf("%f", &vCompra);
                printf("\n");
            }

        printf("Insira o valor da venda da ação %c: ", acao);   //receber o valor da venda
        scanf("%f", &vVenda);
        printf("\n");

            //validação do valor da venda
            while (vVenda <= 0) {
                printf("\nValor inserido inválido. Tente novamente: ");
                scanf("%f", &vVenda);
                printf("\n");
            }

            //mostrar o lucro de cada ação individual
            lucroAcao = vVenda - vCompra;       //cálculo do lucro por acao

            if (vVenda < vCompra) {
                printf("\nVocê teve prejuízo na venda da ação %c e foi de R$%.2f.", acao, lucroAcao);
                printf("\n\nPressione ENTER para continuar.\n");
                getch();    //comando para pausar a execução do programa
            }
            else if (vVenda == vCompra) {
                printf("\nVocê não teve nem lucro nem prejuízo na venda da ação %c.", acao);
                printf("\n\nPressione ENTER para continuar.\n");
                getch();    //comando para pausar a execução do programa
            }
            else {
                printf("\nO lucro da ação %c foi de R$%.2f.", acao, lucroAcao);
                printf("\n\nPressione ENTER para continuar.\n");
                getch();    //comando para pausar a execução do programa
            }

            //ações com lucro acima de 1000 ou menor que 200
            if (lucroAcao > 1000) 
                lucroMil++;
            
            else if (lucroAcao < 200) 
                lucroDuz++;

            //lucro total
            lucroTotal += lucroAcao;
    }

    //output de dados =========================================================================================================================================
    printf("\nResultados:\n");
    printf(" Quantidade de ações com lucro superior a R$1.000,00: %.f\n", lucroMil);
    printf(" Quantidade de ações com lucro inferior a R$200,00: %.f\n", lucroDuz);
    printf(" Lucro total da empresa: R$%.2f", lucroTotal);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}