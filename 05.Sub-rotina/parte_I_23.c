/*=============================================================================================================================================================
    Exerc�cio 23 - Parte 01
    
    Crie um programa que receba tr�s valores (obrigatoriamente maiores que zero), representando as medidas
    dos tr�s lados de um tri�ngulo.

    Elabore sub-rotinas para:
        - determinar se esses lados formam um tri�ngulo (sabe-se que, para ser tri�ngulo, a medida de um
        lado qualquer deve ser inferior ou igual � soma das medidas dos outros dois).
        - determinar e mostrar o tipo de tri�ngulo (equil�tero, is�sceles ou escaleno), caso as medidas formem
        um tri�ngulo.
    
    Todas as mensagens dever�o ser mostradas no programa principal.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <string.h>     //biblioteca para utilizar fun��es relativas � string
#include <stdlib.h>     //biblioteca para fun��es acerca de aloca��o de mem�ria


//fun��es secund�rias =========================================================================================================================================

    //tri�ngulo ou n�o ----------------------------------------------------------------------------------------------------------------------------------------
    char* triangulo(float l1, float l2, float l3, float *codigo) {
        
        //delcara��o de vari�veis
        char* resultado1 = (char *) malloc (50);

        //processamento de dados
        if (l1 <= (l2 + l3) && l2 <= (l1 + l3) && l3 <= (l1 + l2)) {
            strcpy(resultado1, "Os valores correspondem � um tri�ngulo.");
            *codigo = 1;
        }

        else
            strcpy(resultado1, "Os valores n�o correspondem � um tri�ngulo.");
        
        return resultado1;
    }

    //tipo do tri�ngulo ---------------------------------------------------------------------------------------------------------------------------------------
    char* categoria(float l1, float l2, float l3) {

        //declara��o de vari�veis
        char* tipo = (char *) malloc (15);

        //processamento de dados
            if ((l1 != l2) && (l1 != l3) && (l2 != l3))
                strcpy(tipo, "Escaleno.");

            else if ((l1 == l2) && (l2 == l3))
                strcpy(tipo, "Equil�tero.");

            else 
                strcpy(tipo, "Is�celes.");

        return tipo;
    }

//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    float l1, l2, l3, codigo;
    char* resultado1 = (char *) malloc (sizeof(char) *50);
    char* resultado2 = (char *) malloc (sizeof(char) *50);
    

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira tr�s valores correspondentes aos lados de um tri�ngulo, todos maiores que zero: ");
    scanf("%f %f %f", &l1, &l2, &l3);
    printf("\n");

        //valida��o dos n�meros
        while (l1 <= 0 || l2 <= 0 || l3 <= 0) {
            printf("Valor(es) inv�lido(s). Insira tr�s valores correspondentes aos lados de um tri�ngulo, todos maiores que zero: ");
            scanf("%f %f %f", &l1, &l2, &l3);
            printf("\n");
        }

    //processamento de dados ==================================================================================================================================
    strcpy(resultado1, triangulo(l1, l2, l3, &codigo));
    strcpy(resultado2, categoria(l1, l2, l3));
    
    //output de dados =========================================================================================================================================
    printf("\n%s", resultado1);

    if (codigo == 1)
        printf("\n%s", resultado2);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}