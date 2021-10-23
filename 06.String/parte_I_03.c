/*=============================================================================================================================================================
    Exerc�cio 03 - Parte 01
    
    Fa�a um programa que receba uma frase e gere uma nova, retirando os espa�os excedentes no in�cio e no fim
    da frase e entre suas palavras.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <string.h>     //biblioteca para manipula��o de strings



//fun��es secund�rias =========================================================================================================================================

    //Remover espa�os da frase --------------------------------------------------------------------------------------------------------------------------------
    void removeEspaco (char frase[200], char result[200]) {

        //declara��o de vari�veis
        int tamanho;

        //processamento de dados  
        tamanho = strlen(frase) - 1;

        for (int i = 0 ; i < 200 ; i++ )            //eliminar o lixo contido no vetor             
            result[i] = 0;

        for (int i = 0, j = 0 ; i < tamanho ; i++, j++) {       //percorrer os vetores

            if (frase[j] == ' ')    //caso tenha um espa�o vazio, pular a posi��o correspondente e continuar adicionando os demais caracteres
                j++;

            result[i] = frase[j];
        }
    }

//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    char frase[200];
    char result[200];

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //processamento de dados ==================================================================================================================================
    removeEspaco(frase, result);

    //output de dados =========================================================================================================================================
    printf("\n\nA nova frase �: %s", result);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}