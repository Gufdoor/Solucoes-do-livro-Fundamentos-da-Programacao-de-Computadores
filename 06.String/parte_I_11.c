/*=============================================================================================================================================================
    Exerc�cio 11 - Parte 01
    
    Fa�a um programa que receba uma frase e mostre quantas vezes cada palavra aparece na frase digitada.
=============================================================================================================================================================*/



//inclus?o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr?o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera�?o do encoding do compilador)
#include <string.h>     //biblioteca para manipula�?o de strings


//fun�?es secund�rias =========================================================================================================================================

    //Contar quantas vezes cada palavra aparece na frase ------------------------------------------------------------------------------------------------------
    void quantidadePalavras (char frase[200], int quantidade[200], int *tamanho) {

        //declara�?o de vari�veis
        char aux[200] = { 0 };
        int tamanhoFrase = strlen(frase) - 1;
        int i, j;

        //processamento de dados
        for (i = 0 ; i < tamanhoFrase ; i++) {
            j = 0;

            while (frase[i] != ' ') {
                aux[j] = frase[i];
                j++;
            }

            i = j;

            //desmontar a frase inteira, colocar cada palavra separada por linhas em uma matriz e contar (dependendo, fazer uma matriz com vetor de strings)

        }
    }

//programa principal ==========================================================================================================================================

int main () {

    //declara�?o de vari�veis
    char frase[200] = { 0 };
    int quantidade[200] = { 0 };
    int tamanho = 0;

    //defini�?o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //processamento de dados ==================================================================================================================================
    quantidadePalavras(frase, quantidade, &tamanho);

    //output de dados =========================================================================================================================================
    printf("\n\nAs palavras da frase repetem, em ordem: ");

    for (int i = 0 ; i < tamanho ; i++)
        printf("%i ", quantidade[i]);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}