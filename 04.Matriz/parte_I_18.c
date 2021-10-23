/*=============================================================================================================================================================
    Exerc�cio 18 - Parte 01
    
    Crie um programa que preencha uma matriz 5 ! 5 de n�meros reais, calcule e mostre a soma dos elementos
    da diagonal secund�ria.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <stdlib.h>     //biblioteca para controle de processos e convers�es (fun��o rand e srand)
#include <time.h>       //biblioteca para manipular a fun��o time
#include <conio.h>      //biblioteca para manipula��o de recursos na tela



//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    float matriz[5][5];
    float soma = 0;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    srand(time(NULL));      //fun��o para definir a semente de rand com a quantidade de segundos desde a data de 01/01/1970 at� o hor�rio do seu sistema

    for (int i = 0 ; i <= 4 ; i++) {

        for (int j = 0 ; j <= 4 ; j++)
            matriz[i][j] = (rand() % 100) * 0.25;    //fun��o para gerar um valor aleat�rio dentro do intervalo de 0 e 100
    }

    printf("Os valores gerados aleatoriamente para a matriz s�o:\n");
    for (int i = 0 ; i <= 4 ; i++) {

        for (int j = 0 ; j <= 4 ; j++)
            printf(" %.2f", matriz[i][j]);   

        printf("\n");
    }

    printf("\nPressione ENTER para continuar.");
    getch();    //fun��o para pausar a execu��o do programa

    //processamento de dados ==================================================================================================================================
    for (int i = 4 ; i > 0 ; i--)
        soma += matriz[i][i];

    //output de dados =========================================================================================================================================
    printf("\n\nA soma dos valores da diagonal secund�ria da matriz �: %.2f", soma);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}