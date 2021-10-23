/*=============================================================================================================================================================
    Exercício 21 - Parte 01
    
    Faça um programa que leia um vetor com dez posições para números inteiros. Crie um segundo vetor,
    substituindo os valores nulos por 1. Mostre os dois vetores.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int vetor[9];
    int result[9];

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira 10 valores inteiros para o vetor:\n");
    for (int i = 0 ; i <= 9 ; i++) 
        scanf("%i", &vetor[i]);

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 9 ; i++) {
        if (vetor[i] == 0 || vetor[i] == NULL)
            result[i] = 1;
        
        else
            result[i] = vetor[i];
    }

    //output de dados =========================================================================================================================================
    printf("\n\nOs resultados são:\n");
    for (int i = 0 ; i <= 9 ; i++) 
        printf(" %i | %i\n", vetor[i], result[i]);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}