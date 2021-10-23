/*=============================================================================================================================================================
    Exerc�cio 08 - Parte 02
    
    Fa�a uma sub-rotina que receba um valor inteiro e positivo, calcule e mostre seu fatorial.
=============================================================================================================================================================*/

//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>  //biblioteca padr�o de entrada e sa�da
#include <locale.h> //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//demais fun��es ==============================================================================================================================================

//fatorial ----------------------------------------------------------------------------------------------------------------------------------------------------
int fatorial()
{

    //declara��o de vari�vel
    int fatorial;
    int numero;

    //input de dados
    printf("\nInsira um n�mero inteiro e positivo: ");
    scanf("%d", &numero);
    printf("\n");

        //valida��o do n�mero
        while (numero <= 0) {
            printf("\nValor inv�lido. Insira um n�mero inteiro e positivo: ");
            scanf("%d", &numero);
            printf("\n");
        }

    //processamento de dados
    for (fatorial = 1 ; numero != 0 ; numero--) 
        fatorial *= numero;

    return fatorial;

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

    resultado = fatorial();

    //output de dados =========================================================================================================================================
    printf("\nO resultado da opera��o �: %.2f", resultado);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0; //finalizar o programa
}