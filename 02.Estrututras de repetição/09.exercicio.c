/*=============================================================================================================================================================
    Exerc�cio 09 - Cap�tulo 05
    
    Fa�a um programa que receba dez idades, pesos e alturas, calcule e mostre:
        a m�dia das idades das dez pessoas;
        a quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro; e
        a porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int controle;                   //limitante da quantidade de n�meros a serem inseridos
    int p90a15 = 0;                 //vari�vel que ir� receber a quantidade de pessoas com peso superior a 90kg e altura inferior a 1,50m;
    float idade, peso, altura;      //vari�veis intermediadoras para receber os respectivos valores do usu�rio
    float mIdade = 0;               //vari�vel que ir� receber a m�dia das idades
    float porcPessoas = 0;          //vari�vel que ir� receber a porcentagem de pessoas com mais de 1,90m de altura e idade entre 10 e 30 anos
    float pessoas19 = 0;            //vari�vel que ir� receber a quantidade de pessoas com mais de 1,90m de altura

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    for (controle = 1 ; controle < 11 ; controle++) {       //defini��o de condi��o para limitar o la�o de repeti��o
        printf("Insira a idade da pessoa %d: ", controle);  //processamento de dados envolvendo a idade
        scanf("%f", &idade);

            //valida��o da idade
            while (idade < 0) {
                printf("\nIdade inv�lida. Insira outro valor: ");
                scanf("%f", &idade);
                printf("\n");
            }

            //armazenar o valor das idades
            mIdade += idade;

        printf("Insira o peso da pessoa %d: ", controle);   //processamento de dados envolvendo o peso 
        scanf("%f", &peso);

            //valida��o do peso
            while (peso <= 0) {
                printf("\nPeso inv�lido. Insira outro valor: ");
                scanf("%f", &peso);
                printf("\n");
            }

        printf("Insira a altura da pessoa %d: ", controle);     //processamento de dados envolvendo a altura
        scanf("%f", &altura);
        printf("\n");

            //valida��o da altura
            while (altura <= 0) {
                printf("\nAltura inv�lida. Insira outro valor: ");
                scanf("%f", &altura);
                printf("\n");
            }

            //condi��o para pessoas com peso maior que 90kg e altura inferior a 1,50m
            if (peso > 90 && altura < 1.5) {
                p90a15++;
            }

            //condi��o para pessoas que medem mais que 1,90m
            if (altura > 1.9) {
                pessoas19++;

                //condi��o para pessoas com idade entre 10 e 30 anos
                if (idade > 10 && idade < 30) {
                    porcPessoas++;
                }
            }
    }
    

    //processamento de dados II ===============================================================================================================================
    mIdade /= 10;                       //c�lculo da m�dia das idades
    porcPessoas *= 100 / pessoas19;     //c�lculo da procentagem de pessoas com mais de 1,90m de altura e idade entre 10 e 30 anos

    //output de dados =========================================================================================================================================
    printf("\nOs resultados s�o:\n M�dia das idades: %.2f\n", mIdade);
    printf(" Quantidade de pessoas com peso superior a 90kg e altura inferior a 1,50m: %d\n", p90a15);
    printf(" Porcentagem de pessoas com mais de 1,90m de altura e idade entre 10 e 30 anos: %.2f%%", porcPessoas);


    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}