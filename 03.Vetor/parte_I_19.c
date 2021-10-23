/*=============================================================================================================================================================
    Exerc�cio 19 - Parte 01
    
    Fa�a um programa que leia dois vetores de dez posi��es e fa�a a multiplica��o dos elementos de mesmo
    �ndice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int vetor1[9], vetor2[9];
    int result[9];

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira 10 valores inteiros para o primeiro vetor:\n");
    for (int i = 0 ; i <= 9 ; i++) 
        scanf("%i", &vetor1[i]);

    printf("\nInsira 10 valores inteiros para o segundo vetor:\n");
    for (int i = 0 ; i <= 9 ; i++) 
        scanf("%i", &vetor2[i]);

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 9 ; i++) 
        result[i] = vetor1[i] * vetor2[i];

    //output de dados =========================================================================================================================================
    printf("\n\nO resultado das opera��es �: ");
    for (int i = 0 ; i <= 9 ; i++) 
        printf("%i ", result[i]);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}