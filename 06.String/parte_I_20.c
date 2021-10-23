/*=============================================================================================================================================================
    Exerc�cio 20 - Parte 01
    
    Fa�a um programa que receba uma frase e fa�a a criptografia dela, utilizando a representa��o ASCII de
    cada caractere mais um espa�o, e depois proceda � sua descriptografia.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <string.h>     //biblioteca para manipula��o de strings


//fun��es secund�rias =========================================================================================================================================

    //Criptografar frase --------------------------------------------------------------------------------------------------------------------------------------
    void criptografia (char frase[200], char fraseCriptografada[400]) {

        //declara��o de vari�veis
        int aux;
        char aux2[30] = { 0 };

        //processamento de dados
        for (int i = 0, g = 0 ; i < (strlen(frase) - 1) ; i++, g++) {
            aux = frase[i];
            sprintf(aux2, "%d", aux);

            for (int j = 0 ; j < strlen(aux2) ; j++, g++)
                fraseCriptografada[g] = aux2[j];

            fraseCriptografada[g] = ' ';
        }
    }


    //Descriptografar frase --------------------------------------------------------------------------------------------------------------------------------------
    void descriptografia (char fraseCriptografada[400], char fraseDescriptografada[200]) {

        //declara��o de vari�veis
        char aux[400] = { 0 };
        int aux2 = 0;

        //processamento de dados
        strcpy(aux, fraseCriptografada);

        for (int i = 0, g, k = 0 ; i < (strlen(aux) - 1) ; i++, k++) {
            g = 0;
            
            char aux3[30] = { 0 };

            while (aux[i] != ' ') {
                aux3[g] = aux[i];
                i++;
                g++;
            }

            aux2 = atoi(aux3);
            fraseDescriptografada[k] = aux2;
        }
    }

//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    char frase[200] = { 0 };
    char fraseCriptografada[400] = { 0 };
    char fraseDescriptografada[200] = { 0 };

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //processamento e output de dados =========================================================================================================================
    criptografia(frase, fraseCriptografada);
    printf("\n\nA frase criptografada ser�:\n %s", fraseCriptografada);

    descriptografia(fraseCriptografada, fraseDescriptografada);
    printf("\n\nA frase descriptografada ser�:\n %s", fraseDescriptografada);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}