/*=============================================================================================================================================================
    Exerc�cio 02 - Parte 01
    
    Fa�a um programa que receba uma frase e mostre cada palavra dela em uma linha separada.
    
    Exemplo:
        Frase: COMPUTADORES S�O M�QUINAS POTENTES
        Sa�da:
        COMPUTADORES
        S�O
        M�QUINAS
        POTENTES
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <string.h>     //biblioteca para manipula��o de strings


//fun��es secund�rias =========================================================================================================================================

    //Desmontar frase -----------------------------------------------------------------------------------------------------------------------------------------
    void desmontar(char frase[ ], char palavras[25][25], int* quantidade) {

        //declara��o de vari�veis
        int tamanho;

        //processamento de dados
        tamanho = strlen(frase) - 1;

        for (int i = 0 ; i < 25 ; i++) {            //eliminar todo o lixo contido na matriz "palavras"

            for (int j = 0 ; j < 25 ; j++)
                palavras[i][j] = 0;
        }

        for (int i = 0 ; i < tamanho ; i++) {       //contar quantos espa�os tem na frase, ou seja, quantas palavras ela tem
            
            if (frase[i] == ' ') 
                *quantidade += 1;
        }

        for (int i = 0 ; i < *quantidade ; i++) {           //com os espa�os contados, sabemos quantas linhas ser�o utilizadas na matriz "palavras"

            for (int j = 0 ; j < tamanho ; j++) {           //agora percorreremos a frase e adicionaremos cada letra a linha i at� encontrar um espa�o ou terminador 

                if (frase[j] == ' ') {                      //quando um espa�o ou terminador for encontrado, o la�o ser� interrompido e o la�o pular� pra pr�xima linha
                    frase = &frase[j + 1];                  //aqui eliminaremos do vetor "frase" tudo aquilo que j� foi adicionado na matriz "palavras"
                    break;
                }

                palavras[i][j] = frase[j];                  //adicionar cada letra da "frase" na matriz "palavras"
            }
        }
    }

//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    char frase[200];
    char palavras[25][25];
    int quantidade = 1;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma frase curta: ");
    fgets(frase, 200, stdin);

    //processamento de dados ==================================================================================================================================
    desmontar(frase, palavras, &quantidade);

    //output de dados =========================================================================================================================================
    printf("\n\nAs palavras da frase s�o:\n");
    for (int i = 0 ; i < quantidade ; i++)
        printf("\n %s", palavras[i]);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}