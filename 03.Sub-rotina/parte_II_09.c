/*=============================================================================================================================================================
    Exerc�cio 09 - Parte 02
    
    Crie uma sub-rotina que receba como par�metro um valor inteiro e positivo e retorne a soma dos divisores
    desse valor.
=============================================================================================================================================================*/

//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>  //biblioteca padr�o de entrada e sa�da
#include <locale.h> //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//demais fun��es ==============================================================================================================================================

//soma dos divisores de um n�mero -----------------------------------------------------------------------------------------------------------------------------
int somaDivisores(int numero)
{

    //declara��o de vari�vel
    int resto;
    int comparador = 1;
    int divisores = 0;

    //processamento de dados
    for (numero ; numero >= comparador ; comparador++) {
        resto = numero % comparador;

        if (resto == 0) 
            divisores += comparador;
    }

    return divisores;

}

//programa principal ==========================================================================================================================================

int main()
{

    //declara��o de vari�veis
    int resultado;
    int numero;

    //defini��o para idioma
    setlocale(LC_ALL, "Portuguese");

    //input de dados
    printf("\nBem vindo :) \n\n");

    printf("\nInsira um n�mero inteiro e positivo: ");
    scanf("%d", &numero);
    printf("\n");

        //valida��o do n�mero
        while (numero <= 0) {
            printf("\nValor inv�lido. Insira um n�mero inteiro e positivo: ");
            scanf("%d", &numero);
            printf("\n");
        }

    //processamento de dados ==================================================================================================================================
    resultado = somaDivisores(numero);

    //output de dados =========================================================================================================================================
    printf("\nO resultado da opera��o �: %d", resultado);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0; //finalizar o programa
}