/*=============================================================================================================================================================
    Exercício 20 - Parte 01
    
    A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e o
    número de filhos. Faça uma sub-rotina que leia esses dados para um número não determinado de pessoas
    e retorne a média de salário da população, a média do número de filhos, o maior salário e o percentual
    de pessoas com salário inferior a R$ 380,00.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//funções secundárias =========================================================================================================================================

    //pesquisa da prefeitura ----------------------------------------------------------------------------------------------------------------------------------
    void pesquisa (float *mediaS, float *mediaF, float *maiorS, float *porcInf) {

        //declaração de variáveis
        float quantidade = 0;
        float quantidadeFilhos = 0;
        float quantidadePorc = 0;
        float filhos;
        float salario;
        int ordem = 1;

        //input de dados
        do {
        printf("\n%d - Insira o salário ou 0 para terminar: ", ordem);
        scanf("%f", &salario);

            //validação do salário
            while (salario < 0) {
                printf("\nValor inválido. Insira o salário ou 0 para terminar: ");
                scanf("%f", &salario);
                printf("\n");
            }

            //salario igual a 0
            if (salario == 0)
                break;

            //maior salário
            if (salario > *maiorS)
                *maiorS = salario;

            //salario inferior a 380
            if (salario < 380) 
                quantidadePorc++;

        *mediaS += salario;
        quantidade++;

        printf("\nInsira o numero de filhos: ", ordem);
        scanf("%f", &filhos);

            //validação do salário
            while (filhos < 0) {
                printf("\nValor inválido. Insira o numero de filhos: ");
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

            //porcentagem de pessoas com salário menor que 380
            *porcInf = quantidadePorc / quantidade * 100;

    }

//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    float mediaS = 0, mediaF = 0, maiorS = 0, porcInf = 0;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //processamento de dados ==================================================================================================================================
    printf("\nBem vindo :) \n\n");

    pesquisa(&mediaS, &mediaF, &maiorS, &porcInf);

    //output de dados =========================================================================================================================================
    printf("\nOs resultados são:\n Média salarial: R$%.2f\n Média do número de filhos: %.2f\n Maior salário: R$%.2f", mediaS, mediaF, maiorS);
    printf("\n Percentual de pessoas com salário inferior a R$ 380,00: %.2f%%", porcInf);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}