/*=============================================================================================================================================================
    Exercício 18 - Parte 01
    
    Faça um programa que preencha um vetor com quinze números, determine e mostre:
        - o maior número e a posição por ele ocupada no vetor;
        - o menor número e a posição por ele ocupada no vetor.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int vetor[14];
    int maior = 0, menor = 999;
    int indiceMaior, indiceMenor;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira quinze valores para o vetor:\n");
    for (int i = 0 ; i <= 14 ; i++) 
        scanf("%i", &vetor[i]);

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 14 ; i++) {       //percorrer o vetor e encontrar o maior valor e sua posição
        if (vetor[i] > maior) {
            maior = vetor[i];
            indiceMaior = i;
        }
    }

    for (int i = 0 ; i <= 14 ; i++) {       //percorrer o vetor e encontrar o menor valor e sua posição
        if (vetor[i] < menor) {
            menor = vetor[i];
            indiceMenor = i;
        }
    }

    //output de dados =========================================================================================================================================
    printf("\n\nO maior valor é %i e sua posição é %i.\n", maior, indiceMaior);
    printf("O menor valor é %i e sua posição é %i.\n", menor, indiceMenor);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}