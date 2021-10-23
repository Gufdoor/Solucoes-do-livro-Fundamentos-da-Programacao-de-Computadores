/*=============================================================================================================================================================
    Exerc�cio 04 - Cap�tulo 05
    
    Fa�a um programa que receba um n�mero, calcule e mostre a tabuada desse n�mero.
    Exemplo:
        Digite um n�mero: 5
        5 � 0 = 0
        5 � 1 = 5
        5 � 2 = 10
        5 � 3 = 15
        5 � 4 = 20
        5 � 5 = 25
        5 � 6 = 30
        5 � 7 = 35
        5 � 8 = 40
        5 � 9 = 45
        5 � 10 = 50
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int controle = 0;   //controle das multiplica��es a serem executadas
    float resultado;    //resultado dos produtos
    float numero;       //numero a ser inserido pelo usu�rio

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    printf("Insira um n�mero qualquer: ");
    scanf("%f", &numero);

    //processamento e sa�da de dados ==========================================================================================================================
    while (controle < 11) {
        resultado = numero * controle;                              //c�lculo da opera��o de multiplica��o
        printf("\n%.2f * %d = %.2f", numero, controle, resultado);  //sa�da de dados
        controle++;
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}