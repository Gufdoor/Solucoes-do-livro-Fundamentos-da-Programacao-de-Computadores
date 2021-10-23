/*=============================================================================================================================================================
    Exercício 02 - Parte 02
    
    Crie uma sub-rotina que receba três números inteiros como parâmetros, representando horas, minutos e segundos,
    e os converta em segundos. Exemplo: 2h, 40min e 10s correspondem a 9.610 segundos.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//demais funções ==============================================================================================================================================

    //segundos ------------------------------------------------------------------------------------------------------------------------------------------------
    int segundos (int n1, int n2, int n3) {
        n1 *= 3600;
        n2 *= 60;
        n1 += n2 + n3;      //somatória final

        return n1;
    }

//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int n1, n2, n3;
    int resultado;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma quantidade para horas, minutos e segundos, respectivamente: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("\n");

        //validação dos valores
        while (n1 < 0 || n2 < 0 || n3 < 0) {
            printf("Valor inválido. Insira uma quantidade para horas, minutos e segundos, respectivamente: ");
            scanf("%d %d %d", &n1, &n2, &n3);
            printf("\n");
        }

    //processamento de dados ==================================================================================================================================
    resultado = segundos(n1, n2, n3);

    //output de dados =========================================================================================================================================
    printf("\nO resultado da operação é: %d", resultado);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}