/*=============================================================================================================================================================
    Exercício 25 - Parte 01
    
    Faça um programa que leia um vetor com quinze posições para números inteiros. Depois da leitura, divida
    todos os seus elementos pelo maior valor do vetor. Mostre o vetor após os cálculos.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    float vetor[14];
    float maior = 0;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira quinze números inteiros:\n");
    for (int i = 0 ; i <= 14 ; i++) 
        scanf("%i", &vetor[i]);

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 14 ; i++) {       //identificar o maior valor do vetor
        if (vetor[i] > maior)
            maior = vetor[i];
    }

    for (int i = 0 ; i <= 14 ; i++) 
        vetor[i] /= maior;

    //output de dados =========================================================================================================================================
    printf("\n\nOs resultados do vetor são: ");
    for (int i = 0 ; i <= 14 ; i++)
        printf("%.2f ", vetor[i]);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}