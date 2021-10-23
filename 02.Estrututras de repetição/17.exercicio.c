/*=============================================================================================================================================================
    Exerc�cio 17 - Cap�tulo 05
    
    Foi feita uma pesquisa sobre a audi�ncia de canal de TV em v�rias casas de uma cidade, em determinado
    dia. Para cada casa consultada foi fornecido o n�mero do canal (4, 5, 7, 12) e o n�mero de pessoas que
    estavam assistindo �quele canal. Se a televis�o estivesse desligada, nada era anotado, ou seja, essa casa
    n�o entrava na pesquisa. Fa�a um programa que:

        - leia um n�mero indeterminado de dados (n�mero do canal e n�mero de pessoas que estavam assistindo);
        - calcule e mostre a porcentagem de audi�ncia de cada canal.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int controle = 1;                                   //limitante da quantidade de n�meros a serem inseridos
    int canal = 1, pessoas;                             //vari�veis intermediadoras que receber�o os respectivos dados do usu�rio
    int nPessoas = 0;                                   //vari�vel que receber� a quantidade total de pessoas
    float pC4 = 0, pC5 = 0, pC7 = 0, pC12 = 0;          //vari�veis que receber�o as respectivas porcentagens 

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");

    while (canal != 0) {             //defini��o de condi��o para limitar o la�o de repeti��o
        printf("\n%d - Insira um canal (4, 5, 7 ou 12), ou insira 0 para finalizar: ", controle);
        scanf("%d", &canal);

            //valida��o da idade
            while (canal != 4 && canal != 5 && canal != 7 && canal != 12 && canal != 0) {
                printf("\nValor inv�lido. Tente novamente: ");
                scanf("%d", &canal);
                printf("\n");
            }

            //quando 0 for inserido
            if (canal == 0) {
                if (pC4 == 0 && pC5 == 0 && pC7 == 0 && pC12 == 0) {    //se o usu�rio n�o tiver inserido nenhuma idade anteriormente, n�o haver� porcentagem a ser calculada
                    printf("\n\nVoc� n�o inseriu nenhum valor anteriormente.\n\n\n");
                    return(0);
                }

                break;      //comando para terminar a execu��o do la�o while
            }

        printf("%d - Insira a quantidade de pessoas que estavam assistindo ao canal: ", controle);
        scanf("%d", &pessoas);

            //valida��o da quantidade de pessoas
            while (pessoas <= 0) {
                printf("\nValor inv�lido. Tente novamente: ");
                scanf("%d", &pessoas);
                printf("\n");
            }

            //condi��o para categorizar canais
            if (canal == 4) {
                pC4 += pessoas;
                nPessoas += pessoas;
                controle++;
            }

            else if (canal == 5) {
                pC5 += pessoas;
                nPessoas += pessoas;
                controle++;
            }

            else if (canal == 7) {
                pC7 += pessoas;
                nPessoas += pessoas;
                controle++;
            }

            else if (canal == 12) {
                pC12 += pessoas;
                nPessoas += pessoas;
                controle++;
            }
    }

    //processamento de dados II ===============================================================================================================================
    pC4 *= 100 / nPessoas;      //c�lculo da porcentagem da quantidade do p�blico do canal 4
    pC5 *= 100 / nPessoas;      //c�lculo da porcentagem da quantidade do p�blico do canal 5
    pC7 *= 100 / nPessoas;      //c�lculo da porcentagem da quantidade do p�blico do canal 7
    pC12 *= 100 / nPessoas;      //c�lculo da porcentagem da quantidade do p�blico do canal 12

    //output de dados =========================================================================================================================================
    printf("\nAudi�ncia dos canais:\n Canal 4: %.2f%%\n Canal 5: %.2f%%\n Canal 7: %.2f%%\n Canal 12: %.2f%%", pC4, pC5, pC7, pC12);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}