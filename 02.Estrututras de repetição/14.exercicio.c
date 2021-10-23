/*=============================================================================================================================================================
    Exerc�cio 14 - Cap�tulo 05
    
    Cada espectador de um cinema respondeu a um question�rio no qual constava sua idade e sua opini�o
    em rela��o ao filme: �timo ? 3; bom ? 2; regular ? 1. Fa�a um programa que receba a idade e a opini�o
    de quinze espectadores, calcule e mostre:

        - a m�dia das idades das pessoas que responderam �timo;
        - a quantidade de pessoas que responderam regular; e
        - a porcentagem de pessoas que responderam bom, entre todos os espectadores analisados.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int controle;                               //limitante da quantidade de n�meros a serem inseridos
    float idade, opiniao;                       //vari�veis que ir�o receber os respectivos valores do usu�rio
    float m1 = 0;                               //vari�vel que ir� receber o resultado da m�dias de pessoas que acharam �timo
    float p1 = 0, p2 = 0, p3 = 0;               //vari�veis que ir�o receber uma certa quantidade de pessoas
    float porc;                                 //vari�vel que ir� receber a porcentagem de pessoas que responderam "bom"

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

        printf("1 - Regular\n2 - Bom\n3 - �timo");
        printf("\n\nInsira o c�digo da opini�o da pessoa %d: ", controle);
        scanf("%f", &opiniao);
        printf("\n");

            //vaida��o da opini�o inserida
            while (opiniao != 1 && opiniao != 2 && opiniao != 3) {
                printf("\nO valor inserido � inv�lido. Insira um novo valor: ");
                scanf("%f", &opiniao);
                printf("\n");
            }
        
            //categoriza��o das opini�es nas faixas et�rias correspondentes 
            if (opiniao == 3) {
                m1 += idade;
                p1++;
            }

            else if (opiniao == 1) {
                p2++;
            }

            else if (opiniao == 2) {
                p3++;
            }
    }

    //processamento de dados II ===============================================================================================================================
    m1 /= p1;                   //c�lculo da m�dia de quem achou o filme �timo
    porc = p3 * 100 / 15;       //c�lculo da porcentagem de quem achou o filme bom

    //output de dados =========================================================================================================================================
    printf("\n\nM�dia das idades de quem achou o filme �timo: %.2f\nQuantidade de pessoas que acharam o filme regular: %.f\n", m1, p2);
    printf("Porcentagem de pessoas que acharam o filme bom: %.2f%%", porc);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}