/*=============================================================================================================================================================
    Exercício 10 - Parte 01
    
    Crie um programa que preencha uma matriz 5 ! 5 com números inteiros, calcule e mostre a soma:

        - dos elementos da linha 4;
        - dos elementos da coluna 2;
        - dos elementos da diagonal principal;
        - dos elementos da diagonal secundária;
        - de todos os elementos da matriz.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int matriz[5][5];
    int soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, somaTotal = 0;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira 25 valores:\n");
    for (int i = 0 ; i <= 4 ; i++) {

        for (int j = 0 ; j <= 4 ; j++)
            scanf("%i", &matriz[i][j]);
    }

    //processamento de dados ==================================================================================================================================
    for (int j = 0 ; j <= 4 ; j++)      //soma dos elementos da linha 4
        soma1 += matriz[3][j];

    for (int i = 0 ; i <= 4 ; i++)      //soma dos elementos da coluna 2
        soma2 += matriz[i][1];

    for (int i = 0 ; i <= 4 ; i++)      //soma dos elementos da diagonal principal
        soma3 += matriz[i][i]; 

    for (int i = 4 ; i >= 0 ; i--)      //soma dos elementos da diagonal secundária
        soma4 += matriz[i][i];

    for (int i = 0 ; i <= 4 ; i++) {    //soma de todos os elementos da matriz

        for (int j = 0 ; j <= 4 ; j++)
            somaTotal += matriz[i][j];
    }

    //output de dados =========================================================================================================================================
    printf("\n\nO resultado das operações é:\n");
    printf(" Soma dos elementos da linha 4: %i\n", soma1);
    printf(" Soma dos elementos da coluna 2: %i\n", soma2);
    printf(" Soma dos elementos da diagonal principal: %i\n", soma3);
    printf(" Soma dos elementos da diagonal secundária: %i\n", soma4);
    printf(" Soma de todos os elementos da matriz: %i", somaTotal);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}