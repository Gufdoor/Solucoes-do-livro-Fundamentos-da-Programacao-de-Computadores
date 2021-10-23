/*=============================================================================================================================================================
    Exercício 20 - Parte 01
    
    Faça um programa que leia um vetor com dez posições para números inteiros e mostre somente os números
    positivos.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int vetor[9];

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira 10 valores inteiros para o vetor:\n");
    for (int i = 0 ; i <= 9 ; i++) 
        scanf("%i", &vetor[i]);

    //processamento e output de dados =========================================================================================================================
    printf("\n\nOs números positivos são: ");
    for (int i = 0 ; i <= 9 ; i++) {        //verificar e imprimir os valores positivos
        if (vetor[i] > 0)
            printf("%i ", vetor[i]);
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}