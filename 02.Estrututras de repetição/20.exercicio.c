/*=============================================================================================================================================================
    Exercício 20 - Capítulo 05
    
    Faça um programa que apresente o menu de opções a seguir:
     
        Menu de opções:
            1. Média aritmética
            2. Média ponderada
            3. Sair

        Digite a opção desejada.
            Na opção 1: receber duas notas, calcular e mostrar a média aritmética.
            Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada.
            Na opção 3: sair do programa.

    Verifique a possibilidade de opção inválida. Nesse caso, o programa deverá mostrar uma mensagem.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int controle = 1;                               //identificador de ciclos
    int opcao = 0;                                  //variável intermediadora que receberá o valor de uma opção
    float n1, n2, n3;                               //variáveis que irão receber as notas do usuário
    float mediaNotas;                               //variável que receberá a média das notas
    float p1, p2, p3;                               //variáveis que receberão os respectivos pesos

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    while (opcao != 3) {                            //definição de condição para limitar o laço de repetição
        printf("\n%d - Insira o número de uma das opções abaixo: ", controle);  //receber uma opção
        printf("\n 1. Média aritmética");
        printf("\n 2. Média ponderada");
        printf("\n 3. Sair\n\n ");
        scanf("%d", &opcao);

            //validação da opção
            while (opcao != 1 && opcao != 2 && opcao != 3) {
                printf("\nValor inválido. Tente novamente: ");
                scanf("%d", &opcao);
                printf("\n");
            }

        //cálculo para opção 1
        if (opcao == 1) {
            printf("\nInsira a primeira nota: ");
            scanf("%f", &n1);

                //validação da nota 1
                while (n1 < 0) {
                printf("\nValor inválido. Tente novamente: ");
                scanf("%f", &n1);
                printf("\n");
                }

            printf("Insira a segunda nota: ");
            scanf("%f", &n2);

                //validação da nota 2
                while (n2 < 0) {
                printf("\nValor inválido. Tente novamente: ");
                scanf("%f", &n2);
                printf("\n");
                }

            //cálculo da média
            mediaNotas = (n1 + n2) / 2;
            printf("\nO resultado é: %.2f\n\n\n", mediaNotas);
        }

        //cálculo para opção 2
        else if (opcao == 2) {
            printf("\nInsira a primeira nota: ");
            scanf("%f", &n1);

                //validação da nota 1
                while (n1 < 0) {
                printf("\nValor inválido. Tente novamente: ");
                scanf("%f", &n1);
                printf("\n");
                }
            
            printf("Insira a segunda nota: ");
            scanf("%f", &n2);

                //validação da nota 2
                while (n2 < 0) {
                printf("\nValor inválido. Tente novamente: ");
                scanf("%f", &n2);
                printf("\n");
                }

            printf("Insira a terceira nota: ");
            scanf("%f", &n3);

                //validação da nota 3
                while (n3 < 0) {
                printf("\nValor inválido. Tente novamente: ");
                scanf("%f", &n3);
                printf("\n");
                }

            printf("\nInsira o peso 1: ");
            scanf("%f", &p1);

                //validação do peso 1
                while (p1 <= 0) {
                printf("\nValor inválido. Tente novamente: ");
                scanf("%f", &p1);
                printf("\n");
                }

            printf("Insira o peso 2: ");
            scanf("%f", &p2);

                //validação do peso 2
                while (p2 <= 0) {
                printf("\nValor inválido. Tente novamente: ");
                scanf("%f", &p2);
                printf("\n");
                }

            printf("Insira o peso 3: ");
            scanf("%f", &p3);

                //validação do peso 3
                while (p3 <= 0) {
                printf("\nValor inválido. Tente novamente: ");
                scanf("%f", &p3);
                printf("\n");
                }

            //cálculo da média 
            n1 *= p1;
            n2 *= p2;
            n3 *= p3;
            p1 += p2 + p3;
            n1 += n2 + n3;
            mediaNotas = n1 / p1;
            printf("\nO resultado é: %.2f\n\n\n", mediaNotas);
        }

        controle++;     
    }      

    //output de dados =========================================================================================================================================
    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}