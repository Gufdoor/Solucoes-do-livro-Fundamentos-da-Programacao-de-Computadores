/*=============================================================================================================================================================
    Exerc�cio 18 - Parte 01
    
    Crie uma sub-rotina que gere e mostre os tr�s primeiros n�meros primos acima de 100.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//procedimentos ===============================================================================================================================================

    //tr�s primeiros primos acima de 100 ----------------------------------------------------------------------------------------------------------------------
    void primos100 () {

        //declara��o de vari�veis
        int incial = 100;
        int controle = 0;

        //processamento de dados
        while (controle < 3) {

            if ((incial % 2) != 0 && (incial % 3) != 0) {
                printf("\n%d", incial);
                controle++;
            }

            incial++;
        }
    }

//programa principal ==========================================================================================================================================

int main () {

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //processamento de dados ==================================================================================================================================
    printf("\nBem vindo :) \n\n");

    primos100();

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}