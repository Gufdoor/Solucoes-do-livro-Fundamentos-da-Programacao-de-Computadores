/*=============================================================================================================================================================
    Exercício 02 - Parte 01
    
    Faça um programa que receba uma frase e mostre cada palavra dela em uma linha separada.
    
    Exemplo:
        Frase: COMPUTADORES SÃO MÁQUINAS POTENTES
        Saída:
        COMPUTADORES
        SÃO
        MÁQUINAS
        POTENTES
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <string.h>     //biblioteca para manipulação de strings


//funções secundárias =========================================================================================================================================

    //Desmontar frase -----------------------------------------------------------------------------------------------------------------------------------------
    void desmontar(char frase[ ], char palavras[25][25], int* quantidade) {

        //declaração de variáveis
        int tamanho;

        //processamento de dados
        tamanho = strlen(frase) - 1;

        for (int i = 0 ; i < 25 ; i++) {            //eliminar todo o lixo contido na matriz "palavras"

            for (int j = 0 ; j < 25 ; j++)
                palavras[i][j] = 0;
        }

        for (int i = 0 ; i < tamanho ; i++) {       //contar quantos espaços tem na frase, ou seja, quantas palavras ela tem
            
            if (frase[i] == ' ') 
                *quantidade += 1;
        }

        for (int i = 0 ; i < *quantidade ; i++) {           //com os espaços contados, sabemos quantas linhas serão utilizadas na matriz "palavras"

            for (int j = 0 ; j < tamanho ; j++) {           //agora percorreremos a frase e adicionaremos cada letra a linha i até encontrar um espaço ou terminador 

                if (frase[j] == ' ') {                      //quando um espaço ou terminador for encontrado, o laço será interrompido e o laço pulará pra próxima linha
                    frase = &frase[j + 1];                  //aqui eliminaremos do vetor "frase" tudo aquilo que já foi adicionado na matriz "palavras"
                    break;
                }

                palavras[i][j] = frase[j];                  //adicionar cada letra da "frase" na matriz "palavras"
            }
        }
    }

//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    char frase[200];
    char palavras[25][25];
    int quantidade = 1;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma frase curta: ");
    fgets(frase, 200, stdin);

    //processamento de dados ==================================================================================================================================
    desmontar(frase, palavras, &quantidade);

    //output de dados =========================================================================================================================================
    printf("\n\nAs palavras da frase são:\n");
    for (int i = 0 ; i < quantidade ; i++)
        printf("\n %s", palavras[i]);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}