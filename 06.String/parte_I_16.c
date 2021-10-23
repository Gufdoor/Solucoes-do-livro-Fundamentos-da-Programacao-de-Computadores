/*=============================================================================================================================================================
    Exerc�cio 16 - Parte 01
    
    Fa�a um programa que receba uma frase e mostre quantas letras, quantos n�meros e quantos espa�os
    existem nela.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <string.h>     //biblioteca para manipula��o de strings


//fun��es secund�rias =========================================================================================================================================

    //Contagem de letras, n�meros e espa�os -------------------------------------------------------------------------------------------------------------------
    void contagem (char frase[200], int *letras, int *numeros, int *espacos) {

        //processamento de dados
        for (int i = 0 ; i < (strlen(frase) - 1) ; i++) {

            if ((frase[i] >= 65 && frase[i] <= 90) || (frase[i] >= 97 && frase[i] <= 122)) 
                *letras += 1;

            else if (frase[i] >= 48 && frase[i] <= 57)
                *numeros += 1;

            else if (frase[i] == ' ')
                *espacos += 1;
        }
    }

//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    char frase[200] = { 0 };
    int numeros = 0, letras = 0, espacos = 0;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //processamento de dados ==================================================================================================================================
    contagem(frase, &letras, &numeros, &espacos);

    //output de dados =========================================================================================================================================
    printf("\n\nOs resultados s�o:\n");
    printf(" Letras: %i\n N�meros: %i\n Espa�os: %i", letras, numeros, espacos);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}