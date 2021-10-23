/*=============================================================================================================================================================
    Exerc�cio 08 - Cap�tulo 05
    
    Fa�a um programa que receba a idade, o peso, a altura, a cor dos olhos (A ? azul; P ? preto; V ? verde; e
    C ? castanho) e a cor dos cabelos (P ? preto; C ? castanho; L ? louro; e R ? ruivo) de seis pessoas, e que
    calcule e mostre:
        - a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
        - a m�dia das idades das pessoas com altura inferior a 1,50 m;
        - a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; e
        - a quantidade de pessoas ruivas e que n�o possuem olhos azuis.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int controle;               //limitante da quantidade de n�meros a serem inseridos
    float peso, altura;         //vari�veis intermediadoras para receber os respectivos valores do usu�rio
    float mIdade = 0;           //vari�vel para a m�dia das idades das pessoas com altura menor que 1,50
    int idade;                  //vari�vel intermediadora para receber o respectivo valor do usu�rio
    int pI50;                   //vari�vel para a quantidade de pessoas com idade maior que 50 e peso menor que 60
    int pessoas1 = 0;           //vari�vel para contabilizar o n�mero de pessoas com altura menor que 1,50
    float pessoas2 = 0;         //vari�vel para contabilizar o n�mero de pessoas com olhos az�is 
    int pessoas3 = 0;           //vari�vel para contabilizar o n�mero de pessoas com cabelos ruivos e olhos n�o az�is
    char cOlhos, cCabelo;       //vari�veis intermediadoras para receber os respectivos valores do usu�rio

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");

    for (controle = 1 ; controle < 7 ; controle++) {        //defini��o de condi��o para limitar o la�o de repeti��o
        printf("Insira a idade da pessoa %d: ", controle);  //processamento de dados envolvendo a idade
        scanf("%d", &idade);

            //valida��o da idade
            while (idade < 0) {
                printf("\nIdade inv�lida. Insira outro valor: ");
                scanf("%d", &idade);
                printf("\n");
            }

        printf("Insira o peso da pessoa %d: ", controle); //processamento de dados envolvendo o peso 
        scanf("%f", &peso);

            //valida��o do peso
            while (peso <= 0) {
                printf("\nPeso inv�lido. Insira outro valor: ");
                scanf("%f", &peso);
                printf("\n");
            }

            //condi��o para pessoas com idade maior que 50 e peso menor que 60kg
            if (idade > 50 && peso < 60) {
                pI50++;
            }

        printf("Insira a altura da pessoa %d: ", controle); //processamento de dados envolvendo a altura
        scanf("%f", &altura);

            //valida��o da altura
            while (altura <= 0) {
                printf("\nAltura inv�lida. Insira outro valor: ");
                scanf("%f", &altura);
                printf("\n");
            }

            //condi��o para pessoas com altura menor que 1,50
            if (altura < 1.5) {
                mIdade += idade;
                pessoas1++;
            }

        printf("\nA - azul | P - preto | V - verde | C - castanho\nInsira a letra respectiva � cor dos olhos: ");
        scanf(" %c", &cOlhos);

            //valida��o da cor dos olhos
            while (cOlhos != 'A' && cOlhos != 'P' && cOlhos != 'V' && cOlhos != 'C') {
                printf("\nOp��o inv�lida. Insira outro caractere: ");
                scanf(" %c", &cOlhos);
                printf("\n");
            }

            //condi��o para pessoas com olhos az�is
            if (cOlhos == 'A') {
                pessoas2++;
            }

        printf("\nP - preto | C - castanho | L - louro | R - ruivo\nInsira a letra respectiva � cor dos cabelos: ");
        scanf(" %c", &cCabelo);
        printf("\n\n");

            //valida��o da cor dos cabelo
            while (cCabelo != 'P' && cCabelo != 'C' && cCabelo != 'L' && cCabelo != 'R') {
                printf("\nOp��o inv�lida. Insira outro caractere: ");
                scanf(" %c", &cCabelo);
                printf("\n\n");
            }

            //condi��o para pessoas com cabelo ruivo
            if (cCabelo == 'R' && cOlhos != 'A') {
                pessoas3++;
            }
    }
    
    //processamento de dados II ===============================================================================================================================
    mIdade /= pessoas1;         //c�culo da m�dia das idades das pessoas com altura inferior a 1,50
    pessoas2 *= 100 / 6;        //c�culo da porcentagem de pessoas com olhos az�is

    //output de dados =========================================================================================================================================
    printf("\nOs resultados s�o:\n Quantidade de pessoas com idade superior a 50 anos e peso inferior a 60kg: %d\n", pI50);
    printf(" M�dia das idades das pessoas com altura inferior a 1,50: %.2f\n", mIdade);
    printf(" Porcentagem de pessoas com olhos azuis: %.2f%%\n Quantidade de pessoas ruivas e que n�o possuem olhos azuis: %d", pessoas2, pessoas3);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}