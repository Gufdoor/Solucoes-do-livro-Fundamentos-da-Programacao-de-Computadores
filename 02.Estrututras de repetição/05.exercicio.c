/*=============================================================================================================================================================
    Exerc�cio 05 - Cap�tulo 05
    
    Fa�a um programa que mostre as tabuadas dos n�meros de 1 a 10.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <conio.h>      //biblioteca para manipula��o de caracteres na tela


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int controle = 0;   //controle das multiplica��es a serem executadas
    float resultado;    //resultado dos produtos
    float numero = 1;   //valor inicial da tabuada

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");

    //processamento e sa�da de dados ==========================================================================================================================
    while (numero < 11) {

        while (controle < 11) {
            resultado = numero * controle;                              //c�lculo da opera��o de multiplica��o
            printf("\n%.2f * %d = %.2f", numero, controle, resultado);  //sa�da de dados
            controle++;
        }

        numero++;
        controle = 0;

        printf("\n\nPressione ENTER para continuar.\n\n");
        getch();        //fun��o da biblioteca conio.h para congelar a tela enquanto o usu�rio n�o pressionar alguma tecla qualquer
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}