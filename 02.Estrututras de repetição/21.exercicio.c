/*=============================================================================================================================================================
    Exerc�cio 21 - Cap�tulo 05
    
    Em uma elei��o presidencial existem quatro candidatos. Os votos s�o informados por meio de c�digo.

    Os c�digos utilizados s�o:
        1, 2, 3, 4 Votos para os respectivos candidatos
        5 Voto nulo
        6 Voto em branco

    Fa�a um programa que calcule e mostre:
        - o total de votos para cada candidato;
        - o total de votos nulos;
        - o total de votos em branco;
        - a porcentagem de votos nulos sobre o total de votos; e
        - a porcentagem de votos em branco sobre o total de votos.

    Para finalizar o conjunto de votos, tem-se o valor zero e, para c�digos inv�lidos, o programa dever�
    mostrar uma mensagem.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int codigo = 10;                        //vari�vel que receber� o c�digo do usu�rio
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;     //vari�veis que receber�o a quantidade de votos para os respectivos candidatos
    int vNulo = 0, vBranco = 0;             //vari�veis que receber�o a quantidade dos respectivos votos
    float vTotais = 0;                      //vari�vel que receber� a quantidade de votos totais
    float pNulo, pBranco;                   //vari�veis que receberam a porcentagem de votos nulos e brancos, respectivamente


    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    while (codigo != 0 ) {                  //defini��o de condi��o para limitar o la�o de repeti��o
        printf("\n 0 - Sair\n");
        printf(" 1 - Candidato 1\n");
        printf(" 2 - Candidato 2\n");
        printf(" 3 - Candidato 3\n");
        printf(" 4 - Candidato 4\n");
        printf(" 5 - Voto nulo\n");
        printf(" 6 - Voto em branco\n");
        printf("Insira uma das op��es acima: ");
        scanf("%d", &codigo);

            //valida��o do c�digo
            while (codigo < 0 || codigo > 6) {
                printf("\nValor inv�lido. Tente novamente: ");
                scanf("%d", &codigo);
                printf("\n");
            }

        //categoriza��o dos votos
        if (codigo == 0) 
            break;         //comando para finalizar a execu��o do la�o while

        else if (codigo == 1) {
            c1++;
            vTotais++;
        }

        else if (codigo == 2) {
            c2++;
            vTotais++;
        }

        else if (codigo == 3) {
            c3++;
            vTotais++;
        }

        else if (codigo == 4) {
            c4++;
            vTotais++;
        }

        //total de votos nulos e brancos
        else if (codigo == 5) {
            vNulo++; 
            vTotais++;
        }

        else if (codigo == 6) {
            vBranco++; 
            vTotais++;
        }

        //porcentagem de votos nulos e em branco
        pNulo = vNulo * 100 / vTotais;
        pBranco = vBranco * 100 / vTotais;

    }

    //output de dados =========================================================================================================================================
    if (c1 != 0) {
        printf("\nResultados:\n");
        printf(" Total de votos para cada candidato: C1 = %d | C2 = %d | C3 = %d | C4 = %d\n", c1, c2, c3, c4);
        printf(" Total de votos nulos: %d\n", vNulo);
        printf(" Total de votos em branco: %d\n", vBranco);
        printf(" Porcentagem de votos nulos: %.2f%%\n", pNulo);
        printf(" Porcentagem de votos em branco: %.2f%%", pBranco);
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}