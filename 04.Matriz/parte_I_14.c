/*=============================================================================================================================================================
    Exerc�cio 14 - Parte 01
    
    Fa�a um programa que preencha uma matriz 2 ! 3, calcule e mostre a quantidade de elementos da matriz
    que n�o pertencem ao intervalo [5,15].
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int matriz[2][3];
    int quantidade = 0;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira 6 valores inteiros:\n");
    for (int i = 0 ; i <= 1 ; i++) {

        for (int j = 0 ; j <= 2 ; j++) 
            scanf("%i", &matriz[i][j]);
    }

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 1 ; i++) {

        for (int j = 0 ; j <= 2 ; j++) {
            
            if (matriz[i][j] < 5 || matriz[i][j] > 15)
                quantidade++;
        }
    }

    //output de dados =========================================================================================================================================
    printf("\n\nA quantidade de elementos da matriz que n�o pertencem ao intervalo [5,15] �: %i", quantidade);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}