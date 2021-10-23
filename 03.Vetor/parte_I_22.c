/*=============================================================================================================================================================
    Exerc�cio 22 - Parte 01
    
    Fa�a um programa que leia um vetor A de dez posi��es. Em seguida, compacte o vetor, retirando os
    valores nulos e negativos. Armazene esse resultado no vetor B. Mostre o vetor B. (Lembre-se: o vetor B
    pode n�o ser completamente preenchido.)
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int A[9], B[9];
    int g = 0;      //vari�vel que definir� as posi��es que receber�o os valores de A em B

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira 10 valores inteiros para o vetor A:\n");
    for (int i = 0 ; i <= 9 ; i++) 
        scanf("%i", &A[i]);

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 9 ; i++) {        //armazenar os valores nulos e negativos de A em B
        if (A[i] <= 0) {
            B[g] = A[i];
            g++;
        }
    }

    //output de dados =========================================================================================================================================
    printf("\n\nOs valores negativos e nulos no vetor A s�o: ");
    for (int i = 0 ; i < g ; i++) 
        printf("%i ", B[i]);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}