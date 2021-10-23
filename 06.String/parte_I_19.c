/*=============================================================================================================================================================
    Exercício 19 - Parte 01
    
    Faça um programa que receba uma frase e faça a criptografia dela, substituindo as vogais pelos seguintes
    números: a = 1, e = 2, i = 3, o = 4 e u = 5.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <string.h>     //biblioteca para manipulação de strings


//funções secundárias =========================================================================================================================================

    //Criptografar frase --------------------------------------------------------------------------------------------------------------------------------------
    void criptografia (char frase[200]) {

        //processamento de dados
        for (int i = 0 ; i < (strlen(frase) - 1) ; i++) {

            if ((frase[i] >= 65 && frase[i] <= 90) || (frase[i] >= 97 && frase[i] <= 122)) {
                
                if (frase[i] == 97 || frase[i] == 65)
                    frase[i] = '1';

                else if (frase[i] == 101 || frase[i] == 69)
                    frase[i] = '2';

                else if (frase[i] == 105 || frase[i] == 73)
                    frase[i] = '3';

                else if (frase[i] == 111 || frase[i] == 79)
                    frase[i] = '4';

                else if (frase[i] == 117 || frase[i] == 85)
                    frase[i] = '5';
            }
        }
    }

//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    char frase[200] = { 0 };

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //processamento de dados ==================================================================================================================================
    criptografia(frase);

    //output de dados =========================================================================================================================================
    printf("\n\nA frase criptografada será:\n %s", frase);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}