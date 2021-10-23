/*=============================================================================================================================================================
    Exercício 24 - Parte 01
    
    Faça um programa que leia um vetor com quinze posições para números inteiros. Crie, a seguir, um vetor
    resultante que contenha todos os números primos do vetor digitado. Escreva o vetor resultante.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int vetor[14], result[14];
    int resto, quantidadeResto;
    int g = 0;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira quinze valores:\n");
    for (int i = 0 ; i <= 14 ; i++) 
        scanf("%i", &vetor[i]);

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 14 ; i++) {       //verificar e retornar se os valores do vetor são primos
        quantidadeResto = 0;
        
        for (int j = 1 ; j <= vetor[i] ; j++) {     //dividir cada valor por todos os números de 1 até ele mesmo
            resto = vetor[i] % j;

            if (resto == 0)                         
                quantidadeResto++;
        }

        if (quantidadeResto == 2) {     //se houver somente dois restos 0 nas divisões, o valor operado será um número primo, pois só dividiu por 1 e ele mesmo
            result[g] = vetor[i];
            g++;
        }
    }

    //output de dados =========================================================================================================================================
    printf("\n\nOs valores primos no vetor são: ");
    for (int i = 0 ; i < g ; i++) 
        printf("%i ", result[i]);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}