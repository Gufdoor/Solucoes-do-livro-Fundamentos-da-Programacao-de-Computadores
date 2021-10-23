/*=============================================================================================================================================================
    Exercício 23 - Parte 01
    
    A busca por subcadeias dentro de grandes cadeias de caracteres é um problema clássico na computação,
    especificamente em bancos de dados. Faça um programa que receba uma cadeia de caracteres e uma
    subcadeia, determine e mostre quantas vezes a subcadeia aparece dentro da cadeia.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <string.h>     //biblioteca para manipulação de strings
#include <stdlib.h>


//funções secundárias =========================================================================================================================================

    //Subcadeia -----------------------------------------------------------------------------------------------------------------------------------------------
    void subcadeia (char sequencia[200], char subSequencia[200], int *quantidade) {

        //declaração de variáveis   
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

    //declaração de variáveis
    char sequencia[200] = { 0 };
    char subSequencia[200] = { 0 };
    int quantidade = 0;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma sequencia de caracteres: ");
    scanf("%s", sequencia);

    printf("Insira uma subsequencia de caracteres: ");
    scanf("%s", subSequencia);

        //validação da subsequência
        while ((strlen(subSequencia)) > (strlen(sequencia))) {
            printf("    Entrada inválida. Insira uma subsequencia de caracteres menor ou igual que a sequência: ");
            scanf("%s", subSequencia);
        }

    //processamento de dados ==================================================================================================================================
    subcadeia(sequencia, subSequencia, &quantidade);

    //output de dados =========================================================================================================================================
    printf("\n\nA subsequência '%s' aparece %i vezes.", subSequencia, quantidade);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}