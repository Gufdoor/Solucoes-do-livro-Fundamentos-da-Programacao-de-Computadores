/*=============================================================================================================================================================
    Exercício 03 - Parte 01
    
    Faça um programa que receba uma frase e gere uma nova, retirando os espaços excedentes no início e no fim
    da frase e entre suas palavras.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <string.h>     //biblioteca para manipulação de strings



//funções secundárias =========================================================================================================================================

    //Remover espaços da frase --------------------------------------------------------------------------------------------------------------------------------
    void removeEspaco (char frase[200], char result[200]) {

        //declaração de variáveis
        int tamanho;

        //processamento de dados  
        tamanho = strlen(frase) - 1;

        for (int i = 0 ; i < 200 ; i++ )            //eliminar o lixo contido no vetor             
            result[i] = 0;

        for (int i = 0, j = 0 ; i < tamanho ; i++, j++) {       //percorrer os vetores

            if (frase[j] == ' ')    //caso tenha um espaço vazio, pular a posição correspondente e continuar adicionando os demais caracteres
                j++;

            result[i] = frase[j];
        }
    }

//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    char frase[200];
    char result[200];

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //processamento de dados ==================================================================================================================================
    removeEspaco(frase, result);

    //output de dados =========================================================================================================================================
    printf("\n\nA nova frase é: %s", result);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}