/*=============================================================================================================================================================
    Exercício 14 - Capítulo 05
    
    Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião
    em relação ao filme: ótimo ? 3; bom ? 2; regular ? 1. Faça um programa que receba a idade e a opinião
    de quinze espectadores, calcule e mostre:

        - a média das idades das pessoas que responderam ótimo;
        - a quantidade de pessoas que responderam regular; e
        - a porcentagem de pessoas que responderam bom, entre todos os espectadores analisados.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int controle;                               //limitante da quantidade de números a serem inseridos
    float idade, opiniao;                       //variáveis que irão receber os respectivos valores do usuário
    float m1 = 0;                               //variável que irá receber o resultado da médias de pessoas que acharam ótimo
    float p1 = 0, p2 = 0, p3 = 0;               //variáveis que irão receber uma certa quantidade de pessoas
    float porc;                                 //variável que irá receber a porcentagem de pessoas que responderam "bom"

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    for (controle = 1 ; controle < 16 ; controle ++) {              //definição de condição para limitar o laço de repetição
        printf("Insira a idade da pessoa %d: ", controle);          
        scanf("%f", &idade);

            //vaidação da idade inserida
            while (idade <= 0) {
                printf("\nO valor inserido é inválido. Insira um novo valor: ");
                scanf("%f", &idade);
                printf("\n");
            }

        printf("1 - Regular\n2 - Bom\n3 - ótimo");
        printf("\n\nInsira o código da opinião da pessoa %d: ", controle);
        scanf("%f", &opiniao);
        printf("\n");

            //vaidação da opinião inserida
            while (opiniao != 1 && opiniao != 2 && opiniao != 3) {
                printf("\nO valor inserido é inválido. Insira um novo valor: ");
                scanf("%f", &opiniao);
                printf("\n");
            }
        
            //categorização das opiniões nas faixas etárias correspondentes 
            if (opiniao == 3) {
                m1 += idade;
                p1++;
            }

            else if (opiniao == 1) {
                p2++;
            }

            else if (opiniao == 2) {
                p3++;
            }
    }

    //processamento de dados II ===============================================================================================================================
    m1 /= p1;                   //cálculo da média de quem achou o filme ótimo
    porc = p3 * 100 / 15;       //cálculo da porcentagem de quem achou o filme bom

    //output de dados =========================================================================================================================================
    printf("\n\nMédia das idades de quem achou o filme ótimo: %.2f\nQuantidade de pessoas que acharam o filme regular: %.f\n", m1, p2);
    printf("Porcentagem de pessoas que acharam o filme bom: %.2f%%", porc);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}