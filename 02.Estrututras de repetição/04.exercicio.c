/*=============================================================================================================================================================
    Exercício 04 - Capítulo 05
    
    Faça um programa que receba um número, calcule e mostre a tabuada desse número.
    Exemplo:
        Digite um número: 5
        5 × 0 = 0
        5 × 1 = 5
        5 × 2 = 10
        5 × 3 = 15
        5 × 4 = 20
        5 × 5 = 25
        5 × 6 = 30
        5 × 7 = 35
        5 × 8 = 40
        5 × 9 = 45
        5 × 10 = 50
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int controle = 0;   //controle das multiplicações a serem executadas
    float resultado;    //resultado dos produtos
    float numero;       //numero a ser inserido pelo usuário

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    printf("Insira um número qualquer: ");
    scanf("%f", &numero);

    //processamento e saída de dados ==========================================================================================================================
    while (controle < 11) {
        resultado = numero * controle;                              //cálculo da operação de multiplicação
        printf("\n%.2f * %d = %.2f", numero, controle, resultado);  //saída de dados
        controle++;
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}