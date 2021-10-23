/*=============================================================================================================================================================
    Exercício 10 - Parte 02
    
    Elabore uma sub-rotina que receba como parâmetro um valor N (inteiro e maior ou igual a 1) e determine
    o valor da sequência S, descrita a seguir:
    
        S = 1 + 1/2 + 1/3...

    OBSERVAÇÃO: A quantidade de parcelas que compõe S é igual a N.
=============================================================================================================================================================*/

//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>  //biblioteca padrão de entrada e saída
#include <locale.h> //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//demais funções ==============================================================================================================================================

//soma dos divisores de um número -----------------------------------------------------------------------------------------------------------------------------
float somaDivisores(int numero)
{

    //declaração de variável
    float s = 0;
    float dividendo = 1;

    //processamento de dados
    for (numero ; numero > 0 ; numero--) {
        s += 1 / dividendo;
        dividendo++;
    }

    return s;

}

//programa principal ==========================================================================================================================================

int main()
{

    //declaração de variáveis
    float resultado;
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
    printf("\nO resultado da operação é: %.2f", resultado);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0; //finalizar o programa
}