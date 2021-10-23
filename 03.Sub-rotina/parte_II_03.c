/*=============================================================================================================================================================
    Exerc�cio 03 - Parte 02
    
    Elabore uma sub-rotina que receba dois n�meros como par�metros e retorne 0, se o primeiro n�mero for
    divis�vel pelo segundo n�mero. Caso contr�rio, dever� retornar o pr�ximo divisor.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//demais fun��es ==============================================================================================================================================

    //divis�o -------------------------------------------------------------------------------------------------------------------------------------------------
    int divisao (int n1, int n2) {

        //declara��o de vari�vel
        int resultado;

        //processamento de dados
        resultado = n1 % n2;       

        if (resultado == 0)
            resultado = 0;

        else {
            while (resultado != 0) {
                n2++;
                resultado = n1 % n2;
            }

            resultado = n2;
        }

        return resultado;
    }

//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int n1, n2;
    int resultado;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira dois n�meros inteiros n�o neutros, o primeiro ser� dividido pelo segundo: ");
    scanf("%d %d", &n1, &n2);
    printf("\n");

        //valida��o dos valores
        while (n1 == 0 || n2 == 0) {
            printf("Valor inv�lido. Insira dois n�meros inteiros n�o neutros: ");
            scanf("%d %d", &n1, &n2);
            printf("\n");
        }

    //processamento de dados ==================================================================================================================================
    resultado = divisao(n1, n2);

    //output de dados =========================================================================================================================================
    printf("\nO resultado da opera��o �: %d", resultado);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}