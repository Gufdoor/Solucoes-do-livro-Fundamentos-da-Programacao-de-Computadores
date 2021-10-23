/*=============================================================================================================================================================
    Exercício 06 - Parte 01
    
    Faça um programa que receba o total das vendas de cada vendedor de uma loja e armazene-as em um vetor.
    Receba também o percentual de comissão a que cada vendedor tem direito e armazene-os em outro vetor.
    Receba os nomes desses vendedores e armazene-os em um terceiro vetor. Existem apenas dez vendedores na
    loja. Calcule e mostre:

        - um relatório com os nomes dos vendedores e os valores a receber referentes à comissão;
        - o total das vendas de todos os vendedores;
        - o maior valor a receber e o nome de quem o receberá;
        - o menor valor a receber e o nome de quem o receberá.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <stdlib.h>     //biblioteca para funções de alocação de memória


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    char *vendedores[9];
    float vendas[9];
    float comissao[9];
    float relatorio[9];
    float maior = 0, menor = 999;
    float total = 0;
    int indiceMaior, indiceMenor;

    //definição para idioma
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

        //validação da quantidade
        while (vendas[i] < 0) {
            printf(" Valor inválido. Insira o total das vendas do vendedor: ");
            scanf("%f", &vendas[i]);
        }
    }

    printf("\n");

    for (int i = 0 ; i <= 9 ; i++) {                    //percorrer e preencher o vetor com as comissões dos vendedores
        printf("%d - Insira o percentual da comissao do vendedor: ", i);
        scanf("%f", &comissao[i]);

        //validação da comissao
        while (comissao[i] < 0) {
            printf(" Valor inválido. Insira o percentual da comissao do vendedor: ");
            scanf("%f", &comissao[i]);
        }
    }

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 9 ; i++)                          //percorrer e preencher o vetor com o total das vendas associado à comissão 
        relatorio[i] = vendas[i] * comissao[i];
    
    for (int i = 0 ; i <= 9 ; i++)                          //percorrer e atribuir a variável o total de vendas de cada vendedor
        total += vendas[i];

    for (int i = 0 ; i <= 9 ; i++) {                        //percorrer o vetor e definir o maior valor entre os demais no relatório
        if (relatorio[i] > maior) {
            maior = relatorio[i];
            indiceMaior = i;
        }
    }

    for (int i = 0 ; i <= 9 ; i++) {                        //percorrer o vetor e definir o menor valor entre os demais no relatório
        if (relatorio[i] < menor) {
            menor = relatorio[i];
            indiceMenor = i;
        }
    }

    //output de dados =========================================================================================================================================
    printf("\n\nRelatório:\n");
    for (int i = 0 ; i <= 9 ; i++) 
        printf(" %s - R$%.2f\n", vendedores[i], relatorio[i]);
    
    printf("\nTotal das vendas: R$%.2f", total);

    printf("\n\nMaior valor:\n R$%.2f - %s", maior, vendedores[indiceMaior]);
    printf("\n\nMenor valor:\n R$%.2f - %s", menor, vendedores[indiceMenor]);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}