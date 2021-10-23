/*=============================================================================================================================================================
    Exercício 22 - Parte 01
    
    Considere uma string composta por várias subsequências, por exemplo, cccaaaabbbbxdddddddddaaannn. A menor subsequência é a da letra x, com apenas 
    um elemento; a maior subsequência é a da letra d, com nove elementos. Faça um programa para ler uma string e mostrar qual é a letra que ocorre na 
    maior subsequência e o tamanho dessa subsequência.

    Exemplo:
        Entrada: aaabbbbaaa
        Saída: maior b, tamanho 4
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <string.h>     //biblioteca para manipulação de strings


//funções secundárias =========================================================================================================================================

    //Maior sequência -----------------------------------------------------------------------------------------------------------------------------------------
    void subsequencia (char sequencia[200], char *letra, int *tamanho) {

        //declaração de variáveis
        int maior = 0;
        int indice;

        //processamento de dados
        for (int i = 0 ; i < (strlen(sequencia) - 1) ; i++) {
            *letra = sequencia[i];
            *tamanho = 0;

            while (*letra == sequencia[i]) {
                *tamanho += 1;
                i++;
            }

            if (*tamanho > maior) {
                maior = *tamanho;
                indice = i - 1;
            }
        }

        *tamanho = maior;
        *letra = sequencia[indice];
    }


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    char sequencia[200] = { 0 };
    char letra;
    int tamanho;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma sequencia de caracteres: ");
    scanf("%s", sequencia);

    //processamento de dados ==================================================================================================================================
    subsequencia(sequencia, &letra, &tamanho);

    //output de dados =========================================================================================================================================
    printf("\n\nA entrada é: %s", sequencia);
    printf("\nA letra da maior subsequência é '%c' e o tamanho da mesma é %i.", letra, tamanho);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}