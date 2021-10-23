/*=============================================================================================================================================================
    Exercício 18 - Parte 01
    
    Crie uma sub-rotina que gere e mostre os três primeiros números primos acima de 100.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//procedimentos ===============================================================================================================================================

    //três primeiros primos acima de 100 ----------------------------------------------------------------------------------------------------------------------
    void primos100 () {

        //declaração de variáveis
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

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //processamento de dados ==================================================================================================================================
    printf("\nBem vindo :) \n\n");

    primos100();

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}