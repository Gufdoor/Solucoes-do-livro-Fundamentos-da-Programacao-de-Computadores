/*=============================================================================================================================================================
    Exerc�cio 03 - Cap�tulo 05
    
    Fa�a um programa que receba a idade de oito pessoas, calcule e mostre:
        a) a quantidade de pessoas em cada faixa et�ria;
        b) a porcentagem de pessoas na primeira faixa et�ria com rela��o ao total de pessoas.
        c) a porcentagem de pessoas na �ltima faixa et�ria com rela��o ao total de pessoas

            FAIXA ET�RIA                    IDADE
            1a                              At� 15 anos
            2a                              De 16 a 30 anos
            3a                              De 31 a 45 anos
            4a                              De 46 a 60 anos
            5a                              Acima de 60 anos
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int controle = 8;                               //controle da quantidade de idades a serem inseridas
    int qPessoas = 8;                               //quantidade total de pessoas
    int f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;     //faixas et�rias
    int idade;                                      //idades que v�o ser inseridas
    float porc1, porc5;                             //porcentagem de pessoas nas faixas 1 e 5

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");

    while (controle > 0) {
    printf("Insira uma idade qualquer: ");
    scanf("%d", &idade);

        //teste de valida��o (idades n�o podem ser menor que 0)
        while (idade < 0) {
            printf("\nA idade n�o pode ser negativa. Insira outro valor: ");
            scanf("%d", &idade);
            printf("\n");
        }

        //condi��o para organizar as idades entre as faixas et�rias
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

        //c�lculo da porcentagem de pessoas na faixa 1 e 5
        porc1 = 100 * f1 / 8;
        porc5 = 100 * f5 / 8;

    //output de dados =========================================================================================================================================
    printf("\n\nQuantidade de pessoas por faixa et�ria:\n 1� = %d\n 2� = %d\n 3� = %d\n 4� = %d\n 5� = %d", f1, f2, f3, f4, f5);
    printf("\n\nPorcentagem de pessoas na faixa 1: %.2f%%", porc1);
    printf("\nPorcentagem de pessoas na faixa 5: %.2f%%", porc5);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}