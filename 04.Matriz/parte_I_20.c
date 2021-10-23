/*=============================================================================================================================================================
    Exerc�cio 20 - Parte 01
    
    Elabore um programa que preencha uma matriz 5 ! 5 com n�meros reais e encontre o maior valor da
    matriz. A seguir, o programa dever� multiplicar cada elemento da diagonal principal pelo maior valor
    encontrado e mostrar a matriz resultante ap�s as multiplica��es.
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
    float maior = 0;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    srand(time(NULL));      //fun��o para definir a semente de rand com a quantidade de segundos desde a data de 01/01/1970 at� o hor�rio do seu sistema

    for (int i = 0 ; i <= 4 ; i++) {

        for (int j = 0 ; j <= 4 ; j++)
            matriz[i][j] = (rand() % 100) * 0.25;   //fun��o para gerar um valor aleat�rio dentro do intervalo de 0 e 100
    }

    printf("Os valores gerados aleatoriamente para a matriz s�o:\n");
    for (int i = 0 ; i <= 4 ; i++) {

        for (int j = 0 ; j <= 4 ; j++) {
            printf(" %.2f", matriz[i][j]);   

            if (matriz[i][j] > maior)   //identificar o maior valor da matriz
                maior = matriz[i][j];
        }

        printf("\n");
    }

    printf("\nPressione ENTER para continuar.");
    getch();    //fun��o para pausar a execu��o do programa

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 4 ; i++) 
        matriz[i][i] = matriz[i][i] * maior;

    //output de dados =========================================================================================================================================
    printf("\n\nA matriz resultante �:\n");
    
    for (int i = 0 ; i <= 4 ; i++) {

        for (int j = 0 ; j <= 4 ; j++) 
            printf(" %.2f", matriz[i][j]);   

        printf("\n");
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}