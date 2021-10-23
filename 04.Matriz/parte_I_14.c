/*=============================================================================================================================================================
    Exercício 14 - Parte 01
    
    Faça um programa que preencha uma matriz 2 ! 3, calcule e mostre a quantidade de elementos da matriz
    que não pertencem ao intervalo [5,15].
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int matriz[2][3];
    int quantidade = 0;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira 6 valores inteiros:\n");
    for (int i = 0 ; i <= 1 ; i++) {

        for (int j = 0 ; j <= 2 ; j++) 
            scanf("%i", &matriz[i][j]);
    }

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 1 ; i++) {

        for (int j = 0 ; j <= 2 ; j++) {
            
            if (matriz[i][j] < 5 || matriz[i][j] > 15)
                quantidade++;
        }
    }

    //output de dados =========================================================================================================================================
    printf("\n\nA quantidade de elementos da matriz que não pertencem ao intervalo [5,15] é: %i", quantidade);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}