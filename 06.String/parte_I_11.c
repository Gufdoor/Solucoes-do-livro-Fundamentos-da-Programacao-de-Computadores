/*=============================================================================================================================================================
    Exercício 11 - Parte 01
    
    Faça um programa que receba uma frase e mostre quantas vezes cada palavra aparece na frase digitada.
=============================================================================================================================================================*/



//inclus?o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr?o de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteraç?o do encoding do compilador)
#include <string.h>     //biblioteca para manipulaç?o de strings


//funç?es secundárias =========================================================================================================================================

    //Contar quantas vezes cada palavra aparece na frase ------------------------------------------------------------------------------------------------------
    void quantidadePalavras (char frase[200], int quantidade[200], int *tamanho) {

        //declaraç?o de variáveis
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

    //declaraç?o de variáveis
    char frase[200] = { 0 };
    int quantidade[200] = { 0 };
    int tamanho = 0;

    //definiç?o para idioma
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