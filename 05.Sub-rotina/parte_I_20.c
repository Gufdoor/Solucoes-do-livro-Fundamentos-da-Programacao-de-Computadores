/*=============================================================================================================================================================
    Exerc�cio 20 - Parte 01
    
    A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o sal�rio e o
    n�mero de filhos. Fa�a uma sub-rotina que leia esses dados para um n�mero n�o determinado de pessoas
    e retorne a m�dia de sal�rio da popula��o, a m�dia do n�mero de filhos, o maior sal�rio e o percentual
    de pessoas com sal�rio inferior a R$ 380,00.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//fun��es secund�rias =========================================================================================================================================

    //pesquisa da prefeitura ----------------------------------------------------------------------------------------------------------------------------------
    void pesquisa (float *mediaS, float *mediaF, float *maiorS, float *porcInf) {

        //declara��o de vari�veis
        float quantidade = 0;
        float quantidadeFilhos = 0;
        float quantidadePorc = 0;
        float filhos;
        float salario;
        int ordem = 1;

        //input de dados
        do {
        printf("\n%d - Insira o sal�rio ou 0 para terminar: ", ordem);
        scanf("%f", &salario);

            //valida��o do sal�rio
            while (salario < 0) {
                printf("\nValor inv�lido. Insira o sal�rio ou 0 para terminar: ");
                scanf("%f", &salario);
                printf("\n");
            }

            //salario igual a 0
            if (salario == 0)
                break;

            //maior sal�rio
            if (salario > *maiorS)
                *maiorS = salario;

            //salario inferior a 380
            if (salario < 380) 
                quantidadePorc++;

        *mediaS += salario;
        quantidade++;

        printf("\nInsira o numero de filhos: ", ordem);
        scanf("%f", &filhos);

            //valida��o do sal�rio
            while (filhos < 0) {
                printf("\nValor inv�lido. Insira o numero de filhos: ");
                scanf("%f", &filhos);
                printf("\n");
            }

        *mediaF += filhos;
        quantidadeFilhos++;

        ordem++;

        } while (salario != 0);

        //processamento de dados

            //media salarial 
            *mediaS /= quantidade;

            //media de filhos
            *mediaF /= quantidadeFilhos;

            //porcentagem de pessoas com sal�rio menor que 380
            *porcInf = quantidadePorc / quantidade * 100;

    }

//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    float mediaS = 0, mediaF = 0, maiorS = 0, porcInf = 0;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //processamento de dados ==================================================================================================================================
    printf("\nBem vindo :) \n\n");

    pesquisa(&mediaS, &mediaF, &maiorS, &porcInf);

    //output de dados =========================================================================================================================================
    printf("\nOs resultados s�o:\n M�dia salarial: R$%.2f\n M�dia do n�mero de filhos: %.2f\n Maior sal�rio: R$%.2f", mediaS, mediaF, maiorS);
    printf("\n Percentual de pessoas com sal�rio inferior a R$ 380,00: %.2f%%", porcInf);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}