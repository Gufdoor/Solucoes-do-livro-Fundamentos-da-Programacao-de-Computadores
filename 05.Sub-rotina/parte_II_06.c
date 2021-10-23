/*=============================================================================================================================================================
    Exercício 06 - Parte 02
    
    Crie uma sub-rotina que receba como parâmetro a altura (alt) e o sexo de uma pessoa e retorne seu peso ideal.
    Para homens, deverá calcular o peso ideal usando a fórmula: peso ideal = 72.7 *alt ? 58; para mulheres: peso
    ideal = 62.1 *alt ? 44.7.
=============================================================================================================================================================*/

//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>  //biblioteca padrão de entrada e saída
#include <locale.h> //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//demais funções ==============================================================================================================================================

//cálculo do peso ideal ------------------------------------------------------------------------------------------------------------------------------------
float pesoIdeal( )
{

    //declaração de variável
    float resultado;
    float altura;
    char sexo;

    //input de dados
    printf("\nInsira uma altura: ");
    scanf("%f", &altura);

        //condição altura
        while (altura <= 0) {
            printf("\nValor inválido. Insira uma altura: ");
            scanf("%f", &altura);
            printf("\n");
        }

    printf("\nInsira um sexo (M - masculino | F - Feminino): ");
    scanf(" %c", &sexo);

        //condição sexo
        while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
            printf("\nValor inválido. Insira um sexo (M - masculino | F - Feminino): ");
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

    //declaração de variáveis
    float ideal;

    //definição para idioma
    setlocale(LC_ALL, "Portuguese");

    //processamento de dados ==================================================================================================================================
    printf("\nBem vindo :) \n\n");

    ideal = pesoIdeal();

    //output de dados =========================================================================================================================================
    printf("\nO resultado da operação é: %.2f", ideal);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0; //finalizar o programa
}