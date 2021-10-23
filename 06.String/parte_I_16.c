/*=============================================================================================================================================================
    Exercício 16 - Parte 01
    
    Faça um programa que receba uma frase e mostre quantas letras, quantos números e quantos espaços
    existem nela.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <string.h>     //biblioteca para manipulação de strings


//funções secundárias =========================================================================================================================================

    //Contagem de letras, números e espaços -------------------------------------------------------------------------------------------------------------------
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

    //declaração de variáveis
    char frase[200] = { 0 };
    int numeros = 0, letras = 0, espacos = 0;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //processamento de dados ==================================================================================================================================
    contagem(frase, &letras, &numeros, &espacos);

    //output de dados =========================================================================================================================================
    printf("\n\nOs resultados são:\n");
    printf(" Letras: %i\n Números: %i\n Espaços: %i", letras, numeros, espacos);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}