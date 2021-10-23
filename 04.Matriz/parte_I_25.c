/*=============================================================================================================================================================
    Exerc�cio 25 - Parte 01
    
    Crie um programa que:
        - receba o pre�o de dez produtos e armazene-os em um vetor;
        - receba a quantidade estocada de cada um desses produtos, em cinco armaz�ns diferentes, utilizando
          uma matriz 5 ! 10.
          
    O programa dever� calcular e mostrar:
        - a quantidade de produtos estocados em cada um dos armaz�ns;
        - a quantidade de cada um dos produtos estocados, em todos os armaz�ns juntos;
        - o pre�o do produto que possui maior estoque em um �nico armaz�m;
        - o menor estoque armazenado;
        - o custo de cada armaz�m.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <conio.h>      //biblioteca para manipula��o de recursos na tela



//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    float precoProdutos[10];
    float maiorEstoque = 0, preco;
    float custoArmazem[5];
    float precoFinalArmazem[5][10];
    int armazem[5][10];
    int quantidadeArmazem[5];
    int quantidadeProdutos[10];
    int indiceMaiorEstoque;
    int menorEstoque = 999;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    for (int i = 0 ; i <= 9 ; i++) {
        printf("Insira o pre�o do produto %i: ", i + 1);
        scanf("%f", &precoProdutos[i]);

            //valida��o do pre�o
            while (precoProdutos[i] < 0) {
                printf("Valor inv�lido. Insira o pre�o do produto %i: ", i + 1);
                scanf("%f", &precoProdutos[i]);
            }
    }

    for (int i = 0 ; i <= 4 ; i++) {
        printf("\nInsira a quantidade de cada produto no armazem %i:\n", i + 1);

        for (int j = 0 ; j <= 9 ; j++) {
            scanf("%i", &armazem[i][j]);

                //valida��o da quantidade
                while (armazem[i][j] < 0) {
                    printf("\nValor inv�lido. Insira a quantidade de cada produto no armazem %i:\n", i + 1);
                    scanf("%i", &armazem[i][j]);
                }
        }
    }

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 4 ; i++) {    //calcular a quantidade de produtos por armaz�m
        quantidadeArmazem[i] = 0;

        for (int j = 0 ; j <= 9 ; j++) 
            quantidadeArmazem[i] += armazem[i][j];
    }

    for (int j = 0 ; j <= 9 ; j++) {    //calcular a quantidade total de cada produto
        quantidadeProdutos[j] = 0;

        for (int i = 0 ; i <= 4 ; i++)
            quantidadeProdutos[j] += armazem[i][j];
    }

    for (int i = 0 ; i <= 4 ; i++) {    //encontrar a pre�o do produto com a maior quantidade em um armaz�m

        for (int j = 0 ; j <= 9 ; j++) {

            if (armazem[i][j] > maiorEstoque) {
                maiorEstoque = armazem[i][j];
                indiceMaiorEstoque = j;
            }
        }
    }

    preco = precoProdutos[indiceMaiorEstoque];

    for (int i = 0 ; i <= 4 ; i++) {    //encontrar o menor estoque

        for (int j = 0 ; j <= 9 ; j++) {

            if (armazem[i][j] < menorEstoque) 
                menorEstoque = armazem[i][j];
        }
    }

    for (int i = 0 ; i <= 4 ; i++) {    //calcular o custo de cada armaz�m
        custoArmazem[i] = 0;

        for (int j = 0 ; j <= 9 ; j++) {
            precoFinalArmazem[i][j] = armazem[i][j] * precoProdutos[j]; 
            custoArmazem[i] += precoFinalArmazem[i][j];
        }
    } 

    //output de dados =========================================================================================================================================
    printf("\n");

    for (int i = 0 ; i <= 4 ; i++) 
        printf("\nQuantidade de produtos armazenados no armaz�m %i: %i", i + 1, quantidadeArmazem[i]);

    printf("\n\nPressione ENTER para continuar.\n");
    getch();

    for (int i = 0 ; i <= 9 ; i++) 
        printf("\nQuantidade total de cada produto %i: %i", i + 1, quantidadeProdutos[i]);

    printf("\n\nPressione ENTER para continuar.\n");
    getch();

    printf("\nPre�o do produto que possui maior estoque em um �nico armaz�m: %.2f", preco);

    printf("\n\nPressione ENTER para continuar.\n");
    getch();

    printf("\nMenor estoque armazenado: %i", menorEstoque);

    printf("\n\nPressione ENTER para continuar.\n");
    getch();

    for (int i = 0 ; i <= 4 ; i++) 
        printf("\nCusto de cada armaz�m %i: %.2f", i + 1, custoArmazem[i]);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}