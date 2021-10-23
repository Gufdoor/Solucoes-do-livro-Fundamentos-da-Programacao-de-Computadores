/*=============================================================================================================================================================
    Exerc�cio 04 - Parte 01
    
    Fa�a um programa que receba uma frase, calcule e mostre a quantidade de palavras da frase digitada. Antes
    de contar a quantidade de palavras da frase, esta dever� passar pelas seguintes corre��es:

    a) Elimina��o de espa�os no in�cio da frase.
    b) Elimina��o de espa�os no fim da frase.
    c) Elimina��o de espa�os duplicados entre palavras.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <string.h>     //biblioteca para manipula��o de strings


//fun��es secund�rias =========================================================================================================================================

    //Remover espa�os da frase --------------------------------------------------------------------------------------------------------------------------------
    void removeEspaco (char frase[200], char result[200], int *quantidadePalavras) {

        //declara��o de vari�veis
        char auxiliar[200];
        int tamanho, g = 0;

        //processamento de dados  
        tamanho = strlen(frase) - 1;

        for (int i = 0 ; i < 200 ; i++ )            //eliminar o lixo contido no vetor             
            result[i] = 0;

        while (frase[g] == ' ') {                   //eliminar os espa�os em branco no in�cio da frase
            frase = &frase[g + 1];
            g = 0;
        }

        for (int i = 0, j = 0 ; i < tamanho ; i++, j++) {       //percorrer os vetores

            if (frase[j] == ' ') {   

                while (frase[j + 1] == ' ')     //caso tenha um espa�o vazio, pular a posi��o correspondente e continuar adicionando os demais caracteres
                    j++;
            }

            auxiliar[i] = frase[j];
        }


        tamanho = strlen(auxiliar) - 1;


        if (auxiliar[tamanho - 1] == ' ') {         //eliminar o �ltimo espa�o vazio, caso exista

            for (int i = 0, j = 0 ; i < tamanho ; i++, j++) {

                    while (auxiliar[j] == ' ') {    //caso tenha um espa�o vazio, pular a posi��o correspondente e continuar adicionando os demais caracteres
                        j++;
                        g++;

                        if (g == 2) 
                            *quantidadePalavras += 1;
                    }

                result[i] = auxiliar[j];            //copiar o resultado, caractere a caractere, para o vetor "result"
            }
        }

        else {
            for (int i = 0 ; i < tamanho ; i++) 
                result[i] = auxiliar[i];
        }


        tamanho = strlen(result) - 1;


        for (int i = 0 ; i < 200 ; i++ ) {

            if (result[i] == ' ') 
                *quantidadePalavras += 1;
        }
    }

//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    char frase[200];
    char result[200];
    int quantidadePalavras = 1;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //processamento de dados ==================================================================================================================================
    removeEspaco(frase, result, &quantidadePalavras);

    //output de dados =========================================================================================================================================
    printf("\n\nA nova frase �: %s", result);
    printf("\nA quantidade de palavras na frase �: %i", quantidadePalavras);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}