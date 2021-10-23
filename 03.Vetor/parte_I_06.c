/*=============================================================================================================================================================
    Exerc�cio 06 - Parte 01
    
    Fa�a um programa que receba o total das vendas de cada vendedor de uma loja e armazene-as em um vetor.
    Receba tamb�m o percentual de comiss�o a que cada vendedor tem direito e armazene-os em outro vetor.
    Receba os nomes desses vendedores e armazene-os em um terceiro vetor. Existem apenas dez vendedores na
    loja. Calcule e mostre:

        - um relat�rio com os nomes dos vendedores e os valores a receber referentes � comiss�o;
        - o total das vendas de todos os vendedores;
        - o maior valor a receber e o nome de quem o receber�;
        - o menor valor a receber e o nome de quem o receber�.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <stdlib.h>     //biblioteca para fun��es de aloca��o de mem�ria


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    char *vendedores[9];
    float vendas[9];
    float comissao[9];
    float relatorio[9];
    float maior = 0, menor = 999;
    float total = 0;
    int indiceMaior, indiceMenor;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    for (int i = 0 ; i <= 9 ; i++) {                    //percorrer e preencher o vetor com os nomes dos vendedores
        vendedores[i] = malloc(sizeof(char) * 18);
        printf("%d - Insira o nome do vendedor: ", i);
        scanf("%s", vendedores[i]);
    }

    printf("\n");

    for (int i = 0 ; i <= 9 ; i++) {                    //percorrer e preencher o vetor com a quantidade de vendas dos vendedores
        printf("%d - Insira o total das vendas do vendedor: ", i);
        scanf("%f", &vendas[i]);

        //valida��o da quantidade
        while (vendas[i] < 0) {
            printf(" Valor inv�lido. Insira o total das vendas do vendedor: ");
            scanf("%f", &vendas[i]);
        }
    }

    printf("\n");

    for (int i = 0 ; i <= 9 ; i++) {                    //percorrer e preencher o vetor com as comiss�es dos vendedores
        printf("%d - Insira o percentual da comissao do vendedor: ", i);
        scanf("%f", &comissao[i]);

        //valida��o da comissao
        while (comissao[i] < 0) {
            printf(" Valor inv�lido. Insira o percentual da comissao do vendedor: ");
            scanf("%f", &comissao[i]);
        }
    }

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 9 ; i++)                          //percorrer e preencher o vetor com o total das vendas associado � comiss�o 
        relatorio[i] = vendas[i] * comissao[i];
    
    for (int i = 0 ; i <= 9 ; i++)                          //percorrer e atribuir a vari�vel o total de vendas de cada vendedor
        total += vendas[i];

    for (int i = 0 ; i <= 9 ; i++) {                        //percorrer o vetor e definir o maior valor entre os demais no relat�rio
        if (relatorio[i] > maior) {
            maior = relatorio[i];
            indiceMaior = i;
        }
    }

    for (int i = 0 ; i <= 9 ; i++) {                        //percorrer o vetor e definir o menor valor entre os demais no relat�rio
        if (relatorio[i] < menor) {
            menor = relatorio[i];
            indiceMenor = i;
        }
    }

    //output de dados =========================================================================================================================================
    printf("\n\nRelat�rio:\n");
    for (int i = 0 ; i <= 9 ; i++) 
        printf(" %s - R$%.2f\n", vendedores[i], relatorio[i]);
    
    printf("\nTotal das vendas: R$%.2f", total);

    printf("\n\nMaior valor:\n R$%.2f - %s", maior, vendedores[indiceMaior]);
    printf("\n\nMenor valor:\n R$%.2f - %s", menor, vendedores[indiceMenor]);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}