/*=============================================================================================================================================================
    Exerc�cio 02 - Parte 02
    
    Crie uma sub-rotina que receba tr�s n�meros inteiros como par�metros, representando horas, minutos e segundos,
    e os converta em segundos. Exemplo: 2h, 40min e 10s correspondem a 9.610 segundos.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//demais fun��es ==============================================================================================================================================

    //segundos ------------------------------------------------------------------------------------------------------------------------------------------------
    int segundos (int n1, int n2, int n3) {
        n1 *= 3600;
        n2 *= 60;
        n1 += n2 + n3;      //somat�ria final

        return n1;
    }

//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int n1, n2, n3;
    int resultado;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma quantidade para horas, minutos e segundos, respectivamente: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("\n");

        //valida��o dos valores
        while (n1 < 0 || n2 < 0 || n3 < 0) {
            printf("Valor inv�lido. Insira uma quantidade para horas, minutos e segundos, respectivamente: ");
            scanf("%d %d %d", &n1, &n2, &n3);
            printf("\n");
        }

    //processamento de dados ==================================================================================================================================
    resultado = segundos(n1, n2, n3);

    //output de dados =========================================================================================================================================
    printf("\nO resultado da opera��o �: %d", resultado);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}