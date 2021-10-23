/*=============================================================================================================================================================
    Exerc�cio 13 - Cap�tulo 05
    
    Fa�a um programa que receba a idade e o peso de quinze pessoas, e que calcule e mostre as m�dias dos
    pesos das pessoas da mesma faixa et�ria. As faixas et�rias s�o: de 1 a 10 anos, de 11 a 20 anos, de 21 a
    30 anos e de 31 anos para cima.    
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int controle;                               //limitante da quantidade de n�meros a serem inseridos
    float idade, peso;                          //vari�veis que ir�o receber os respectivos valores do usu�rio
    float m1 = 0, m2 = 0, m3 = 0, m4 = 0;       //vari�veis que ir�o receber os resultados das m�dias da faixa 1, 2, 3 e 4
    float p1 = 0, p2 = 0, p3 = 0, p4 = 0;       //vari�veis que ir�o receber a quantidade de pessoas por faixa et�ria

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    for (controle = 1 ; controle < 16 ; controle ++) {              //defini��o de condi��o para limitar o la�o de repeti��o
        printf("Insira a idade da pessoa %d: ", controle);          
        scanf("%f", &idade);

            //vaida��o da idade inserida
            while (idade <= 0) {
                printf("\nO valor inserido � inv�lido. Insira um novo valor: ");
                scanf("%f", &idade);
                printf("\n");
            }

        printf("Insira o peso da pessoa %d: ", controle);
        scanf("%f", &peso);
        printf("\n");

            //vaida��o do peso inserido
            while (peso < 0) {
                printf("\nO valor inserido � inv�lido. Insira um novo valor: ");
                scanf("%f", &peso);
                printf("\n");
            }
        
            //categoriza��o dos pesos nas faixas et�rias correspondentes 
            if (idade >= 1 && idade <= 10) {
                m1 += peso;
                p1++;
            }

            else if (idade >= 11 && idade <= 20) {
                m2 += peso;
                p2++;
            }

            else if (idade >= 21 && idade <= 30) {
                m3 += peso;
                p3++;
            }

            else {
                m4 += peso;
                p4++;
            }
    }

    //processamento de dados II ===============================================================================================================================
    m1 /= p1;
    m2 /= p2;
    m3 /= p3;
    m4 /= p4;

    //output de dados =========================================================================================================================================
    printf("\n\nM�dia da faixa 1-10: %.2f\nM�dia da faixa 11-20: %.2f\nM�dia da faixa 21-30: %.2f\nM�dia da faixa 31+: %.2f\n", m1, m2, m3, m4);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}