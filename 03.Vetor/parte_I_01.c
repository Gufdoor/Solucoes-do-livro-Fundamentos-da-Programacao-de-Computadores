/*=============================================================================================================================================================
    Exercício 01 - Parte 01
    
    Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:

        - todos os números pares;
        - a quantidade de números pares;
        - todos os números ímpares;
        - a quantidade de números ímpares.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <conio.h>      //biblioteca para manipular recursos na tela


//procedimentos ===============================================================================================================================================

    //pares ---------------------------------------------------------------------------------------------------------------------------------------------------
    void pares (int vetor[ ]) {

        //delcaração de variáveis
        int quantidade = 0;

        //processamento e output de dados
        printf("\nValores pares: ");

        for (int i = 0 ; i <= 5 ; i++) {        //percorrer o vetor, printar e contabilizar os valores pares
            if (vetor[i] % 2 == 0) {
                printf("%d ", vetor[i]);
                quantidade++;
            }
        }

        printf("\nQuantidade de valores pares: %d", quantidade);

        printf("\n\nPressione ENTER para continuar.");
        getch();
    }

    //ímpares -------------------------------------------------------------------------------------------------------------------------------------------------
    void impar (int vetor[ ]) {

        //delcaração de variáveis
        int quantidade = 0;

        //processamento e output de dados
        printf("\n\nValores ímpares: ");

        for (int i = 0 ; i <= 5 ; i++) {        //percorrer o vetor, printar e contabilizar os valores ímpares
            if (vetor[i] % 2 != 0) {
                printf("%d ", vetor[i]);
                quantidade++;
            }
        }

        printf("\nQuantidade de valores ímpares: %d", quantidade);

        printf("\n\nPressione ENTER para continuar.");
        getch();
    }

//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int vetor[5];     

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");

    for (int i = 0 ; i <= 5 ; i++) {     //percorrer todo o vetor
        printf("Insira um valor inteiro para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    pares(vetor);   //procedimento para calcular valores pares
    impar(vetor);   //procedimento para calcular valores ímpares

    //output de dados =========================================================================================================================================
    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}