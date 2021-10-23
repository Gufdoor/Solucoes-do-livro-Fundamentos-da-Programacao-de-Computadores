/*=============================================================================================================================================================
    Exercício 03 - Parte 02
    
    Elabore uma sub-rotina que receba dois números como parâmetros e retorne 0, se o primeiro número for
    divisível pelo segundo número. Caso contrário, deverá retornar o próximo divisor.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//demais funções ==============================================================================================================================================

    //divisão -------------------------------------------------------------------------------------------------------------------------------------------------
    int divisao (int n1, int n2) {

        //declaração de variável
        int resultado;

        //processamento de dados
        resultado = n1 % n2;       

        if (resultado == 0)
            resultado = 0;

        else {
            while (resultado != 0) {
                n2++;
                resultado = n1 % n2;
            }

            resultado = n2;
        }

        return resultado;
    }

//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int n1, n2;
    int resultado;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira dois números inteiros não neutros, o primeiro será dividido pelo segundo: ");
    scanf("%d %d", &n1, &n2);
    printf("\n");

        //validação dos valores
        while (n1 == 0 || n2 == 0) {
            printf("Valor inválido. Insira dois números inteiros não neutros: ");
            scanf("%d %d", &n1, &n2);
            printf("\n");
        }

    //processamento de dados ==================================================================================================================================
    resultado = divisao(n1, n2);

    //output de dados =========================================================================================================================================
    printf("\nO resultado da operação é: %d", resultado);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}