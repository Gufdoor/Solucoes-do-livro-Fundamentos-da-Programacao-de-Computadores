/*=============================================================================================================================================================
    Exercício 07 - Parte 01
    
    Faça um programa que receba uma frase e mostre quantas letras diferentes ela contém.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <string.h>     //biblioteca para manipulação de strings


//funções secundárias =========================================================================================================================================

    //Quantificar letras diferentes em uma string -------------------------------------------------------------------------------------------------------------
    void letrasDiferentes (char frase[200], int *quantidade) {

        //declaração de variáveis
        int tamanho = strlen(frase) - 1;
        char matrizLetras[256] = { 0 };     //incializar o vetor com 0 e remover lixo

        //processamento de dados
        for (int i = 0 ; i < tamanho ; i++) {

            if (frase[i] != ' ')
                matrizLetras[frase[i]] += 1;    //separar cada caractere por linhas
        }

        for (int i = 0 ; i < 256 ; i++) {

            if (matrizLetras[i] != 0)    //contar a quantidade de linhas na matriz ; cada linha corresponde a uma letra diferente
                *quantidade += 1;
        }
    }

//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    char frase[200];
    int quantidade = 0;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //processamento de dados ==================================================================================================================================
    letrasDiferentes(frase, &quantidade);

    //output de dados =========================================================================================================================================
    printf("\n\nA frase contém %i letras diferentes.", quantidade);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}