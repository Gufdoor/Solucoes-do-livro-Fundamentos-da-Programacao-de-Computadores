/*=============================================================================================================================================================
    Exercício 12 - Parte 01
    
    Crie uma sub-rotina que receba como parâmetro dois valores X e Z, calcule e retorne X^z sem utilizar
    funções ou operadores de potência prontos.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)



//funções secundárias =========================================================================================================================================

    //calcular potência ---------------------------------------------------------------------------------------------------------------------------------------
    float potencia (float x, float z) {

        //declaração de variáveis
        float resultado;
        float x2;

        //processamento de dados
        x2 = x;

        for (z-- ; z > 0 ; z--) {
            x *= x2;
        }

        resultado = x;

        return resultado;
    }

//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    float resultado;
    float x, z;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");

    printf("Insira dois valores, o primeiro será elevado ao segundo: ");
    scanf("%f %f", &x, &z);

    //processamento de dados ==================================================================================================================================
    resultado = potencia(x, z);

    //output de dados =========================================================================================================================================
    printf("\nO resultado será: %.2f", resultado);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}