/*=============================================================================================================================================================
    Exerc�cio 09 - Parte 01
    
    Fa�a um programa que preencha uma matriz 3 ! 3 com n�meros reais e outro valor num�rico digitado pelo
    usu�rio. O programa dever� calcular e mostrar a matriz resultante da multiplica��o do n�mero digitado por
    cada elemento da matriz.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    float matriz[3][3];
    float multiplicador;

    //defini��o para idioma
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
    printf("\n\nO resultado das opera��es �: ");
    for (int i = 0 ; i <= 2 ; i++) {

        for (int j = 0 ; j <= 2 ; j++)
            printf("%.2f ", matriz[i][j] * multiplicador);
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}