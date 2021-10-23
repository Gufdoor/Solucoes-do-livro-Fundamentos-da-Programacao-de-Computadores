/*=============================================================================================================================================================
    Exercício 09 - Parte 02
    
    Crie uma sub-rotina que receba como parâmetro um valor inteiro e positivo e retorne a soma dos divisores
    desse valor.
=============================================================================================================================================================*/

//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>  //biblioteca padrão de entrada e saída
#include <locale.h> //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//demais funções ==============================================================================================================================================

//soma dos divisores de um número -----------------------------------------------------------------------------------------------------------------------------
int somaDivisores(int numero)
{

    //declaração de variável
    int resto;
    int comparador = 1;
    int divisores = 0;

    //processamento de dados
    for (numero ; numero >= comparador ; comparador++) {
        resto = numero % comparador;

        if (resto == 0) 
            divisores += comparador;
    }

    return divisores;

}

//programa principal ==========================================================================================================================================

int main()
{

    //declaração de variáveis
    int resultado;
    int numero;

    //definição para idioma
    setlocale(LC_ALL, "Portuguese");

    //input de dados
    printf("\nBem vindo :) \n\n");

    printf("\nInsira um número inteiro e positivo: ");
    scanf("%d", &numero);
    printf("\n");

        //validação do número
        while (numero <= 0) {
            printf("\nValor inválido. Insira um número inteiro e positivo: ");
            scanf("%d", &numero);
            printf("\n");
        }

    //processamento de dados ==================================================================================================================================
    resultado = somaDivisores(numero);

    //output de dados =========================================================================================================================================
    printf("\nO resultado da operação é: %d", resultado);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0; //finalizar o programa
}