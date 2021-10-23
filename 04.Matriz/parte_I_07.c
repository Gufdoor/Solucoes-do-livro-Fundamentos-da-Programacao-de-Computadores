/*=============================================================================================================================================================
    Exercício 07 - Parte 01
    
    Elabore um programa que preencha uma matriz M de ordem 4 ! 6 e uma segunda matriz N de ordem 6 !
    4, calcule e imprima a soma das linhas de M com as colunas de N.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int M[4][6], N[6][4];
    int result[4];
    int g = 0;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira 24 números inteiros para a matriz M:\n");
        for (int i = 0 ; i <= 3 ; i++) {

            for (int j = 0 ; j <= 5 ; j++)
                scanf("%i", &M[i][j]);
        }

    printf("\nInsira 24 números inteiros para a matriz N:\n");
        for (int i = 0 ; i <= 5 ; i++) {

            for (int j = 0 ; j <= 3 ; j++) 
                scanf("%i", &N[i][j]);
        }

    //processamento de dados ==================================================================================================================================
    for (int j = 0 ; j <= 3 ; j++) {        //somar os valores de cada linha da matriz M
        result[g] = 0; 

        for (int i = 0 ; i <= 5 ; i++) 
            result[g] += M[j][i];

        g++;
    }

    g = 0;

    for (int j = 0 ; j <= 3 ; j++) {        //somar os valores de cada coluna da matriz N

        for (int i = 0 ; i <= 5 ; i++) 
            result[g] += N[i][j];           //somar os valores obtidos das colunas com o resultado das somas das linhas da matriz N
        
        g++;
    }

    //output de dados =========================================================================================================================================
    printf("\n\nO resultado da operação é: ");

    for (int i = 0 ; i <= 3 ; i++) 
        printf("%i ", result[i]);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}