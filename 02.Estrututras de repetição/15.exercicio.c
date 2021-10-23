/*=============================================================================================================================================================
    Exerc�cio 15 - Cap�tulo 05
    
    Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou n�o de um novo produto
    lan�ado. Para isso, forneceu o sexo do entrevistado e sua resposta (S ? sim; ou N ? n�o). Sabe-se
    que foram entrevistadas dez pessoas. Fa�a um programa que calcule e mostre:

        - o n�mero de pessoas que responderam sim;
        - o n�mero de pessoas que responderam n�o;
        - o n�mero de mulheres que responderam sim; e
        - a porcentagem de homens que responderam n�o, entre todos os homens analisados.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int controle;                           //limitante da quantidade de n�meros a serem inseridos
    int nS = 0, nN = 0, mS = 0;             //vari�veis que ir�o receber o n�mero de pessoas que responderam sim, n�o e mulheres que responderam sim
    int homens = 0;                         //vari�vel que ir� receber o n�mero total de homens
    char genero;                            //vari�vel que ir� receber e intermediar o g�nero
    char intermediador;                     //vari�vel que ir� receber e intermediar a resposta
    float pHomensN;                         //vari�vel que ir� receber a porcentagem de homens que responderam n�o

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    for (controle = 1 ; controle < 11 ; controle++) {               //defini��o de condi��o para limitar o la�o de repeti��o
        printf("\nSelecione o g�nero da pessoa %d (H - Homem, M - Mulher): ", controle);
        scanf(" %c", &genero);

            //valida��o do g�nero inserido
            while (genero != 'H' && genero != 'M') {
                printf("\nOp��o inv�lida. Tente novamente: ");
                scanf(" %c", &genero);
                printf("\n");
            }

        printf("Selecione a resposta da pessoa %d (S - sim, N - N): ", controle);
        scanf(" %c", &intermediador);

            //valida��o da resposta inserida
            while (intermediador != 'S' && intermediador != 'N') {
                printf("\nOp��o inv�lida. Tente novamente: ");
                scanf(" %c", &intermediador);
                printf("\n");
            }

        if (intermediador == 'S') {         //pessoas que responderam SIM
            nS++;
        }
        else if (intermediador == 'N') {    //pessoas que responderam N�O
            nN++;
        }

        if (genero == 'M' && intermediador == 'S') {    //mulheres que responderam SIM
            mS++;
        }
        
        if (genero == 'H') {                //quantidade de homens de homens 
            homens++; 

            if (intermediador == 'N') {     //homens que responderam N�O
                pHomensN++;
            }
        }
    }

    //processamento de dados II ===============================================================================================================================
    pHomensN *= 100 / homens;

    //output de dados =========================================================================================================================================
    printf("\nN�mero de pessoas que responderam SIM: %d", nS);
    printf("\nN�mero de pessoas que responderam N�O: %d", nN);
    printf("\nN�mero de mulheres que responderam SIM: %d", mS);
    printf("\nPorcentagem de homens que responderam N�O entre o total de homens: %.2f%%", pHomensN);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}