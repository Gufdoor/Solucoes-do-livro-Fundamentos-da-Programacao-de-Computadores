/*=============================================================================================================================================================
    Exercício 10 - Capítulo 05
    
    Faça um programa que receba dez números, calcule e mostre a soma dos números pares e a soma dos
    números primos.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int controle;                     //limitante da quantidade de números a serem inseridos
    int intermediador;                //variável que irá receber os valores inseridos pelo usuário
    int result1, result2;             //varáveis para receber valores para comparação
    int sPares = 0, sPrimos = 0;      //variáveis que receberam os respectivos resultados

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    for (controle = 1 ; controle < 11 ; controle++) {       //definição de condição para limitar o laço de repetição
        printf("Insira um número inteiro positivo qualquer: ");
        scanf("%d", &intermediador);

            //validação do número inserido
            while (intermediador <= 0) {
                printf("\nValor inválido. Insira um novo número: ");
                scanf("%d", &intermediador);
                printf("\n");
            }

        result1 = intermediador % 2;    //valor a ser usado para comparação e categorização de números pares 
        result2 = intermediador % 3;    //valor a ser usado para comparação e categorização de números ímpares      
        
        //condição para números pares
        if (result1 == 0) {
            sPares += intermediador;
        }

        //condição para números primos
        if (result1 != 0 && result2 != 0 && intermediador != 1)  {
            sPrimos += intermediador;
        }
        if (intermediador == 2)
            sPrimos += 2;

        if (intermediador == 3)
            sPrimos += 3;
    }

    //output de dados =========================================================================================================================================
    printf("\nSoma dos números pares: %d\nSoma dos números primos: %d", sPares, sPrimos);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}