/*=============================================================================================================================================================
    Exerc�cio 12 - Parte 01
    
    Crie uma sub-rotina que receba como par�metro dois valores X e Z, calcule e retorne X^z sem utilizar
    fun��es ou operadores de pot�ncia prontos.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)



//fun��es secund�rias =========================================================================================================================================

    //calcular pot�ncia ---------------------------------------------------------------------------------------------------------------------------------------
    float potencia (float x, float z) {

        //declara��o de vari�veis
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

    //declara��o de vari�veis
    float resultado;
    float x, z;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");

    printf("Insira dois valores, o primeiro ser� elevado ao segundo: ");
    scanf("%f %f", &x, &z);

    //processamento de dados ==================================================================================================================================
    resultado = potencia(x, z);

    //output de dados =========================================================================================================================================
    printf("\nO resultado ser�: %.2f", resultado);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}