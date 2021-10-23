/*=============================================================================================================================================================
    Exerc�cio 01 - Parte 02
    
    Fa�a uma sub-rotina que receba um n�mero inteiro e positivo N como par�metro e retorne a soma dos n�meros
    inteiros existentes entre o n�mero 1 e N (inclusive).
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//demais fun��es ==============================================================================================================================================

    //soma ----------------------------------------------------------------------------------------------------------------------------------------------------
    int soma (int *numero) {
        int ref = 1;            //vari�vel que servir� de base para as somas
        int result = *numero;

        for (ref ; ref <= *numero ; ref++) {     //ciclo de repeti��es para somar valores dentro do intervalo
            result += ref;
        }

        return result;
    }

//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int numero;         //vari�vel que receber� o n�mero pelo usu�rio
    int resultado;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira um n�mero inteiro e positivo: ");
    scanf("%d", &numero);
    printf("\n");

        //valida��o do n�mero
        while (numero <= 0) {
            printf("Valor inv�lido. Insira um n�mero inteiro e positivo: ");
            scanf("%d", &numero);
            printf("\n");
        }

    //processamento de dados ==================================================================================================================================
    resultado = soma(&numero);     

    //output de dados =========================================================================================================================================
    printf("\nO resultado da opera��o �: %d", resultado);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}