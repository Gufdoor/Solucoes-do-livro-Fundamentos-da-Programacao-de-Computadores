/*=============================================================================================================================================================
    Exercício 09 - Parte 01
    
    Faça um programa que preencha uma matriz 3 ! 3 com números reais e outro valor numérico digitado pelo
    usuário. O programa deverá calcular e mostrar a matriz resultante da multiplicação do número digitado por
    cada elemento da matriz.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    float matriz[3][3];
    float multiplicador;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira 9 valores reais:\n");
    for (int i = 0 ; i <= 2 ; i++) {

        for (int j = 0 ; j <= 2 ; j++)
            scanf("%f", &matriz[i][j]);
    }

    printf("\nInsira um valor para servir de multiplicador: ");
    scanf("%f", &multiplicador);
        
    //processamento e output de dados =========================================================================================================================
    printf("\n\nO resultado das operações é: ");
    for (int i = 0 ; i <= 2 ; i++) {

        for (int j = 0 ; j <= 2 ; j++)
            printf("%.2f ", matriz[i][j] * multiplicador);
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}