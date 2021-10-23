/*=============================================================================================================================================================
    Exerc�cio 16 - Cap�tulo 05
    
    Fa�a um programa que receba v�rias idades, calcule e mostre a m�dia das idades digitadas. Finalize digitando
    idade igual a zero.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int idade;              //vari�vel intermediadora que receber� a idade inserida pelo usu�rio
    int controle = 1;       //vari�vel que ir� ordenar a inser��o de valores
    float media = 0;        //vari�vel que receber� a m�dia das idades
    float nIdade = 0;       //vari�vel que ir� receber a quantidade de idades

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    while (idade != 0) {
        printf("Insira uma idade ou insira 0 para finalizar: ");
        scanf("%d", &idade);

            //valida��o da idade
            while (idade < 0) {
                printf("\nValor inv�lido. Tente novamente: ");
                scanf("%d", &idade);
                printf("\n");
            }

            //armazenar os valores das idades
            media += idade;
            nIdade++;

            //quando 0 for inserido
            if (idade == 0) {
                if (media == 0) {       //se o usu�rio n�o tiver inserido nenhuma idade anteriormente, n�o haver� m�dia a ser calculada
                    printf("\n\nVoc� n�o inseriu nenhum valor anteriormente.\n\n\n");
                    return(0);
                }

                nIdade--;
                break;      //comando para terminar a execu��o do la�o while
            }
    }

    //processamento de dados II ===============================================================================================================================
    media /= nIdade;

    //output de dados =========================================================================================================================================
    printf("\nA m�dia das idades � %.2f.", media);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}