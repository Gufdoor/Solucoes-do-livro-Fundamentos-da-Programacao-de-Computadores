/*=============================================================================================================================================================
    Exerc�cio 22 - Cap�tulo 05
    
    Fa�a um programa que receba a idade e a altura de v�rias pessoas, calcule e mostre a m�dia das alturas
    daquelas com mais de 50 anos. Para encerrar a entrada de dados, digite idade menor ou igual a zero.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    float idade = 1, altura = 0;                                //vari�veis que receber�o os respectivos valores do usu�rio
    float media = 0;                                            //vari�vel que receber� a m�dia das alturas com pessoas com mais de 50 anos
    float pessoas = 0;                                          //vari�vel que receber� a quantidade de pessoas que tem mais de 50 anos
    int ordem = 1;                                              //identificador de ciclos

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    //in�cio do la�o
    while (idade > 0) {        
        printf("\nInsira a idade da pessoa %d: ", ordem);       //receber idade
        scanf("%f", &idade);

            //valida��o de idade
            while (idade < 0) {
                printf("\nValor inv�lido. Tente novamente: ");
                scanf("%f", &idade);
                printf("\n");
            }

            //condi��o para idade igual 0
            if (idade <= 0) {
                break;      //comando para encerrar a execu��o do la�o
            }

        printf("Insira a altura da pessoa %d: ", ordem);        //receber altura
        scanf("%f", &altura);

            //valida��o da altura
            while (altura <= 0) {
                printf("\nValor inv�lido. Tente novamente: ");
                scanf("%f", &altura);
                printf("\n");
            }

        //condi��o de pessoas com idade maior que 50 anos
        if (idade > 50) {
            pessoas++; 
            media += altura;
        }

        //manter a propor��o da ordem
        ordem++;
    }

    //processamento de dados II ===============================================================================================================================
    if (media != 0)     //condi��o para executar somente quando houver pessoas com mais de 50 anos
        media /= pessoas;       //c�lculo da m�dia

    //output de dados =========================================================================================================================================
    if (altura != 0) {      //condi��o para executar somente quando tiver sido algum valor anteriormente   
        if (media != 0)     //condi��o para executar somente quando houver pessoas com mais de 50 anos
            printf("\n\nA m�dia das alturas das pessoas com mais de 50 anos � %.2f.", media);
        
        else                //condi��o para executar quando n�o houver pessoas com idade maior que 50
            printf("\n\nN�o foram inseridas pessoas com idade maior de 50 anos.");
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}