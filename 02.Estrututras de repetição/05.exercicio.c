/*=============================================================================================================================================================
    Exercício 05 - Capítulo 05
    
    Faça um programa que mostre as tabuadas dos números de 1 a 10.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <conio.h>      //biblioteca para manipulação de caracteres na tela


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int controle = 0;   //controle das multiplicações a serem executadas
    float resultado;    //resultado dos produtos
    float numero = 1;   //valor inicial da tabuada

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");

    //processamento e saída de dados ==========================================================================================================================
    while (numero < 11) {

        while (controle < 11) {
            resultado = numero * controle;                              //cálculo da operação de multiplicação
            printf("\n%.2f * %d = %.2f", numero, controle, resultado);  //saída de dados
            controle++;
        }

        numero++;
        controle = 0;

        printf("\n\nPressione ENTER para continuar.\n\n");
        getch();        //função da biblioteca conio.h para congelar a tela enquanto o usuário não pressionar alguma tecla qualquer
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}