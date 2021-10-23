/*=============================================================================================================================================================
    Exercício 07 - Parte 02
    
    Elabore uma sub-rotina que leia um número não determinado de valores positivos e retorne a média aritmética
    desses valores. Terminar a entrada de dados com o valor zero.
=============================================================================================================================================================*/

//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>  //biblioteca padrão de entrada e saída
#include <locale.h> //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//demais funções ==============================================================================================================================================

//média aritmética ------------------------------------------------------------------------------------------------------------------------------------
float media()
{

    //declaração de variável
    int ordem = 1;
    float media = 0;
    float quantidade = 0;
    float resultado;
    float numero;

    //input de dados
    do {
        printf("\n%d - Insira um número qualquer ou 0 para finalizar: ", ordem);
        scanf("%f", &numero);

            //se número for igual a 0
            if (numero == 0) {
                break;
            }
        
        else {
            media += numero;
            ordem++;
            quantidade++;
        }

    } while (numero != 0);

    //processamento de dados
    resultado = media / quantidade;

    return resultado;

}

//programa principal ==========================================================================================================================================

int main()
{

    //declaração de variáveis
    float resultado;

    //definição para idioma
    setlocale(LC_ALL, "Portuguese");

    //processamento de dados ==================================================================================================================================
    printf("\nBem vindo :) \n\n");

    resultado = media();

    //output de dados =========================================================================================================================================
    printf("\nO resultado da operação é: %.2f", resultado);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0; //finalizar o programa
}