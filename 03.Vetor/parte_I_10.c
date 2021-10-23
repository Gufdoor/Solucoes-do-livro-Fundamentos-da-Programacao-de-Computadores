/*=============================================================================================================================================================
    Exerc�cio 10 - Parte 01
    
    Fa�a um programa que preencha um vetor com dez n�meros inteiros e um segundo vetor com cinco n�meros
    inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor resultante ser� composto pela
    soma de cada n�mero par do primeiro vetor somado a todos os n�meros do segundo vetor. O segundo
    vetor resultante ser� composto pela quantidade de divisores que cada n�mero �mpar do primeiro vetor
    tem no segundo vetor.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int dez[9];
    int cinco[4];
    int result1[9];
    int result2[9];

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira dez n�meros inteiros em sequ�ncia:\n");
    for (int i = 0 ; i <= 9 ; i++) 
        scanf("%d", &dez[i]);

    printf("\n\nInsira cinco n�meros inteiros em sequ�ncia:\n");
    for (int i = 0 ; i <= 4 ; i++)
        scanf("%d", &cinco[i]);

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 9 ; i++) {    //soma dos n�meros pares

        if (dez[i] % 2 == 0) {
            result1[i] = dez[i];

            for (int j = 0 ; j <= 4 ; j++) {
                result1[i] +=  cinco[j];
            } 
        }

        else 
            result1[i] = NULL;  //a atribui��o NULL servir� de par�metro de compara��o para excluir os n�meros que n�o s�o pares na hora de printar o resultado
    }

    for (int i = 0 ; i <= 9 ; i++) {    //divisores dos n�meros �mpares

        if (dez[i] % 2 != 0) {
            result2[i] = 0;

            for (int j = 0 ; j <= 4 ; j++) {
                
                if (dez[i] % cinco[j] == 0 && dez[i] != 1)
                    result2[i]++;

            } 
        }

        else 
            result2[i] = 0;
    }

    //output de dados =========================================================================================================================================
    printf("\n\nO resultado da primeira opera��o �: ");
    for (int i = 0 ; i <= 9 ; i++) {
        if (result1[i] != NULL)
        printf("%d ", result1[i]);
    }

    printf("\nO resultado da segunda opera��o �: ");
    for (int i = 0 ; i <= 9 ; i++) {
        printf("%d ", result2[i]);
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}