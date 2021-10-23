/*=============================================================================================================================================================
    Exerc�cio 17 - Parte 01
    
    Fa�a um programa que receba uma frase e, a cada duas palavras dela, realize uma criptografia, ou seja:
    a primeira letra da primeira palavra da frase concatenada com a �ltima letra da segunda palavra, concatenada
    com a segunda letra da primeira palavra e com a pen�ltima letra da segunda palavra e assim por
    diante. No caso de quantidade de palavras �mpares, a �ltima palavra deve simplesmente ser invertida.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <string.h>     //biblioteca para manipula��o de strings
#include <stdlib.h>


//fun��es secund�rias =========================================================================================================================================

    //N� de strings par ou �mpar ------------------------------------------------------------------------------------------------------------------------------
    void quebrarFrase (char frase[200], char matrizPalavras[100][200], int *palavras) {

        //declara��o de vari�veis
        int i = 0;
        char *aux;

        //processamento de dados
        aux = strtok(frase, " ");

        while (aux != NULL) {
            printf("%s\n", aux);
            strcpy(matrizPalavras[i], aux);
            aux = strtok(NULL, " ");
            i++;
            *palavras += 1;
        }
    }

//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int palavras = 0;
    char frase[200] = { 0 };
    char matrizPalavras[100][200] = { 0 };

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //processamento de dados ==================================================================================================================================
    quebrarFrase(frase, matrizPalavras, &palavras);

    //output de dados =========================================================================================================================================
    printf("\n\nPalavras: %i", palavras);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}