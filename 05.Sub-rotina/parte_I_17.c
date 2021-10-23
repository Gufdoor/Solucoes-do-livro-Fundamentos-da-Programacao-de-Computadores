/*=============================================================================================================================================================
    Exercício 17 - Parte 01
    
    Elabore uma sub-rotina que calcule o máximo divisor comum (MDC) de dois números recebidos como
    parâmetros.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//procedimentos ===============================================================================================================================================

    //calcular potência ---------------------------------------------------------------------------------------------------------------------------------------
    void mdc (int n1, int n2) {
        
        //declaração de variáveis
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
        printf("\nO resultado será: %d", resultado);
    }

//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int n1, n2;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira dois valores, o primeiro será elevado ao segundo: ");
    scanf("%d %d", &n1, &n2);

    //processamento de dados ==================================================================================================================================
    mdc(n1, n2);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}