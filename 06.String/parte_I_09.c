/*=============================================================================================================================================================
    Exerc�cio 09 - Parte 01
    
    Fa�a um programa que receba uma frase e um caractere e verifique em que posi��o da frase o caractere digitado
    aparece pela primeira vez.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <string.h>     //biblioteca para manipula��o de strings


//fun��es secund�rias =========================================================================================================================================

    //Identificar se letra est� contida -----------------------------------------------------------------------------------------------------------------------
    void agulhaNoPalheiro (char frase[200], char letra, int *posicao) {

        //declara��o de dados
        int tamanho = strlen(frase) - 1;

        //processamento de dados
        for (int i = 0 ; i < tamanho ; i++) {

            if (letra == frase[i]) {
                *posicao = i;
                break;
            }
        }
    }

//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    char frase[200];
    char letra;
    int posicao = NULL;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Insira uma letra: ");
    scanf(" %c", &letra);

    //processamento de dados ==================================================================================================================================
    agulhaNoPalheiro(frase, letra, &posicao);

    //output de dados =========================================================================================================================================
    if (posicao == NULL)
        printf("\n\nA frase n�o cont�m a letra %c.", letra);

    else 
        printf("\n\nA frase cont�m a letra %c e ela aparece pela primeira vez no �ndice %i.", letra, posicao);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}