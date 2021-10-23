/*=============================================================================================================================================================
    Exerc�cio 08 - Parte 01
    
    Fa�a um programa que receba uma frase e um caractere e verifique se o caractere digitado � encontrado na
    frase ou n�o e, se for encontrado, quantas vezes isso acontece.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <string.h>     //biblioteca para manipula��o de strings


//fun��es secund�rias =========================================================================================================================================

    //Identificar se letra est� contida -----------------------------------------------------------------------------------------------------------------------
    void agulhaNoPalheiro (char frase[200], char letra, int *quantidade) {

        //declara��o de dados
        int tamanho = strlen(frase) - 1;

        //processamento de dados
        for (int i = 0 ; i < tamanho ; i++) {

            if (letra == frase[i])
                *quantidade += 1;
        }
    }

//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    char frase[200];
    char letra;
    int quantidade = 0;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Insira uma letra: ");
    scanf(" %c", &letra);

    //processamento de dados ==================================================================================================================================
    agulhaNoPalheiro(frase, letra, &quantidade);

    //output de dados =========================================================================================================================================
    if (quantidade == 0)
        printf("\n\nA frase n�o cont�m a letra %c.", letra);

    else 
        printf("\n\nA frase cont�m a letra %c e ela aparece %i vez/vezes.", letra, quantidade);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}