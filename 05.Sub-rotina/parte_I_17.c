/*=============================================================================================================================================================
    Exerc�cio 17 - Parte 01
    
    Elabore uma sub-rotina que calcule o m�ximo divisor comum (MDC) de dois n�meros recebidos como
    par�metros.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//procedimentos ===============================================================================================================================================

    //calcular pot�ncia ---------------------------------------------------------------------------------------------------------------------------------------
    void mdc (int n1, int n2) {
        
        //declara��o de vari�veis
        int resultado, parametro;

        //processamento de dados
        while (n1 > 0) {
            if (n2 > n1) {
                parametro = n1;
                n1 = n2;
                n2 = parametro;
            }

            n1 -= n2;
        }

        resultado = n2;

        //output de dados 
        printf("\nO resultado ser�: %d", resultado);
    }

//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int n1, n2;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira dois valores, o primeiro ser� elevado ao segundo: ");
    scanf("%d %d", &n1, &n2);

    //processamento de dados ==================================================================================================================================
    mdc(n1, n2);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}