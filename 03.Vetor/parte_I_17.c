/*=============================================================================================================================================================
    Exerc�cio 17 - Parte 01
    
    Fa�a um programa que preencha dois vetores de dez posi��es cada, determine e mostre um terceiro contendo
    os elementos dos dois vetores anteriores ordenados de maneira decrescente.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int vetor1[9];
    int vetor2[9];
    int result[19];
    int maior = 0;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira dez n�meros inteiros para o primeiro vetor:\n");
    for (int i = 0 ; i <= 9 ; i++) 
        scanf("%d", &vetor1[i]);

    printf("\n\nInsira dez n�meros inteiros para o segundo vetor:\n");
    for (int i = 0 ; i <= 9 ; i++) 
        scanf("%d", &vetor2[i]);

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 9 ; i++)  //unir os valores do vetor 1 e vetor 2 no vetor resultante
        result[i] = vetor1[i];  //percorrer o primeiro vetor

    for (int i = 10 ; i <= 19 ; i++)    //percorrer o segundo vetor
        result[i] = vetor2[i - 10];

    for (int i = 0 ; i <= 19 ; i++) {   //ordenar em ordem decrescente
        int compara;    //vari�vel auxiliar de compara��o de valores

        for (int j = i + 1 ; j <= 19 ; j++) {

            if (result[i] < result[j]) {
                compara = result[i];
                result[i] = result[j];
                result[j] = compara;
            }
        }
    }

    //output de dados =========================================================================================================================================
    printf("\n");
    for (int i = 0 ; i <= 19 ; i++)
        printf("%d ", result[i]);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}