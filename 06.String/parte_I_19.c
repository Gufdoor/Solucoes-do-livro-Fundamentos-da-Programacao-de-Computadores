/*=============================================================================================================================================================
    Exerc�cio 19 - Parte 01
    
    Fa�a um programa que receba uma frase e fa�a a criptografia dela, substituindo as vogais pelos seguintes
    n�meros: a = 1, e = 2, i = 3, o = 4 e u = 5.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <string.h>     //biblioteca para manipula��o de strings


//fun��es secund�rias =========================================================================================================================================

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

    //declara��o de vari�veis
    char frase[200] = { 0 };

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //processamento de dados ==================================================================================================================================
    criptografia(frase);

    //output de dados =========================================================================================================================================
    printf("\n\nA frase criptografada ser�:\n %s", frase);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}