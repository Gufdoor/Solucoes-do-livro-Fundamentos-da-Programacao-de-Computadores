/*=============================================================================================================================================================
    Exerc�cio 12 - Cap�tulo 05
    
    Fa�a um programa que receba dez n�meros inteiros e mostre a quantidade de n�meros primos dentre os
    n�meros que foram digitados.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int controle;                     //limitante da quantidade de n�meros a serem inseridos
    int intermediador;                //vari�vel que ir� receber os valores inseridos pelo usu�rio
    int result1, result2;             //var�veis para receber valores para compara��o
    int sPrimos = 0;                  //vari�vel que receber� os respectivos resultados

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    for (controle = 1 ; controle < 11 ; controle++) {       //defini��o de condi��o para limitar o la�o de repeti��o
        printf("Insira um n�mero inteiro positivo qualquer: ");
        scanf("%d", &intermediador);

            //valida��o do n�mero inserido
            while (intermediador <= 0) {
                printf("\nValor inv�lido. Insira um novo n�mero: ");
                scanf("%d", &intermediador);
                printf("\n");
            }

        result1 = intermediador % 2;    //valor a ser usado para compara��o e categoriza��o de n�meros pares 
        result2 = intermediador % 3;    //valor a ser usado para compara��o e categoriza��o de n�meros �mpares      

        //condi��o para n�meros primos
        if (result1 != 0 && result2 != 0 && intermediador != 1)  {
            sPrimos++;
        }
        if (intermediador == 2)
            sPrimos++;

        if (intermediador == 3)
            sPrimos++;
    }

    //output de dados =========================================================================================================================================
    printf("\nTemos %d n�meros primos dentre o total de 10.", sPrimos);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}