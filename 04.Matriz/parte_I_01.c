/*=============================================================================================================================================================
    Exerc�cio 01 - Parte 01
    
    Fa�a um programa que preencha uma matriz 3 ! 5 com n�meros inteiros, calcule e mostre a quantidade de
    elementos entre 15 e 20.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)




//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int matriz[3][5];
    int quantidade = 0;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");

    printf("Insira quinze valores:\n");
    
    for (int i = 0 ; i <= 2 ; i++) {        //percorrer e preencher a matriz
        for (int j = 0 ; j <= 4 ; j++) 
            scanf("%i", &matriz[i][j]);
    }

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 2 ; i++) {        
        for (int j = 0 ; j <= 4 ; j++) {
            if (matriz[i][j] > 15 && matriz[i][j] < 20)
                quantidade++;
        }
    }

    //output de dados =========================================================================================================================================
    printf("\n\nA quantidade de elementos entre 15 e 20 �: %i", quantidade);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}