/*=============================================================================================================================================================
    Exerc�cio 07 - Parte 01
    
    Fa�a um programa que receba uma frase e mostre quantas letras diferentes ela cont�m.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <string.h>     //biblioteca para manipula��o de strings


//fun��es secund�rias =========================================================================================================================================

    //Quantificar letras diferentes em uma string -------------------------------------------------------------------------------------------------------------
    void letrasDiferentes (char frase[200], int *quantidade) {

        //declara��o de vari�veis
        int tamanho = strlen(frase) - 1;
        char matrizLetras[256] = { 0 };     //incializar o vetor com 0 e remover lixo

        //processamento de dados
        for (int i = 0 ; i < tamanho ; i++) {

            if (frase[i] != ' ')
                matrizLetras[frase[i]] += 1;    //separar cada caractere por linhas
        }

        for (int i = 0 ; i < 256 ; i++) {

            if (matrizLetras[i] != 0)    //contar a quantidade de linhas na matriz ; cada linha corresponde a uma letra diferente
                *quantidade += 1;
        }
    }

//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    char frase[200];
    int quantidade = 0;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //processamento de dados ==================================================================================================================================
    letrasDiferentes(frase, &quantidade);

    //output de dados =========================================================================================================================================
    printf("\n\nA frase cont�m %i letras diferentes.", quantidade);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}