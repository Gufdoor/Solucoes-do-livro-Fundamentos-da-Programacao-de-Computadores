/*=============================================================================================================================================================
    Exercício 13 - Parte 01
    
    Elabore um programa que: preencha uma matriz 6 ! 4; recalcule a matriz digitada, onde cada linha deverá
    ser multiplicada pelo maior elemento da linha em questão; mostre a matriz resultante.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int matriz[6][4], result[6][4];
    int maior = 0;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira 24 valores inteiros:\n");
    for (int i = 0 ; i <= 5 ; i++) {

        for (int j = 0 ; j <= 3 ; j++)
            scanf("%i", &matriz[i][j]);
    }

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 5 ; i++) {            //percorrer as linhas da matriz

        for (int g = 0 ; g <= 3 ; g++) {        //percorrer a linha i e identificar o maior valor
            if (matriz[i][g] > maior)
                maior = matriz[i][g];
        }

        for (int j = 0 ; j <= 3 ; j++) 
            result[i][j] = matriz[i][j] * maior;
    }

    //output de dados =========================================================================================================================================
    printf("\n\nOs resultados das operações são: ");
    for (int i = 0 ; i <= 5 ; i++) {

        for (int j = 0 ; j <= 3 ; j++)
            printf("%i ", result[i][j]);
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}