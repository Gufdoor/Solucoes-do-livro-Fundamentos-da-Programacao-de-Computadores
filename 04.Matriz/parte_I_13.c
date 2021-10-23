/*=============================================================================================================================================================
    Exerc�cio 13 - Parte 01
    
    Elabore um programa que: preencha uma matriz 6 ! 4; recalcule a matriz digitada, onde cada linha dever�
    ser multiplicada pelo maior elemento da linha em quest�o; mostre a matriz resultante.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int matriz[6][4], result[6][4];
    int maior = 0;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira 24 valores inteiros:\n");
    for (int i = 0 ; i <= 5 ; i++) {

        for (int j = 0 ; j <= 3 ; j++)
            scanf("%i", &matriz[i][j]);
    }

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 5 ; i++) {            //percorrer as linhas da matriz

        for (int g = 0 ; g <= 3 ; g++) {        //percorrer a linha i e identificar o maior valor
            if (matriz[i][g] > maior)
                maior = matriz[i][g];
        }

        for (int j = 0 ; j <= 3 ; j++) 
            result[i][j] = matriz[i][j] * maior;
    }

    //output de dados =========================================================================================================================================
    printf("\n\nOs resultados das opera��es s�o: ");
    for (int i = 0 ; i <= 5 ; i++) {

        for (int j = 0 ; j <= 3 ; j++)
            printf("%i ", result[i][j]);
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}