/*=============================================================================================================================================================
    Exercício 22 - Parte 01
    
    Faça um programa que leia um vetor A de dez posições. Em seguida, compacte o vetor, retirando os
    valores nulos e negativos. Armazene esse resultado no vetor B. Mostre o vetor B. (Lembre-se: o vetor B
    pode não ser completamente preenchido.)
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int A[9], B[9];
    int g = 0;      //variável que definirá as posições que receberão os valores de A em B

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira 10 valores inteiros para o vetor A:\n");
    for (int i = 0 ; i <= 9 ; i++) 
        scanf("%i", &A[i]);

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 9 ; i++) {        //armazenar os valores nulos e negativos de A em B
        if (A[i] <= 0) {
            B[g] = A[i];
            g++;
        }
    }

    //output de dados =========================================================================================================================================
    printf("\n\nOs valores negativos e nulos no vetor A são: ");
    for (int i = 0 ; i < g ; i++) 
        printf("%i ", B[i]);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}