/*=============================================================================================================================================================
    Exercício 08 - Parte 01
    
    Faça um programa que receba uma frase e um caractere e verifique se o caractere digitado é encontrado na
    frase ou não e, se for encontrado, quantas vezes isso acontece.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <string.h>     //biblioteca para manipulação de strings


//funções secundárias =========================================================================================================================================

    //Identificar se letra está contida -----------------------------------------------------------------------------------------------------------------------
    void agulhaNoPalheiro (char frase[200], char letra, int *quantidade) {

        //declaração de dados
        int tamanho = strlen(frase) - 1;

        //processamento de dados
        for (int i = 0 ; i < tamanho ; i++) {

            if (letra == frase[i])
                *quantidade += 1;
        }
    }

//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    char frase[200];
    char letra;
    int quantidade = 0;

    //definição para idioma
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
        printf("\n\nA frase não contém a letra %c.", letra);

    else 
        printf("\n\nA frase contém a letra %c e ela aparece %i vez/vezes.", letra, quantidade);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}