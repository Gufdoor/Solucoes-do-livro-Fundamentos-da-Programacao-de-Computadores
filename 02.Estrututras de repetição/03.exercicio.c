/*=============================================================================================================================================================
    Exercício 03 - Capítulo 05
    
    Faça um programa que receba a idade de oito pessoas, calcule e mostre:
        a) a quantidade de pessoas em cada faixa etária;
        b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas.
        c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas

            FAIXA ETÁRIA                    IDADE
            1a                              Até 15 anos
            2a                              De 16 a 30 anos
            3a                              De 31 a 45 anos
            4a                              De 46 a 60 anos
            5a                              Acima de 60 anos
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int controle = 8;                               //controle da quantidade de idades a serem inseridas
    int qPessoas = 8;                               //quantidade total de pessoas
    int f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;     //faixas etárias
    int idade;                                      //idades que vão ser inseridas
    float porc1, porc5;                             //porcentagem de pessoas nas faixas 1 e 5

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");

    while (controle > 0) {
    printf("Insira uma idade qualquer: ");
    scanf("%d", &idade);

        //teste de validação (idades não podem ser menor que 0)
        while (idade < 0) {
            printf("\nA idade não pode ser negativa. Insira outro valor: ");
            scanf("%d", &idade);
            printf("\n");
        }

        //condição para organizar as idades entre as faixas etárias
        if (idade <= 15) {
            f1++;
            controle--;
        }

        else if (idade >= 16 && idade <= 30) {
            f2++;
            controle--;
        }

        else if (idade >= 31 && idade <= 45) {
            f3++;
            controle--;
        }

        else if (idade >= 46 && idade <= 60) {
            f4++;
            controle--;
        }

        else if (idade > 60) {
            f5++;
            controle--;
        }

    }

    //processamento de dados ==================================================================================================================================

        //cálculo da porcentagem de pessoas na faixa 1 e 5
        porc1 = 100 * f1 / 8;
        porc5 = 100 * f5 / 8;

    //output de dados =========================================================================================================================================
    printf("\n\nQuantidade de pessoas por faixa etária:\n 1ª = %d\n 2ª = %d\n 3ª = %d\n 4ª = %d\n 5ª = %d", f1, f2, f3, f4, f5);
    printf("\n\nPorcentagem de pessoas na faixa 1: %.2f%%", porc1);
    printf("\nPorcentagem de pessoas na faixa 5: %.2f%%", porc5);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}