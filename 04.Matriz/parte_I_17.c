/*=============================================================================================================================================================
    Exerc�cio 17 - Parte 01
    
    Fa�a um programa que preencha e mostre a m�dia dos elementos da diagonal principal de uma matriz
    10 ! 10.
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
    int matriz[10][10];
    float media = 0;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    srand(time(NULL));      //fun��o para definir a semente de rand com a quantidade de segundos desde a data de 01/01/1970 at� o hor�rio do seu sistema

    for (int i = 0 ; i <= 9 ; i++) {

        for (int j = 0 ; j <= 9 ; j++)
            matriz[i][j] = rand() % 1000;   //fun��o para gerar um valor aleat�rio dentro do intervalo de 0 e 1000
    }

    printf("Os valores gerados aleatoriamente para a matriz s�o:\n");
    for (int i = 0 ; i <= 9 ; i++) {

        for (int j = 0 ; j <= 9 ; j++)
            printf(" %i", matriz[i][j]);   

        printf("\n");
    }

    printf("\nPressione ENTER para continuar.");
    getch();    //fun��o para pausar a execu��o do programa

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 9 ; i++) 
        media += matriz[i][i];

    media /= 10;

    //output de dados =========================================================================================================================================
    printf("\n\nA m�dia dos elementos da diagonal principal �: %.2f", media);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}