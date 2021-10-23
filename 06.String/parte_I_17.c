/*=============================================================================================================================================================
    Exercício 17 - Parte 01
    
    Faça um programa que receba uma frase e, a cada duas palavras dela, realize uma criptografia, ou seja:
    a primeira letra da primeira palavra da frase concatenada com a última letra da segunda palavra, concatenada
    com a segunda letra da primeira palavra e com a penúltima letra da segunda palavra e assim por
    diante. No caso de quantidade de palavras ímpares, a última palavra deve simplesmente ser invertida.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <string.h>     //biblioteca para manipulação de strings
#include <stdlib.h>


//funções secundárias =========================================================================================================================================

    //Nº de strings par ou ímpar ------------------------------------------------------------------------------------------------------------------------------
    void quebrarFrase (char frase[200], char matrizPalavras[100][200], int *palavras) {

        //declaração de variáveis
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

    //declaração de variáveis
    int palavras = 0;
    char frase[200] = { 0 };
    char matrizPalavras[100][200] = { 0 };

    //definição para idioma
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