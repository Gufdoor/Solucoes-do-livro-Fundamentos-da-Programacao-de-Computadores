/*=============================================================================================================================================================
    Exercício 13 - Capítulo 05
    
    Faça um programa que receba a idade e o peso de quinze pessoas, e que calcule e mostre as médias dos
    pesos das pessoas da mesma faixa etária. As faixas etárias são: de 1 a 10 anos, de 11 a 20 anos, de 21 a
    30 anos e de 31 anos para cima.    
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int controle;                               //limitante da quantidade de números a serem inseridos
    float idade, peso;                          //variáveis que irão receber os respectivos valores do usuário
    float m1 = 0, m2 = 0, m3 = 0, m4 = 0;       //variáveis que irão receber os resultados das médias da faixa 1, 2, 3 e 4
    float p1 = 0, p2 = 0, p3 = 0, p4 = 0;       //variáveis que irão receber a quantidade de pessoas por faixa etária

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

        printf("Insira o peso da pessoa %d: ", controle);
        scanf("%f", &peso);
        printf("\n");

            //vaidação do peso inserido
            while (peso < 0) {
                printf("\nO valor inserido é inválido. Insira um novo valor: ");
                scanf("%f", &peso);
                printf("\n");
            }
        
            //categorização dos pesos nas faixas etárias correspondentes 
            if (idade >= 1 && idade <= 10) {
                m1 += peso;
                p1++;
            }

            else if (idade >= 11 && idade <= 20) {
                m2 += peso;
                p2++;
            }

            else if (idade >= 21 && idade <= 30) {
                m3 += peso;
                p3++;
            }

            else {
                m4 += peso;
                p4++;
            }
    }

    //processamento de dados II ===============================================================================================================================
    m1 /= p1;
    m2 /= p2;
    m3 /= p3;
    m4 /= p4;

    //output de dados =========================================================================================================================================
    printf("\n\nMédia da faixa 1-10: %.2f\nMédia da faixa 11-20: %.2f\nMédia da faixa 21-30: %.2f\nMédia da faixa 31+: %.2f\n", m1, m2, m3, m4);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}