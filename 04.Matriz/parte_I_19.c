/*=============================================================================================================================================================
    Exercício 19 - Parte 01
    
    Faça um programa que preencha uma matriz 8 ! 6 de inteiros, calcule e mostre a média dos elementos
    das linhas pares da matriz.
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
    int matriz[8][6];
    float media = 0, quantidade = 0;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    srand(time(NULL));      //função para definir a semente de rand com a quantidade de segundos desde a data de 01/01/1970 até o horário do seu sistema

    for (int i = 0 ; i <= 7 ; i++) {

        for (int j = 0 ; j <= 5 ; j++)
            matriz[i][j] = rand() % 100;   //função para gerar um valor aleatório dentro do intervalo de 0 e 100
    }

    printf("Os valores gerados aleatoriamente para a matriz são:\n");
    for (int i = 0 ; i <= 7 ; i++) {

        for (int j = 0 ; j <= 5 ; j++)
            printf(" %i", matriz[i][j]);   

        printf("\n");
    }

    printf("\nPressione ENTER para continuar.");
    getch();    //função para pausar a execução do programa

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 7 ; i++) {

        if (i % 2 == 0) {   //validar se a linha da matriz é par

            for (int j = 0 ; j <= 5 ; j++) {
                media += matriz[i][j];
                quantidade++;
            }

        }
    }

    media /= quantidade;

    //output de dados =========================================================================================================================================
    printf("\n\nA media dos valores é: %.2f", media);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}