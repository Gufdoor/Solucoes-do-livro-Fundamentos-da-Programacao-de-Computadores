/*=============================================================================================================================================================
    Exerc�cio 20 - Cap�tulo 05
    
    Fa�a um programa que apresente o menu de op��es a seguir:
     
        Menu de op��es:
            1. M�dia aritm�tica
            2. M�dia ponderada
            3. Sair

        Digite a op��o desejada.
            Na op��o 1: receber duas notas, calcular e mostrar a m�dia aritm�tica.
            Na op��o 2: receber tr�s notas e seus respectivos pesos, calcular e mostrar a m�dia ponderada.
            Na op��o 3: sair do programa.

    Verifique a possibilidade de op��o inv�lida. Nesse caso, o programa dever� mostrar uma mensagem.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int controle = 1;                               //identificador de ciclos
    int opcao = 0;                                  //vari�vel intermediadora que receber� o valor de uma op��o
    float n1, n2, n3;                               //vari�veis que ir�o receber as notas do usu�rio
    float mediaNotas;                               //vari�vel que receber� a m�dia das notas
    float p1, p2, p3;                               //vari�veis que receber�o os respectivos pesos

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    while (opcao != 3) {                            //defini��o de condi��o para limitar o la�o de repeti��o
        printf("\n%d - Insira o n�mero de uma das op��es abaixo: ", controle);  //receber uma op��o
        printf("\n 1. M�dia aritm�tica");
        printf("\n 2. M�dia ponderada");
        printf("\n 3. Sair\n\n ");
        scanf("%d", &opcao);

            //valida��o da op��o
            while (opcao != 1 && opcao != 2 && opcao != 3) {
                printf("\nValor inv�lido. Tente novamente: ");
                scanf("%d", &opcao);
                printf("\n");
            }

        //c�lculo para op��o 1
        if (opcao == 1) {
            printf("\nInsira a primeira nota: ");
            scanf("%f", &n1);

                //valida��o da nota 1
                while (n1 < 0) {
                printf("\nValor inv�lido. Tente novamente: ");
                scanf("%f", &n1);
                printf("\n");
                }

            printf("Insira a segunda nota: ");
            scanf("%f", &n2);

                //valida��o da nota 2
                while (n2 < 0) {
                printf("\nValor inv�lido. Tente novamente: ");
                scanf("%f", &n2);
                printf("\n");
                }

            //c�lculo da m�dia
            mediaNotas = (n1 + n2) / 2;
            printf("\nO resultado �: %.2f\n\n\n", mediaNotas);
        }

        //c�lculo para op��o 2
        else if (opcao == 2) {
            printf("\nInsira a primeira nota: ");
            scanf("%f", &n1);

                //valida��o da nota 1
                while (n1 < 0) {
                printf("\nValor inv�lido. Tente novamente: ");
                scanf("%f", &n1);
                printf("\n");
                }
            
            printf("Insira a segunda nota: ");
            scanf("%f", &n2);

                //valida��o da nota 2
                while (n2 < 0) {
                printf("\nValor inv�lido. Tente novamente: ");
                scanf("%f", &n2);
                printf("\n");
                }

            printf("Insira a terceira nota: ");
            scanf("%f", &n3);

                //valida��o da nota 3
                while (n3 < 0) {
                printf("\nValor inv�lido. Tente novamente: ");
                scanf("%f", &n3);
                printf("\n");
                }

            printf("\nInsira o peso 1: ");
            scanf("%f", &p1);

                //valida��o do peso 1
                while (p1 <= 0) {
                printf("\nValor inv�lido. Tente novamente: ");
                scanf("%f", &p1);
                printf("\n");
                }

            printf("Insira o peso 2: ");
            scanf("%f", &p2);

                //valida��o do peso 2
                while (p2 <= 0) {
                printf("\nValor inv�lido. Tente novamente: ");
                scanf("%f", &p2);
                printf("\n");
                }

            printf("Insira o peso 3: ");
            scanf("%f", &p3);

                //valida��o do peso 3
                while (p3 <= 0) {
                printf("\nValor inv�lido. Tente novamente: ");
                scanf("%f", &p3);
                printf("\n");
                }

            //c�lculo da m�dia 
            n1 *= p1;
            n2 *= p2;
            n3 *= p3;
            p1 += p2 + p3;
            n1 += n2 + n3;
            mediaNotas = n1 / p1;
            printf("\nO resultado �: %.2f\n\n\n", mediaNotas);
        }

        controle++;     
    }      

    //output de dados =========================================================================================================================================
    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}