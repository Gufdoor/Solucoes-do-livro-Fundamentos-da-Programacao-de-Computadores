/*=============================================================================================================================================================
    Exerc�cio 05 - Parte 02
    
    Fa�a uma sub-rotina que receba um valor inteiro e verifique se ele � positivo ou negativo.
=============================================================================================================================================================*/

//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>  //biblioteca padr�o de entrada e sa�da
#include <locale.h> //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <string.h> //biblioteca para utilizar fun��es relativas � string


//demais fun��es ==============================================================================================================================================

//positivo ou negativo ------------------------------------------------------------------------------------------------------------------------------------
void positivoNegativo(int numero)
{

    //declara��o de vari�vel
    char resultado[ ] = {""};

    //processamento de dados
    if (numero > 0)
        strcpy(resultado, "Positivo");

    else if (numero < 0)
        strcpy(resultado, "Negativo");

    else if (numero == 0)
        strcpy(resultado, "Neutro");

    //output de dados 
    printf("\nO resultado da opera��o �: '%s'", resultado);

}

//programa principal ==========================================================================================================================================

int main()
{

    //declara��o de vari�veis
    int numero;

    //defini��o para idioma
    setlocale(LC_ALL, "Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");

    printf("Insira um n�mero inteiro: ");
    scanf("%d", &numero);
    printf("\n");

    //processamento de dados ==================================================================================================================================
    positivoNegativo(numero);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0; //finalizar o programa
}