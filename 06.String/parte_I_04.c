/*=============================================================================================================================================================
    Exercício 04 - Parte 01
    
    Faça um programa que receba uma frase, calcule e mostre a quantidade de palavras da frase digitada. Antes
    de contar a quantidade de palavras da frase, esta deverá passar pelas seguintes correções:

    a) Eliminação de espaços no início da frase.
    b) Eliminação de espaços no fim da frase.
    c) Eliminação de espaços duplicados entre palavras.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <string.h>     //biblioteca para manipulação de strings


//funções secundárias =========================================================================================================================================

    //Remover espaços da frase --------------------------------------------------------------------------------------------------------------------------------
    void removeEspaco (char frase[200], char result[200], int *quantidadePalavras) {

        //declaração de variáveis
        char auxiliar[200];
        int tamanho, g = 0;

        //processamento de dados  
        tamanho = strlen(frase) - 1;

        for (int i = 0 ; i < 200 ; i++ )            //eliminar o lixo contido no vetor             
            result[i] = 0;

        while (frase[g] == ' ') {                   //eliminar os espaços em branco no início da frase
            frase = &frase[g + 1];
            g = 0;
        }

        for (int i = 0, j = 0 ; i < tamanho ; i++, j++) {       //percorrer os vetores

            if (frase[j] == ' ') {   

                while (frase[j + 1] == ' ')     //caso tenha um espaço vazio, pular a posição correspondente e continuar adicionando os demais caracteres
                    j++;
            }

            auxiliar[i] = frase[j];
        }


        tamanho = strlen(auxiliar) - 1;


        if (auxiliar[tamanho - 1] == ' ') {         //eliminar o último espaço vazio, caso exista

            for (int i = 0, j = 0 ; i < tamanho ; i++, j++) {

                    while (auxiliar[j] == ' ') {    //caso tenha um espaço vazio, pular a posição correspondente e continuar adicionando os demais caracteres
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

    //declaração de variáveis
    char frase[200];
    char result[200];
    int quantidadePalavras = 1;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //processamento de dados ==================================================================================================================================
    removeEspaco(frase, result, &quantidadePalavras);

    //output de dados =========================================================================================================================================
    printf("\n\nA nova frase é: %s", result);
    printf("\nA quantidade de palavras na frase é: %i", quantidadePalavras);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}