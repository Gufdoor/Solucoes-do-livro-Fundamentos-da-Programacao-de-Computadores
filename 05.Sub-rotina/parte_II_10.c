/*=============================================================================================================================================================
    Exerc�cio 10 - Parte 02
    
    Elabore uma sub-rotina que receba como par�metro um valor N (inteiro e maior ou igual a 1) e determine
    o valor da sequ�ncia S, descrita a seguir:
    
        S = 1 + 1/2 + 1/3...

    OBSERVA��O: A quantidade de parcelas que comp�e S � igual a N.
=============================================================================================================================================================*/

//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>  //biblioteca padr�o de entrada e sa�da
#include <locale.h> //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//demais fun��es ==============================================================================================================================================

//soma dos divisores de um n�mero -----------------------------------------------------------------------------------------------------------------------------
float somaDivisores(int numero)
{

    //declara��o de vari�vel
    float s = 0;
    float dividendo = 1;

    //processamento de dados
    for (numero ; numero > 0 ; numero--) {
        s += 1 / dividendo;
        dividendo++;
    }

    return s;

}

//programa principal ==========================================================================================================================================

int main()
{

    //declara��o de vari�veis
    float resultado;
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
    printf("\nO resultado da opera��o �: %.2f", resultado);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0; //finalizar o programa
}