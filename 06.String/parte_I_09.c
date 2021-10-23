/*=============================================================================================================================================================
    Exercício 09 - Parte 01
    
    Faça um programa que receba uma frase e um caractere e verifique em que posição da frase o caractere digitado
    aparece pela primeira vez.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <string.h>     //biblioteca para manipulação de strings


//funções secundárias =========================================================================================================================================

    //Identificar se letra está contida -----------------------------------------------------------------------------------------------------------------------
    void agulhaNoPalheiro (char frase[200], char letra, int *posicao) {

        //declaração de dados
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

    //declaração de variáveis
    char frase[200];
    char letra;
    int posicao = NULL;

    //definição para idioma
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
        printf("\n\nA frase não contém a letra %c.", letra);

    else 
        printf("\n\nA frase contém a letra %c e ela aparece pela primeira vez no índice %i.", letra, posicao);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}