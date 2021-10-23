/*=============================================================================================================================================================
    Exercício 17 - Parte 01
    
    Faça um programa que preencha e mostre a média dos elementos da diagonal principal de uma matriz
    10 ! 10.
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
    int matriz[10][10];
    float media = 0;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    srand(time(NULL));      //função para definir a semente de rand com a quantidade de segundos desde a data de 01/01/1970 até o horário do seu sistema

    for (int i = 0 ; i <= 9 ; i++) {

        for (int j = 0 ; j <= 9 ; j++)
            matriz[i][j] = rand() % 1000;   //função para gerar um valor aleatório dentro do intervalo de 0 e 1000
    }

    printf("Os valores gerados aleatoriamente para a matriz são:\n");
    for (int i = 0 ; i <= 9 ; i++) {

        for (int j = 0 ; j <= 9 ; j++)
            printf(" %i", matriz[i][j]);   

        printf("\n");
    }

    printf("\nPressione ENTER para continuar.");
    getch();    //função para pausar a execução do programa

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 9 ; i++) 
        media += matriz[i][i];

    media /= 10;

    //output de dados =========================================================================================================================================
    printf("\n\nA média dos elementos da diagonal principal é: %.2f", media);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}