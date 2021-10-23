/*=============================================================================================================================================================
    Exercício 04 - Parte 02
    
    Faça uma sub-rotina que receba como parâmetro o raio de uma esfera, calcule e mostre no programa principal
    o seu volume: v = 4/3 * R3.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//demais funções ==============================================================================================================================================

    //volume --------------------------------------------------------------------------------------------------------------------------------------------------
    float volume (float raio) {

        //declaração de variável
        float resultado;

        //processamento de dados
        resultado = 4/3 * raio * 3;

        return resultado;
    }

//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    float raio;
    float resultado;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira o raio de uma esfera: ");
    scanf("%f", &raio);
    printf("\n");

        //validação dos valores
        while (raio <= 0) {
            printf("Valor inválido. Insira o raio de uma esfera: ");
            scanf("%f", &raio);
            printf("\n");
        }

    //processamento de dados ==================================================================================================================================
    resultado = volume(raio);

    //output de dados =========================================================================================================================================
    printf("\nO resultado da operação é: %.2f", resultado);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}