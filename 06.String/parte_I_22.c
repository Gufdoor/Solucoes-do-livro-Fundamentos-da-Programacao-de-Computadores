/*=============================================================================================================================================================
    Exerc�cio 22 - Parte 01
    
    Considere uma string composta por v�rias subsequ�ncias, por exemplo, cccaaaabbbbxdddddddddaaannn. A menor subsequ�ncia � a da letra x, com apenas 
    um elemento; a maior subsequ�ncia � a da letra d, com nove elementos. Fa�a um programa para ler uma string e mostrar qual � a letra que ocorre na 
    maior subsequ�ncia e o tamanho dessa subsequ�ncia.

    Exemplo:
        Entrada: aaabbbbaaa
        Sa�da: maior b, tamanho 4
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <string.h>     //biblioteca para manipula��o de strings


//fun��es secund�rias =========================================================================================================================================

    //Maior sequ�ncia -----------------------------------------------------------------------------------------------------------------------------------------
    void subsequencia (char sequencia[200], char *letra, int *tamanho) {

        //declara��o de vari�veis
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

    //declara��o de vari�veis
    char sequencia[200] = { 0 };
    char letra;
    int tamanho;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma sequencia de caracteres: ");
    scanf("%s", sequencia);

    //processamento de dados ==================================================================================================================================
    subsequencia(sequencia, &letra, &tamanho);

    //output de dados =========================================================================================================================================
    printf("\n\nA entrada �: %s", sequencia);
    printf("\nA letra da maior subsequ�ncia � '%c' e o tamanho da mesma � %i.", letra, tamanho);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}