/*=============================================================================================================================================================
    Exerc�cio 02 - Parte 01
    
    Crie um programa que preencha uma matriz 2 ! 4 com n�meros inteiros, calcule e mostre:

        - a quantidade de elementos entre 12 e 20 em cada linha;
        - a m�dia dos elementos pares da matriz.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int matriz[2][4];
    int intervalo[2];
    float media = 0, pares = 0;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira oito n�meros inteiros:\n");

    for (int i = 0 ; i <= 1 ; i++) {

        for (int j = 0 ; j <= 3 ; j++)
            scanf("%i", &matriz[i][j]);
    }

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 1 ; i++) {        //percorrer a matriz e salvar no vetor "intevalo" os valores no intervalo entre 12 e 20
        intervalo[i] = 0;

        for (int j = 0 ; j <= 3 ; j++) {

            if (matriz[i][j] > 12 && matriz[i][j] < 20) 
                intervalo[i]++;
        }
    }

    for (int i = 0 ; i <= 1 ; i++) {        //percorrer a matriz e salvar os n�meros pares e a quantidade dos mesmos
        
        for (int j = 0 ; j <= 3 ; j++) {

            if (matriz[i][j] % 2 == 0) {
                media += matriz[i][j];
                pares++;
            }
        }
    }

    media /= pares;     //calcular a m�dia dos n�meros pares 

    //output de dados =========================================================================================================================================
    printf("\n\nA quantidade de elementos entre 12 e 20 em cada linha �:\n");
    for (int i = 0 ; i <= 1 ; i++)
        printf(" Linha %i: %i\n", i + 1, intervalo[i]);

    printf("\n\nA m�dia dos elementos pares na matriz �: %.2f", media);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}