/*=============================================================================================================================================================
    Exercício 25 - Parte 01
    
    Crie um programa que:
        - receba o preço de dez produtos e armazene-os em um vetor;
        - receba a quantidade estocada de cada um desses produtos, em cinco armazéns diferentes, utilizando
          uma matriz 5 ! 10.
          
    O programa deverá calcular e mostrar:
        - a quantidade de produtos estocados em cada um dos armazéns;
        - a quantidade de cada um dos produtos estocados, em todos os armazéns juntos;
        - o preço do produto que possui maior estoque em um único armazém;
        - o menor estoque armazenado;
        - o custo de cada armazém.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <conio.h>      //biblioteca para manipulação de recursos na tela



//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    float precoProdutos[10];
    float maiorEstoque = 0, preco;
    float custoArmazem[5];
    float precoFinalArmazem[5][10];
    int armazem[5][10];
    int quantidadeArmazem[5];
    int quantidadeProdutos[10];
    int indiceMaiorEstoque;
    int menorEstoque = 999;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    for (int i = 0 ; i <= 9 ; i++) {
        printf("Insira o preço do produto %i: ", i + 1);
        scanf("%f", &precoProdutos[i]);

            //validação do preço
            while (precoProdutos[i] < 0) {
                printf("Valor inválido. Insira o preço do produto %i: ", i + 1);
                scanf("%f", &precoProdutos[i]);
            }
    }

    for (int i = 0 ; i <= 4 ; i++) {
        printf("\nInsira a quantidade de cada produto no armazem %i:\n", i + 1);

        for (int j = 0 ; j <= 9 ; j++) {
            scanf("%i", &armazem[i][j]);

                //validação da quantidade
                while (armazem[i][j] < 0) {
                    printf("\nValor inválido. Insira a quantidade de cada produto no armazem %i:\n", i + 1);
                    scanf("%i", &armazem[i][j]);
                }
        }
    }

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 4 ; i++) {    //calcular a quantidade de produtos por armazém
        quantidadeArmazem[i] = 0;

        for (int j = 0 ; j <= 9 ; j++) 
            quantidadeArmazem[i] += armazem[i][j];
    }

    for (int j = 0 ; j <= 9 ; j++) {    //calcular a quantidade total de cada produto
        quantidadeProdutos[j] = 0;

        for (int i = 0 ; i <= 4 ; i++)
            quantidadeProdutos[j] += armazem[i][j];
    }

    for (int i = 0 ; i <= 4 ; i++) {    //encontrar a preço do produto com a maior quantidade em um armazém

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

    for (int i = 0 ; i <= 4 ; i++) {    //calcular o custo de cada armazém
        custoArmazem[i] = 0;

        for (int j = 0 ; j <= 9 ; j++) {
            precoFinalArmazem[i][j] = armazem[i][j] * precoProdutos[j]; 
            custoArmazem[i] += precoFinalArmazem[i][j];
        }
    } 

    //output de dados =========================================================================================================================================
    printf("\n");

    for (int i = 0 ; i <= 4 ; i++) 
        printf("\nQuantidade de produtos armazenados no armazém %i: %i", i + 1, quantidadeArmazem[i]);

    printf("\n\nPressione ENTER para continuar.\n");
    getch();

    for (int i = 0 ; i <= 9 ; i++) 
        printf("\nQuantidade total de cada produto %i: %i", i + 1, quantidadeProdutos[i]);

    printf("\n\nPressione ENTER para continuar.\n");
    getch();

    printf("\nPreço do produto que possui maior estoque em um único armazém: %.2f", preco);

    printf("\n\nPressione ENTER para continuar.\n");
    getch();

    printf("\nMenor estoque armazenado: %i", menorEstoque);

    printf("\n\nPressione ENTER para continuar.\n");
    getch();

    for (int i = 0 ; i <= 4 ; i++) 
        printf("\nCusto de cada armazém %i: %.2f", i + 1, custoArmazem[i]);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}