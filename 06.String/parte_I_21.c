/*=============================================================================================================================================================
    Exerc�cio 21 - Parte 01
    
    Fa�a um programa que receba uma frase e realize a criptografia dela, trocando a primeira e a �ltima
    palavra de lugar.
    
    Exemplo:
        Frase: ESTRELAS E LUA EST�O NO C�U
        Sa�da: C�U E LUA EST�O NO ESTRELAS
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <string.h>     //biblioteca para manipula��o de strings


//fun��es secund�rias =========================================================================================================================================

    //Criptografar frase --------------------------------------------------------------------------------------------------------------------------------------
    void criptografia (int *linhas, char frase[200], char matrizFrase[100][100], char fraseCriptografada[200]) {

        //declara��o de vari�veis
        int tamanho;

        //processamento de dados
        for (int i = 0, g, k = 0 ; i < (strlen(frase) - 1) ; i++, k++) {
            g = 0;

            while (frase[i] != ' ' && frase[i] != '\n') {
                matrizFrase[k][g] = frase[i];
                g++;
                i++;
            }

            *linhas += 1;
        }
        

        if (*linhas == 1)
            strcat(fraseCriptografada, matrizFrase[0]);

        else if (*linhas > 1) {

            strcat(fraseCriptografada, matrizFrase[*linhas - 1]);
            tamanho = strlen(fraseCriptografada);
            fraseCriptografada[tamanho] = ' ';

            if (*linhas > 2) {

                for (int i = 1 ; i < (*linhas - 1) ; i++) {
                    strcat(fraseCriptografada, matrizFrase[i]);
                    tamanho = strlen(fraseCriptografada);
                    fraseCriptografada[tamanho] = ' ';
                }
            }

            strcat(fraseCriptografada, matrizFrase[0]);
        }
    }

//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    char frase[200] = { 0 };
    char matrizFrase[100][100] = { 0 };
    char fraseCriptografada[100] = { 0 };
    int linhas = 0;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //processamento de dados ==================================================================================================================================
    criptografia(&linhas, frase, matrizFrase, fraseCriptografada);

    //output de dados =========================================================================================================================================
    printf("\n\nA frase criptografada ser�: %s", fraseCriptografada);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}