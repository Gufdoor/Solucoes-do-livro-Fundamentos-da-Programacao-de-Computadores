/*=============================================================================================================================================================
    Exerc�cio 25 - Parte 01
    
    Fa�a um programa que leia um vetor com quinze posi��es para n�meros inteiros. Depois da leitura, divida
    todos os seus elementos pelo maior valor do vetor. Mostre o vetor ap�s os c�lculos.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    float vetor[14];
    float maior = 0;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira quinze n�meros inteiros:\n");
    for (int i = 0 ; i <= 14 ; i++) 
        scanf("%i", &vetor[i]);

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 14 ; i++) {       //identificar o maior valor do vetor
        if (vetor[i] > maior)
            maior = vetor[i];
    }

    for (int i = 0 ; i <= 14 ; i++) 
        vetor[i] /= maior;

    //output de dados =========================================================================================================================================
    printf("\n\nOs resultados do vetor s�o: ");
    for (int i = 0 ; i <= 14 ; i++)
        printf("%.2f ", vetor[i]);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}