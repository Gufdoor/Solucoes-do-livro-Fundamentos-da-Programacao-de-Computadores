/*=============================================================================================================================================================
    Exercício 06 - Capítulo 05
    
    Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba
    o código e o valor de quinze transações, calcule e mostre:
        ? o valor total das compras à vista;
        ? o valor total das compras a prazo;
        ? o valor total das compras efetuadas; e
        ? o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    char codigo;                                //variável para definir se compra foi à vista ou à prazo
    float tVista, tPrazo, tGeral, tPrestacao1;  //totais das compras à vista, à prazo, de ambas e das primeiras prestações à prazo
    float valor;                                //variável para receber valores inseridos pelo usuário
    int controle = 1;                           //limitante da quantidade de números a serem inseridos

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e porcessamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");

    while (controle < 16) {
        printf("\nEscolha e insira o código V (para compra à vista) ou P (para compra a prazo): ");
        scanf(" %c", &codigo);

            //validação do código inserido
            while (codigo != 'V' && codigo != 'P') {
                printf("\nO código inserido é inválido. Tente novamente: ");
                scanf(" %c", &codigo);
            }

        if (codigo == 'V') {                                 //processamento para quando o código for V
            printf("\nInsira o valor da compra à vista: ");
            scanf("%f", &valor);

                //validação do preço 
                while (valor <= 0) {
                    printf("\nO valor inserido é inválido. Tente novamente: ");
                    scanf("%f", &valor);
                }

            tVista += valor;    //somatória do valor total à vista
            tGeral += valor;    //somatória do valor total geral
            controle++;         //limitante de ciclos
        }

        else if (codigo == 'P') {                                 //processamento para quando o código for P
            printf("\nInsira o valor da compra à prazo: ");
            scanf("%f", &valor);

                //validação do preço 
                while (valor <= 0) {
                    printf("\nO valor inserido é inválido. Tente novamente: ");
                    scanf("%f", &valor);
                }

            tPrazo += valor;            //somatória do valor total à vista
            tGeral += valor;            //somatória do valor total geral
            tPrestacao1 += valor / 3;   //somatória do valor total de primeiras prestações
            controle++;                 //limitante de ciclos
        }
    }

    //output de dados =========================================================================================================================================
    printf("\n\nSeguem os resultados:\n Valor total das compras à vista: R$%.2f\n Valor total das compras à prazo: R$%.2f\n", tVista, tPrazo); 
    printf(" Valor total das compras efetuadas: R$%.2f\n Valor da primeira prestação das compras à prazo juntas: R$%.2f", tGeral, tPrestacao1);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}