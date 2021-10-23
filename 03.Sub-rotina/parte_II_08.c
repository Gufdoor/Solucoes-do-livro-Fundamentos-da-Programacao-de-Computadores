/*=============================================================================================================================================================
    Exercício 08 - Parte 02
    
    Faça uma sub-rotina que receba um valor inteiro e positivo, calcule e mostre seu fatorial.
=============================================================================================================================================================*/

//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>  //biblioteca padrão de entrada e saída
#include <locale.h> //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//demais funções ==============================================================================================================================================

//fatorial ----------------------------------------------------------------------------------------------------------------------------------------------------
int fatorial()
{

    //declaração de variável
    int fatorial;
    int numero;

    //input de dados
    printf("\nInsira um número inteiro e positivo: ");
    scanf("%d", &numero);
    printf("\n");

        //validação do número
        while (numero <= 0) {
            printf("\nValor inválido. Insira um número inteiro e positivo: ");
            scanf("%d", &numero);
            printf("\n");
        }

    //processamento de dados
    for (fatorial = 1 ; numero != 0 ; numero--) 
        fatorial *= numero;

    return fatorial;

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

    resultado = fatorial();

    //output de dados =========================================================================================================================================
    printf("\nO resultado da operação é: %.2f", resultado);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0; //finalizar o programa
}