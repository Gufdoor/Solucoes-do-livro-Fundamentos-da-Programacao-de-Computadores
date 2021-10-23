/*=============================================================================================================================================================
    Exercício 04 - Parte 01
    
    Faça um programa que preencha um vetor com quinze elementos inteiros e verifique a existência de elementos
    iguais a 30, mostrando as posições em que apareceram.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int vetor[14];
    int indice = 15;     //variável que armazenará o índice da posição com um valor igual a 30

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    for (int i = 0 ; i <= 14 ; i++) {           //preencher o vetor
        printf("%d - Insira um número inteiro: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\n");

    //processamento e output de dados =========================================================================================================================
    for (int i = 0 ; i <=14 ; i++) {            //percorrer o vetor e identificar valores iguais a 30
        if (vetor[i] == 30) {
            indice = i;
            printf("%d ", indice);
        }
    }

    if (indice == 15)
        printf("Não há valores iguais a 30.");

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}