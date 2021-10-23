/*=============================================================================================================================================================
    Exercício 05 - Parte 02
    
    Faça uma sub-rotina que receba um valor inteiro e verifique se ele é positivo ou negativo.
=============================================================================================================================================================*/

//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>  //biblioteca padrão de entrada e saída
#include <locale.h> //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <string.h> //biblioteca para utilizar funções relativas à string


//demais funções ==============================================================================================================================================

//positivo ou negativo ------------------------------------------------------------------------------------------------------------------------------------
void positivoNegativo(int numero)
{

    //declaração de variável
    char resultado[ ] = {""};

    //processamento de dados
    if (numero > 0)
        strcpy(resultado, "Positivo");

    else if (numero < 0)
        strcpy(resultado, "Negativo");

    else if (numero == 0)
        strcpy(resultado, "Neutro");

    //output de dados 
    printf("\nO resultado da operação é: '%s'", resultado);

}

//programa principal ==========================================================================================================================================

int main()
{

    //declaração de variáveis
    int numero;

    //definição para idioma
    setlocale(LC_ALL, "Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");

    printf("Insira um número inteiro: ");
    scanf("%d", &numero);
    printf("\n");

    //processamento de dados ==================================================================================================================================
    positivoNegativo(numero);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0; //finalizar o programa
}