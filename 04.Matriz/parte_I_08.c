/*=============================================================================================================================================================
    Exercício 08 - Parte 01
    
    Crie um programa que preencha duas matrizes 3 ! 8 com números inteiros, calcule e mostre:

        - a soma das duas matrizes, resultando em uma terceira matriz também de ordem 3 ! 8;
        - a diferença das duas matrizes, resultando em uma quarta matriz também de ordem 3 ! 8.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int matriz1[3][8], matriz2[3][8], result1[3][8], result2[3][8];

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira 24 números inteiros para a matriz 1:\n");
        for (int i = 0 ; i <= 2 ; i++) {

            for (int j = 0 ; j <= 7 ; j++)
                scanf("%i", &matriz1[i][j]);
        }

    printf("\nInsira 24 números inteiros para a matriz 2:\n");
        for (int i = 0 ; i <= 2 ; i++) {

            for (int j = 0 ; j <= 7 ; j++)
                scanf("%i", &matriz2[i][j]);
        }

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 2 ; i++) {        //soma das duas matrizes e diferença das duas matrizes

        for (int j = 0 ; j <= 7 ; j++) {
            result1[i][j] = matriz1[i][j] + matriz2[i][j];
            result2[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }

    //output de dados =========================================================================================================================================
    printf("\n\nO resultado da soma das matrizes é: ");
    for (int i = 0 ; i <= 2 ; i++) {

        for (int j = 0 ; j <= 7 ; j++)
            printf("%i ", result1[i][j]);
    }

    printf("\nO resultado da subtração das matrizes é: ");
    for (int i = 0 ; i <= 2 ; i++) {

        for (int j = 0 ; j <= 7 ; j++)
            printf("%i ", result2[i][j]);
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}