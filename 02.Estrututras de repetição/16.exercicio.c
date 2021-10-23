/*=============================================================================================================================================================
    Exercício 16 - Capítulo 05
    
    Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas. Finalize digitando
    idade igual a zero.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int idade;              //variável intermediadora que receberá a idade inserida pelo usuário
    int controle = 1;       //variável que irá ordenar a inserção de valores
    float media = 0;        //variável que receberá a média das idades
    float nIdade = 0;       //variável que irá receber a quantidade de idades

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    while (idade != 0) {
        printf("Insira uma idade ou insira 0 para finalizar: ");
        scanf("%d", &idade);

            //validação da idade
            while (idade < 0) {
                printf("\nValor inválido. Tente novamente: ");
                scanf("%d", &idade);
                printf("\n");
            }

            //armazenar os valores das idades
            media += idade;
            nIdade++;

            //quando 0 for inserido
            if (idade == 0) {
                if (media == 0) {       //se o usuário não tiver inserido nenhuma idade anteriormente, não haverá média a ser calculada
                    printf("\n\nVocê não inseriu nenhum valor anteriormente.\n\n\n");
                    return(0);
                }

                nIdade--;
                break;      //comando para terminar a execução do laço while
            }
    }

    //processamento de dados II ===============================================================================================================================
    media /= nIdade;

    //output de dados =========================================================================================================================================
    printf("\nA média das idades é %.2f.", media);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}