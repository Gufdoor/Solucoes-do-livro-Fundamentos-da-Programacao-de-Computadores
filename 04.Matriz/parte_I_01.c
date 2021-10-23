/*=============================================================================================================================================================
    Exercício 01 - Parte 01
    
    Faça um programa que preencha uma matriz 3 ! 5 com números inteiros, calcule e mostre a quantidade de
    elementos entre 15 e 20.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)




//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int matriz[3][5];
    int quantidade = 0;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");

    printf("Insira quinze valores:\n");
    
    for (int i = 0 ; i <= 2 ; i++) {        //percorrer e preencher a matriz
        for (int j = 0 ; j <= 4 ; j++) 
            scanf("%i", &matriz[i][j]);
    }

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 2 ; i++) {        
        for (int j = 0 ; j <= 4 ; j++) {
            if (matriz[i][j] > 15 && matriz[i][j] < 20)
                quantidade++;
        }
    }

    //output de dados =========================================================================================================================================
    printf("\n\nA quantidade de elementos entre 15 e 20 é: %i", quantidade);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}