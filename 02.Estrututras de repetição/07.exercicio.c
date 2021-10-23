/*=============================================================================================================================================================
    Exerc�cio 07 - Cap�tulo 05
    
    Fa�a um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
        ? a quantidade de pessoas com idade superior a 50 anos;
        ? a m�dia das alturas das pessoas com idade entre 10 e 20 anos;
        ? a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int controle;               //limitante da quantidade de n�meros a serem inseridos
    float i50 = 0;              //total de pessoas com idade maior que 50 anos
    float mAltura1020 = 0;      //m�dia das alturas das pessoas com idade entre 10 e 20
    float pPeso40;              //porcentagem de pessoas que pesam menos que 40kg
    float idade, peso, altura;  //vari�veis intermediadoras para receber os respectivos valores do usu�rio
    int pessoas = 0;            //vari�vel para o n� pessoas com idade entre 10 e 20

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");

    for (controle = 1 ; controle < 6 ; controle ++) {       //defini��o de condi��o para limitar o la�o de repeti��o
        printf("Insira a idade da pessoa %d: ", controle);  //processamento de dados envolvendo a idade
        scanf("%f", &idade);

            //valida��o da idade
            while (idade < 0) {
                printf("\nIdade inv�lida. Insira outro valor: ");
                scanf("%f", &idade);
                printf("\n");
            }

            //condi��o para idade maior que 50
            if (idade > 50) {
                i50++;
            }

        printf("Insira a altura da pessoa %d: ", controle); //processamento de dados envolvendo a altura
        scanf("%f", &altura);

            //valida��o da altura
            while (altura <= 0) {
                printf("\nAltura inv�lida. Insira outro valor: ");
                scanf("%f", &altura);
                printf("\n");
            }

            //condi��o para idades entre 10 e 20
            if (idade > 10 && idade < 20) {
                mAltura1020 += altura;
                pessoas++;
            }

        printf("Insira o peso da pessoa %d: ", controle); //processamento de dados envolvendo o peso 
        scanf("%f", &peso);
        printf("\n");

            //valida��o do peso
            while (peso <= 0) {
                printf("\nPeso inv�lido. Insira outro valor: ");
                scanf("%f", &peso);
                printf("\n");
            }

            //condi��o para pesos menores que 40
            if (peso < 40) {
                pPeso40++;
            }
    }
    
    //processamento de dados II ===============================================================================================================================
    mAltura1020 /= pessoas;     //c�culo da m�dia da altura das pessoas com idade entre 10 e 20
    pPeso40 *= 100 / 5;         //c�lculo da porcentagem de pessoas que pesam menos que 40kg

    //output de dados =========================================================================================================================================
    printf("\nOs resultados s�o:\n Quantidade de pessoas com idade superior a 50 anos: %.f\n M�dia das alturas das pessoas com idade entre 10 e 20 anos: %.2f", i50, mAltura1020);
    printf("\n Porcentagem de pessoas com peso inferior a 40kg: %.2f%%", pPeso40);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}