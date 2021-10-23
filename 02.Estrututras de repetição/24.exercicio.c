/*=============================================================================================================================================================
    Exercício 24 - Capítulo 05
    
    Faça um programa que receba um conjunto de valores inteiros e positivos, calcule e mostre o maior e o
    menor valor do conjunto. Considere que:

        - para encerrar a entrada de dados, deve ser digitado o valor zero;
        - para valores negativos, deve ser enviada uma mensagem;
        - os valores negativos ou iguais a zero não entrarão nos cálculos.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int maior = 0, menor = 999;
    int intermediador = 1;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    while (intermediador != 0) {
        printf("Insira um número inteiro e positivo: ");
        scanf("%d", &intermediador);

            //validação do intermediador
            while (intermediador < 0) {
                printf("\nValor inválido. Tente novamente: ");
                scanf("%d", &intermediador);
                printf("\n");
            }

            //intermediador = 0
            if (intermediador == 0) {
                break;
            }

            //categorização
            if (intermediador > maior) 
                maior = intermediador;

            else if (intermediador < menor) 
                menor = intermediador;
    }

    //output de dados =========================================================================================================================================
    if (maior != 0) {
        printf("\nMaior número = %d\nMenor número = %d", maior, menor);
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}