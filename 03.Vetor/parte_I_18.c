/*=============================================================================================================================================================
    Exerc�cio 18 - Parte 01
    
    Fa�a um programa que preencha um vetor com quinze n�meros, determine e mostre:
        - o maior n�mero e a posi��o por ele ocupada no vetor;
        - o menor n�mero e a posi��o por ele ocupada no vetor.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int vetor[14];
    int maior = 0, menor = 999;
    int indiceMaior, indiceMenor;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira quinze valores para o vetor:\n");
    for (int i = 0 ; i <= 14 ; i++) 
        scanf("%i", &vetor[i]);

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 14 ; i++) {       //percorrer o vetor e encontrar o maior valor e sua posi��o
        if (vetor[i] > maior) {
            maior = vetor[i];
            indiceMaior = i;
        }
    }

    for (int i = 0 ; i <= 14 ; i++) {       //percorrer o vetor e encontrar o menor valor e sua posi��o
        if (vetor[i] < menor) {
            menor = vetor[i];
            indiceMenor = i;
        }
    }

    //output de dados =========================================================================================================================================
    printf("\n\nO maior valor � %i e sua posi��o � %i.\n", maior, indiceMaior);
    printf("O menor valor � %i e sua posi��o � %i.\n", menor, indiceMenor);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}