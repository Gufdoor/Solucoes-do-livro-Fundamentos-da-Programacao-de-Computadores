/*=============================================================================================================================================================
    Exerc�cio 01 - Parte 01
    
    Fa�a um programa para criptografar uma frase dada pelo usu�rio. Na criptografia, a frase dever� ser invertida
    e as consoantes dever�o ser trocadas por #.

    Exemplo:
        Frase: EU ESTOU NA ESCOLA
        Sa�da: A#O##E A# UO##E UE
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <string.h>     //biblioteca para manipula��o de strings


//fun��es secund�rias =========================================================================================================================================

    //Criptografia (invers�o e substitui��o de chars) ---------------------------------------------------------------------------------------------------------
    void criptografia(char frase[ ]) {

        //delcara��o de vari�veis
        int tamanho;
        int validar;
        char vogais[ ] = {'a','e','i','o','u'};
        char VOGAIS[ ] = {"AEIOU"};

        //processamento de dados
        tamanho = strlen(frase) - 1;

        for (int i = 0 ; i < tamanho ; i++) {
            validar = 0;

            for (int j = 0 ; j < 5 ; j++) {

                if (frase[i] == vogais[j] || frase[i] == ' ') {
                    validar = 1;
                    break;
                }
            }

            for (int j = 0 ; j < 5 ; j++) {

                if (frase[i] == VOGAIS[j] || frase[i] == ' ') {
                    validar = 1;
                    break;
                }
            }
            
            if (validar == 0)
                frase[i] = '#';
        }

        strrev(frase);      //fun��o para inverter a string
    }

//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    char frase[200];

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma frase curta: ");
    fgets(frase, 200, stdin);

    //processamento de dados ==================================================================================================================================
    criptografia(frase);

    //output de dados =========================================================================================================================================
    printf("\n\nResultado da criptografia: %s", frase);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}