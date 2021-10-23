/*=============================================================================================================================================================
    Exercício 19 - Parte 01
    
    Faça um programa que leia dois vetores de dez posições e faça a multiplicação dos elementos de mesmo
    índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int vetor1[9], vetor2[9];
    int result[9];

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira 10 valores inteiros para o primeiro vetor:\n");
    for (int i = 0 ; i <= 9 ; i++) 
        scanf("%i", &vetor1[i]);

    printf("\nInsira 10 valores inteiros para o segundo vetor:\n");
    for (int i = 0 ; i <= 9 ; i++) 
        scanf("%i", &vetor2[i]);

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 9 ; i++) 
        result[i] = vetor1[i] * vetor2[i];

    //output de dados =========================================================================================================================================
    printf("\n\nO resultado das operações é: ");
    for (int i = 0 ; i <= 9 ; i++) 
        printf("%i ", result[i]);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}