/*=============================================================================================================================================================
    Exerc�cio 06 - Parte 02
    
    Crie uma sub-rotina que receba como par�metro a altura (alt) e o sexo de uma pessoa e retorne seu peso ideal.
    Para homens, dever� calcular o peso ideal usando a f�rmula: peso ideal = 72.7 *alt ? 58; para mulheres: peso
    ideal = 62.1 *alt ? 44.7.
=============================================================================================================================================================*/

//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>  //biblioteca padr�o de entrada e sa�da
#include <locale.h> //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//demais fun��es ==============================================================================================================================================

//c�lculo do peso ideal ------------------------------------------------------------------------------------------------------------------------------------
float pesoIdeal( )
{

    //declara��o de vari�vel
    float resultado;
    float altura;
    char sexo;

    //input de dados
    printf("\nInsira uma altura: ");
    scanf("%f", &altura);

        //condi��o altura
        while (altura <= 0) {
            printf("\nValor inv�lido. Insira uma altura: ");
            scanf("%f", &altura);
            printf("\n");
        }

    printf("\nInsira um sexo (M - masculino | F - Feminino): ");
    scanf(" %c", &sexo);

        //condi��o sexo
        while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
            printf("\nValor inv�lido. Insira um sexo (M - masculino | F - Feminino): ");
            scanf(" %c", &sexo);
            printf("\n");
        }

    //processamento de dados
    if (sexo == 'M' || sexo == 'm') {
        resultado = (72.7 * altura) - 58; 
    }

    else if (sexo == 'F' || sexo == 'f') {
        resultado = (62.1 * altura) - 44.7;
    }

    return resultado;

}

//programa principal ==========================================================================================================================================

int main()
{

    //declara��o de vari�veis
    float ideal;

    //defini��o para idioma
    setlocale(LC_ALL, "Portuguese");

    //processamento de dados ==================================================================================================================================
    printf("\nBem vindo :) \n\n");

    ideal = pesoIdeal();

    //output de dados =========================================================================================================================================
    printf("\nO resultado da opera��o �: %.2f", ideal);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0; //finalizar o programa
}