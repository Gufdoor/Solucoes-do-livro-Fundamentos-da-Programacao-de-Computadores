/*=============================================================================================================================================================
    Exerc�cio 08 - Parte 01
    
    Crie um programa que preencha duas matrizes 3 ! 8 com n�meros inteiros, calcule e mostre:

        - a soma das duas matrizes, resultando em uma terceira matriz tamb�m de ordem 3 ! 8;
        - a diferen�a das duas matrizes, resultando em uma quarta matriz tamb�m de ordem 3 ! 8.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int matriz1[3][8], matriz2[3][8], result1[3][8], result2[3][8];

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira 24 n�meros inteiros para a matriz 1:\n");
        for (int i = 0 ; i <= 2 ; i++) {

            for (int j = 0 ; j <= 7 ; j++)
                scanf("%i", &matriz1[i][j]);
        }

    printf("\nInsira 24 n�meros inteiros para a matriz 2:\n");
        for (int i = 0 ; i <= 2 ; i++) {

            for (int j = 0 ; j <= 7 ; j++)
                scanf("%i", &matriz2[i][j]);
        }

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 2 ; i++) {        //soma das duas matrizes e diferen�a das duas matrizes

        for (int j = 0 ; j <= 7 ; j++) {
            result1[i][j] = matriz1[i][j] + matriz2[i][j];
            result2[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }

    //output de dados =========================================================================================================================================
    printf("\n\nO resultado da soma das matrizes �: ");
    for (int i = 0 ; i <= 2 ; i++) {

        for (int j = 0 ; j <= 7 ; j++)
            printf("%i ", result1[i][j]);
    }

    printf("\nO resultado da subtra��o das matrizes �: ");
    for (int i = 0 ; i <= 2 ; i++) {

        for (int j = 0 ; j <= 7 ; j++)
            printf("%i ", result2[i][j]);
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}