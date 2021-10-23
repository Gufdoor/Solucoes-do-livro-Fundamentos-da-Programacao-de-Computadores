/*=============================================================================================================================================================
    Exerc�cio 07 - Parte 02
    
    Elabore uma sub-rotina que leia um n�mero n�o determinado de valores positivos e retorne a m�dia aritm�tica
    desses valores. Terminar a entrada de dados com o valor zero.
=============================================================================================================================================================*/

//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>  //biblioteca padr�o de entrada e sa�da
#include <locale.h> //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//demais fun��es ==============================================================================================================================================

//m�dia aritm�tica ------------------------------------------------------------------------------------------------------------------------------------
float media()
{

    //declara��o de vari�vel
    int ordem = 1;
    float media = 0;
    float quantidade = 0;
    float resultado;
    float numero;

    //input de dados
    do {
        printf("\n%d - Insira um n�mero qualquer ou 0 para finalizar: ", ordem);
        scanf("%f", &numero);

            //se n�mero for igual a 0
            if (numero == 0) {
                break;
            }
        
        else {
            media += numero;
            ordem++;
            quantidade++;
        }

    } while (numero != 0);

    //processamento de dados
    resultado = media / quantidade;

    return resultado;

}

//programa principal ==========================================================================================================================================

int main()
{

    //declara��o de vari�veis
    float resultado;

    //defini��o para idioma
    setlocale(LC_ALL, "Portuguese");

    //processamento de dados ==================================================================================================================================
    printf("\nBem vindo :) \n\n");

    resultado = media();

    //output de dados =========================================================================================================================================
    printf("\nO resultado da opera��o �: %.2f", resultado);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0; //finalizar o programa
}