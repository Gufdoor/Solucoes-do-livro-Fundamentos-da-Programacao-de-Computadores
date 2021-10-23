/*=============================================================================================================================================================
    Exercício 05 - Parte 01
    
    Faça um programa que receba duas cadeias de caracteres e verifique se a primeira cadeia digitada é permutação
    da segunda cadeia, ou seja, se todos os caracteres da primeira cadeia estão presentes na segunda cadeia,
    mesmo que em posições diferentes.

    Exemplo: ?abccde? é uma permutação de ?cbadce?, mas não é de ?abcdef? nem de ?abcde?
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <string.h>     //biblioteca para manipulação de strings


//funções secundárias =========================================================================================================================================

    //Verificar permutação de strings -------------------------------------------------------------------------------------------------------------------------
    void permutacao (char frase1[200], char frase2[200], int *result) {

        //declaração de variáveis
        int tamanho1 = strlen(frase1) - 1;
        int tamanho2 = strlen(frase2) - 1;

        //processamento de dados
        for (int i = 0 ; i < tamanho1 ; i++) {
            *result = 0;    //variável result servirá de parâmetro de validação da permutação; se terminar a execução como 1, é permutação ; else, não é                           

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

    //declaração de variáveis
    char frase1[200];
    char frase2[200];
    int result;

    //definição para idioma
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
        printf("\n\nA frase 1 é uma permutação da frase 2.");

    else 
        printf("\n\nA frase 1 não é uma permutação da frase 2.");

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}