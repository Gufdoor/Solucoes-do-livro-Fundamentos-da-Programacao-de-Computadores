/*=============================================================================================================================================================
    Exercício 10 - Parte 01
    
    Faça um programa que preencha um vetor com dez números inteiros e um segundo vetor com cinco números
    inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor resultante será composto pela
    soma de cada número par do primeiro vetor somado a todos os números do segundo vetor. O segundo
    vetor resultante será composto pela quantidade de divisores que cada número ímpar do primeiro vetor
    tem no segundo vetor.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int dez[9];
    int cinco[4];
    int result1[9];
    int result2[9];

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira dez números inteiros em sequência:\n");
    for (int i = 0 ; i <= 9 ; i++) 
        scanf("%d", &dez[i]);

    printf("\n\nInsira cinco números inteiros em sequência:\n");
    for (int i = 0 ; i <= 4 ; i++)
        scanf("%d", &cinco[i]);

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 9 ; i++) {    //soma dos números pares

        if (dez[i] % 2 == 0) {
            result1[i] = dez[i];

            for (int j = 0 ; j <= 4 ; j++) {
                result1[i] +=  cinco[j];
            } 
        }

        else 
            result1[i] = NULL;  //a atribuição NULL servirá de parâmetro de comparação para excluir os números que não são pares na hora de printar o resultado
    }

    for (int i = 0 ; i <= 9 ; i++) {    //divisores dos números ímpares

        if (dez[i] % 2 != 0) {
            result2[i] = 0;

            for (int j = 0 ; j <= 4 ; j++) {
                
                if (dez[i] % cinco[j] == 0 && dez[i] != 1)
                    result2[i]++;

            } 
        }

        else 
            result2[i] = 0;
    }

    //output de dados =========================================================================================================================================
    printf("\n\nO resultado da primeira operação é: ");
    for (int i = 0 ; i <= 9 ; i++) {
        if (result1[i] != NULL)
        printf("%d ", result1[i]);
    }

    printf("\nO resultado da segunda operação é: ");
    for (int i = 0 ; i <= 9 ; i++) {
        printf("%d ", result2[i]);
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}