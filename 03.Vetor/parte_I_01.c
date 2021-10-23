/*=============================================================================================================================================================
    Exerc�cio 01 - Parte 01
    
    Fa�a um programa que preencha um vetor com seis elementos num�ricos inteiros. Calcule e mostre:

        - todos os n�meros pares;
        - a quantidade de n�meros pares;
        - todos os n�meros �mpares;
        - a quantidade de n�meros �mpares.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <conio.h>      //biblioteca para manipular recursos na tela


//procedimentos ===============================================================================================================================================

    //pares ---------------------------------------------------------------------------------------------------------------------------------------------------
    void pares (int vetor[ ]) {

        //delcara��o de vari�veis
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

    //�mpares -------------------------------------------------------------------------------------------------------------------------------------------------
    void impar (int vetor[ ]) {

        //delcara��o de vari�veis
        int quantidade = 0;

        //processamento e output de dados
        printf("\n\nValores �mpares: ");

        for (int i = 0 ; i <= 5 ; i++) {        //percorrer o vetor, printar e contabilizar os valores �mpares
            if (vetor[i] % 2 != 0) {
                printf("%d ", vetor[i]);
                quantidade++;
            }
        }

        printf("\nQuantidade de valores �mpares: %d", quantidade);

        printf("\n\nPressione ENTER para continuar.");
        getch();
    }

//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int vetor[5];     

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");

    for (int i = 0 ; i <= 5 ; i++) {     //percorrer todo o vetor
        printf("Insira um valor inteiro para a posi��o %d: ", i);
        scanf("%d", &vetor[i]);
    }

    pares(vetor);   //procedimento para calcular valores pares
    impar(vetor);   //procedimento para calcular valores �mpares

    //output de dados =========================================================================================================================================
    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}