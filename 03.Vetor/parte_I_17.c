/*=============================================================================================================================================================
    Exercício 17 - Parte 01
    
    Faça um programa que preencha dois vetores de dez posições cada, determine e mostre um terceiro contendo
    os elementos dos dois vetores anteriores ordenados de maneira decrescente.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int vetor1[9];
    int vetor2[9];
    int result[19];
    int maior = 0;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira dez números inteiros para o primeiro vetor:\n");
    for (int i = 0 ; i <= 9 ; i++) 
        scanf("%d", &vetor1[i]);

    printf("\n\nInsira dez números inteiros para o segundo vetor:\n");
    for (int i = 0 ; i <= 9 ; i++) 
        scanf("%d", &vetor2[i]);

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 9 ; i++)  //unir os valores do vetor 1 e vetor 2 no vetor resultante
        result[i] = vetor1[i];  //percorrer o primeiro vetor

    for (int i = 10 ; i <= 19 ; i++)    //percorrer o segundo vetor
        result[i] = vetor2[i - 10];

    for (int i = 0 ; i <= 19 ; i++) {   //ordenar em ordem decrescente
        int compara;    //variável auxiliar de comparação de valores

        for (int j = i + 1 ; j <= 19 ; j++) {

            if (result[i] < result[j]) {
                compara = result[i];
                result[i] = result[j];
                result[j] = compara;
            }
        }
    }

    //output de dados =========================================================================================================================================
    printf("\n");
    for (int i = 0 ; i <= 19 ; i++)
        printf("%d ", result[i]);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}