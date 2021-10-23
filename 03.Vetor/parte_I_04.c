/*=============================================================================================================================================================
    Exerc�cio 04 - Parte 01
    
    Fa�a um programa que preencha um vetor com quinze elementos inteiros e verifique a exist�ncia de elementos
    iguais a 30, mostrando as posi��es em que apareceram.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int vetor[14];
    int indice = 15;     //vari�vel que armazenar� o �ndice da posi��o com um valor igual a 30

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    for (int i = 0 ; i <= 14 ; i++) {           //preencher o vetor
        printf("%d - Insira um n�mero inteiro: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\n");

    //processamento e output de dados =========================================================================================================================
    for (int i = 0 ; i <=14 ; i++) {            //percorrer o vetor e identificar valores iguais a 30
        if (vetor[i] == 30) {
            indice = i;
            printf("%d ", indice);
        }
    }

    if (indice == 15)
        printf("N�o h� valores iguais a 30.");

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}