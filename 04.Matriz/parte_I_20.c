/*=============================================================================================================================================================
    Exercício 20 - Parte 01
    
    Elabore um programa que preencha uma matriz 5 ! 5 com números reais e encontre o maior valor da
    matriz. A seguir, o programa deverá multiplicar cada elemento da diagonal principal pelo maior valor
    encontrado e mostrar a matriz resultante após as multiplicações.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <stdlib.h>     //biblioteca para controle de processos e conversões (função rand e srand)
#include <time.h>       //biblioteca para manipular a função time
#include <conio.h>      //biblioteca para manipulação de recursos na tela


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    float matriz[5][5];
    float maior = 0;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    srand(time(NULL));      //função para definir a semente de rand com a quantidade de segundos desde a data de 01/01/1970 até o horário do seu sistema

    for (int i = 0 ; i <= 4 ; i++) {

        for (int j = 0 ; j <= 4 ; j++)
            matriz[i][j] = (rand() % 100) * 0.25;   //função para gerar um valor aleatório dentro do intervalo de 0 e 100
    }

    printf("Os valores gerados aleatoriamente para a matriz são:\n");
    for (int i = 0 ; i <= 4 ; i++) {

        for (int j = 0 ; j <= 4 ; j++) {
            printf(" %.2f", matriz[i][j]);   

            if (matriz[i][j] > maior)   //identificar o maior valor da matriz
                maior = matriz[i][j];
        }

        printf("\n");
    }

    printf("\nPressione ENTER para continuar.");
    getch();    //função para pausar a execução do programa

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 4 ; i++) 
        matriz[i][i] = matriz[i][i] * maior;

    //output de dados =========================================================================================================================================
    printf("\n\nA matriz resultante é:\n");
    
    for (int i = 0 ; i <= 4 ; i++) {

        for (int j = 0 ; j <= 4 ; j++) 
            printf(" %.2f", matriz[i][j]);   

        printf("\n");
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}