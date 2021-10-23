/*=============================================================================================================================================================
    Exerc�cio 04 - Parte 02
    
    Fa�a uma sub-rotina que receba como par�metro o raio de uma esfera, calcule e mostre no programa principal
    o seu volume: v = 4/3 * R3.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//demais fun��es ==============================================================================================================================================

    //volume --------------------------------------------------------------------------------------------------------------------------------------------------
    float volume (float raio) {

        //declara��o de vari�vel
        float resultado;

        //processamento de dados
        resultado = 4/3 * raio * 3;

        return resultado;
    }

//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    float raio;
    float resultado;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira o raio de uma esfera: ");
    scanf("%f", &raio);
    printf("\n");

        //valida��o dos valores
        while (raio <= 0) {
            printf("Valor inv�lido. Insira o raio de uma esfera: ");
            scanf("%f", &raio);
            printf("\n");
        }

    //processamento de dados ==================================================================================================================================
    resultado = volume(raio);

    //output de dados =========================================================================================================================================
    printf("\nO resultado da opera��o �: %.2f", resultado);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}