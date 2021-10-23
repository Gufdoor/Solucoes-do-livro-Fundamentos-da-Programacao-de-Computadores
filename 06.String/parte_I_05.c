/*=============================================================================================================================================================
    Exerc�cio 05 - Parte 01
    
    Fa�a um programa que receba duas cadeias de caracteres e verifique se a primeira cadeia digitada � permuta��o
    da segunda cadeia, ou seja, se todos os caracteres da primeira cadeia est�o presentes na segunda cadeia,
    mesmo que em posi��es diferentes.

    Exemplo: ?abccde? � uma permuta��o de ?cbadce?, mas n�o � de ?abcdef? nem de ?abcde?
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <string.h>     //biblioteca para manipula��o de strings


//fun��es secund�rias =========================================================================================================================================

    //Verificar permuta��o de strings -------------------------------------------------------------------------------------------------------------------------
    void permutacao (char frase1[200], char frase2[200], int *result) {

        //declara��o de vari�veis
        int tamanho1 = strlen(frase1) - 1;
        int tamanho2 = strlen(frase2) - 1;

        //processamento de dados
        for (int i = 0 ; i < tamanho1 ; i++) {
            *result = 0;    //vari�vel result servir� de par�metro de valida��o da permuta��o; se terminar a execu��o como 1, � permuta��o ; else, n�o �                           

            for (int j = 0 ; j < tamanho2 ; j++) {

                if (frase1[i] == frase2[j]) {
                    *result = 1;
                    break;
                }
            }

            if (*result == 0)
                break;
        }
    }

//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    char frase1[200];
    char frase2[200];
    int result;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira a primeira frase: ");
    fgets(frase1, sizeof(frase1), stdin);

    printf("Insira a segunda frase: ");
    fgets(frase2, sizeof(frase2), stdin);

    //processamento de dados ==================================================================================================================================
    permutacao(frase1, frase2, &result);

    //output de dados =========================================================================================================================================
    if (result == 1)
        printf("\n\nA frase 1 � uma permuta��o da frase 2.");

    else 
        printf("\n\nA frase 1 n�o � uma permuta��o da frase 2.");

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}