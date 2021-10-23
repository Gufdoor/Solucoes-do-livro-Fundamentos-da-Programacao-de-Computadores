/*=============================================================================================================================================================
    Exerc�cio 20 - Parte 01
    
    Fa�a um programa que leia um vetor com dez posi��es para n�meros inteiros e mostre somente os n�meros
    positivos.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int vetor[9];

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira 10 valores inteiros para o vetor:\n");
    for (int i = 0 ; i <= 9 ; i++) 
        scanf("%i", &vetor[i]);

    //processamento e output de dados =========================================================================================================================
    printf("\n\nOs n�meros positivos s�o: ");
    for (int i = 0 ; i <= 9 ; i++) {        //verificar e imprimir os valores positivos
        if (vetor[i] > 0)
            printf("%i ", vetor[i]);
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}