/*=============================================================================================================================================================
    Exercício 01 - Parte 01
    
    Faça um programa para criptografar uma frase dada pelo usuário. Na criptografia, a frase deverá ser invertida
    e as consoantes deverão ser trocadas por #.

    Exemplo:
        Frase: EU ESTOU NA ESCOLA
        Saída: A#O##E A# UO##E UE
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <string.h>     //biblioteca para manipulação de strings


//funções secundárias =========================================================================================================================================

    //Criptografia (inversão e substituição de chars) ---------------------------------------------------------------------------------------------------------
    void criptografia(char frase[ ]) {

        //delcaração de variáveis
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

        strrev(frase);      //função para inverter a string
    }

//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    char frase[200];

    //definição para idioma
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