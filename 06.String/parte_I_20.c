/*=============================================================================================================================================================
    Exercício 20 - Parte 01
    
    Faça um programa que receba uma frase e faça a criptografia dela, utilizando a representação ASCII de
    cada caractere mais um espaço, e depois proceda à sua descriptografia.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <string.h>     //biblioteca para manipulação de strings


//funções secundárias =========================================================================================================================================

    //Criptografar frase --------------------------------------------------------------------------------------------------------------------------------------
    void criptografia (char frase[200], char fraseCriptografada[400]) {

        //declaração de variáveis
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

        //declaração de variáveis
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

    //declaração de variáveis
    char frase[200] = { 0 };
    char fraseCriptografada[400] = { 0 };
    char fraseDescriptografada[200] = { 0 };

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //processamento e output de dados =========================================================================================================================
    criptografia(frase, fraseCriptografada);
    printf("\n\nA frase criptografada será:\n %s", fraseCriptografada);

    descriptografia(fraseCriptografada, fraseDescriptografada);
    printf("\n\nA frase descriptografada será:\n %s", fraseDescriptografada);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}