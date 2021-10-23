/*=============================================================================================================================================================
    Exerc�cio 02 - Cap�tulo 05
    
    Uma companhia de teatro deseja montar uma s�rie de espet�culos. A dire��o calcula que, a
    R$ 5,00 o ingresso, ser�o vendidos 120 ingressos, e que as despesas ser�o de R$ 200,00. Diminuindo-se em
    R$ 0,50 o pre�o dos ingressos, espera-se que as vendas aumentem em 26 ingressos. Fa�a um programa que
    escreva uma tabela de valores de lucros esperados em fun��o do pre�o do ingresso, fazendo-se variar esse pre�o
    de R$ 5,00 a R$ 1,00, de R$ 0,50 em R$ 0,50. Escreva, ainda, para cada novo pre�o de ingresso, o lucro
    m�ximo esperado, o pre�o do ingresso e a quantidade de ingressos vendidos para a obten��o desse lucro.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <conio.h>      //biblioteca para manipula��o de caracteres na tela


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    float pIngresso = 5.00; //valor padr�o do ingresso (tamb�m o controle de repeti��o)
    int qIngresso = 120;    //quantidade padr�o de ingressos vendidos
    float lucro;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //inicializa��o do programa ===============================================================================================================================
    printf("\nBem vindo :) \n\n");
    printf("Pressione ENTER para continuar.");
    getch();    //fun��o da biblioteca conio.h para congelar a tela enquanto o usu�rio n�o pressionar alguma tecla qualquer

    //processamento e sa�da de dados ==========================================================================================================================
    while (pIngresso >= 1) {
        lucro = (qIngresso * pIngresso) - 200;  //c�lculo do lucro

        //valor resultante
        printf("\n\nOs valores ser�o:\n Lucro esperado: R$%.2f\n Pre�o do ingresso: R$%.2f\n Ingressos vendidos: %d", lucro, pIngresso, qIngresso); 
        printf("\n\nPressione ENTER para prosseguir.");
        getch();

        //reajuste de pre�o e quantidade de ingressos vendidos
        pIngresso -= 0.50;
        qIngresso += 26; 
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}