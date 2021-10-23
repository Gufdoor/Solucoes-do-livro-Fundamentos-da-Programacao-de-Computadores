/*=============================================================================================================================================================
    Exercício 01 - Parte 02
    
    Faça uma sub-rotina que receba um número inteiro e positivo N como parâmetro e retorne a soma dos números
    inteiros existentes entre o número 1 e N (inclusive).
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//demais funções ==============================================================================================================================================

    //soma ----------------------------------------------------------------------------------------------------------------------------------------------------
    int soma (int *numero) {
        int ref = 1;            //variável que servirá de base para as somas
        int result = *numero;

        for (ref ; ref <= *numero ; ref++) {     //ciclo de repetições para somar valores dentro do intervalo
            result += ref;
        }

        return result;
    }

//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int numero;         //variável que receberá o número pelo usuário
    int resultado;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira um número inteiro e positivo: ");
    scanf("%d", &numero);
    printf("\n");

        //validação do número
        while (numero <= 0) {
            printf("Valor inválido. Insira um número inteiro e positivo: ");
            scanf("%d", &numero);
            printf("\n");
        }

    //processamento de dados ==================================================================================================================================
    resultado = soma(&numero);     

    //output de dados =========================================================================================================================================
    printf("\nO resultado da operação é: %d", resultado);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}