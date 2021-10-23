/*=============================================================================================================================================================
    Exerc�cio 24 - Cap�tulo 05
    
    Fa�a um programa que receba um conjunto de valores inteiros e positivos, calcule e mostre o maior e o
    menor valor do conjunto. Considere que:

        - para encerrar a entrada de dados, deve ser digitado o valor zero;
        - para valores negativos, deve ser enviada uma mensagem;
        - os valores negativos ou iguais a zero n�o entrar�o nos c�lculos.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int maior = 0, menor = 999;
    int intermediador = 1;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    while (intermediador != 0) {
        printf("Insira um n�mero inteiro e positivo: ");
        scanf("%d", &intermediador);

            //valida��o do intermediador
            while (intermediador < 0) {
                printf("\nValor inv�lido. Tente novamente: ");
                scanf("%d", &intermediador);
                printf("\n");
            }

            //intermediador = 0
            if (intermediador == 0) {
                break;
            }

            //categoriza��o
            if (intermediador > maior) 
                maior = intermediador;

            else if (intermediador < menor) 
                menor = intermediador;
    }

    //output de dados =========================================================================================================================================
    if (maior != 0) {
        printf("\nMaior n�mero = %d\nMenor n�mero = %d", maior, menor);
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}