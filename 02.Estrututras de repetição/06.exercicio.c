/*=============================================================================================================================================================
    Exerc�cio 06 - Cap�tulo 05
    
    Uma loja utiliza o c�digo V para transa��o � vista e P para transa��o a prazo. Fa�a um programa que receba
    o c�digo e o valor de quinze transa��es, calcule e mostre:
        ? o valor total das compras � vista;
        ? o valor total das compras a prazo;
        ? o valor total das compras efetuadas; e
        ? o valor da primeira presta��o das compras a prazo juntas, sabendo-se que ser�o pagas em tr�s vezes.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    char codigo;                                //vari�vel para definir se compra foi � vista ou � prazo
    float tVista, tPrazo, tGeral, tPrestacao1;  //totais das compras � vista, � prazo, de ambas e das primeiras presta��es � prazo
    float valor;                                //vari�vel para receber valores inseridos pelo usu�rio
    int controle = 1;                           //limitante da quantidade de n�meros a serem inseridos

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e porcessamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");

    while (controle < 16) {
        printf("\nEscolha e insira o c�digo V (para compra � vista) ou P (para compra a prazo): ");
        scanf(" %c", &codigo);

            //valida��o do c�digo inserido
            while (codigo != 'V' && codigo != 'P') {
                printf("\nO c�digo inserido � inv�lido. Tente novamente: ");
                scanf(" %c", &codigo);
            }

        if (codigo == 'V') {                                 //processamento para quando o c�digo for V
            printf("\nInsira o valor da compra � vista: ");
            scanf("%f", &valor);

                //valida��o do pre�o 
                while (valor <= 0) {
                    printf("\nO valor inserido � inv�lido. Tente novamente: ");
                    scanf("%f", &valor);
                }

            tVista += valor;    //somat�ria do valor total � vista
            tGeral += valor;    //somat�ria do valor total geral
            controle++;         //limitante de ciclos
        }

        else if (codigo == 'P') {                                 //processamento para quando o c�digo for P
            printf("\nInsira o valor da compra � prazo: ");
            scanf("%f", &valor);

                //valida��o do pre�o 
                while (valor <= 0) {
                    printf("\nO valor inserido � inv�lido. Tente novamente: ");
                    scanf("%f", &valor);
                }

            tPrazo += valor;            //somat�ria do valor total � vista
            tGeral += valor;            //somat�ria do valor total geral
            tPrestacao1 += valor / 3;   //somat�ria do valor total de primeiras presta��es
            controle++;                 //limitante de ciclos
        }
    }

    //output de dados =========================================================================================================================================
    printf("\n\nSeguem os resultados:\n Valor total das compras � vista: R$%.2f\n Valor total das compras � prazo: R$%.2f\n", tVista, tPrazo); 
    printf(" Valor total das compras efetuadas: R$%.2f\n Valor da primeira presta��o das compras � prazo juntas: R$%.2f", tGeral, tPrestacao1);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}