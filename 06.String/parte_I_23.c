/*=============================================================================================================================================================
    Exerc�cio 23 - Parte 01
    
    A busca por subcadeias dentro de grandes cadeias de caracteres � um problema cl�ssico na computa��o,
    especificamente em bancos de dados. Fa�a um programa que receba uma cadeia de caracteres e uma
    subcadeia, determine e mostre quantas vezes a subcadeia aparece dentro da cadeia.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <string.h>     //biblioteca para manipula��o de strings
#include <stdlib.h>


//fun��es secund�rias =========================================================================================================================================

    //Subcadeia -----------------------------------------------------------------------------------------------------------------------------------------------
    void subcadeia (char sequencia[200], char subSequencia[200], int *quantidade) {

        //declara��o de vari�veis   
        char *aux;
        int tamanho;

        //processamento de dados
        tamanho = strlen(subSequencia) - 1;

        do {
            aux = strstr(sequencia, subSequencia);

            if (aux)
                *quantidade += 1;

        } while (aux != NULL);
    }

//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    char sequencia[200] = { 0 };
    char subSequencia[200] = { 0 };
    int quantidade = 0;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma sequencia de caracteres: ");
    scanf("%s", sequencia);

    printf("Insira uma subsequencia de caracteres: ");
    scanf("%s", subSequencia);

        //valida��o da subsequ�ncia
        while ((strlen(subSequencia)) > (strlen(sequencia))) {
            printf("    Entrada inv�lida. Insira uma subsequencia de caracteres menor ou igual que a sequ�ncia: ");
            scanf("%s", subSequencia);
        }

    //processamento de dados ==================================================================================================================================
    subcadeia(sequencia, subSequencia, &quantidade);

    //output de dados =========================================================================================================================================
    printf("\n\nA subsequ�ncia '%s' aparece %i vezes.", subSequencia, quantidade);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}