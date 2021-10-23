/*=============================================================================================================================================================
    Exercício 07 - Capítulo 05
    
    Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
        ? a quantidade de pessoas com idade superior a 50 anos;
        ? a média das alturas das pessoas com idade entre 10 e 20 anos;
        ? a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int controle;               //limitante da quantidade de números a serem inseridos
    float i50 = 0;              //total de pessoas com idade maior que 50 anos
    float mAltura1020 = 0;      //média das alturas das pessoas com idade entre 10 e 20
    float pPeso40;              //porcentagem de pessoas que pesam menos que 40kg
    float idade, peso, altura;  //variáveis intermediadoras para receber os respectivos valores do usuário
    int pessoas = 0;            //variável para o nº pessoas com idade entre 10 e 20

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");

    for (controle = 1 ; controle < 6 ; controle ++) {       //definição de condição para limitar o laço de repetição
        printf("Insira a idade da pessoa %d: ", controle);  //processamento de dados envolvendo a idade
        scanf("%f", &idade);

            //validação da idade
            while (idade < 0) {
                printf("\nIdade inválida. Insira outro valor: ");
                scanf("%f", &idade);
                printf("\n");
            }

            //condição para idade maior que 50
            if (idade > 50) {
                i50++;
            }

        printf("Insira a altura da pessoa %d: ", controle); //processamento de dados envolvendo a altura
        scanf("%f", &altura);

            //validação da altura
            while (altura <= 0) {
                printf("\nAltura inválida. Insira outro valor: ");
                scanf("%f", &altura);
                printf("\n");
            }

            //condição para idades entre 10 e 20
            if (idade > 10 && idade < 20) {
                mAltura1020 += altura;
                pessoas++;
            }

        printf("Insira o peso da pessoa %d: ", controle); //processamento de dados envolvendo o peso 
        scanf("%f", &peso);
        printf("\n");

            //validação do peso
            while (peso <= 0) {
                printf("\nPeso inválido. Insira outro valor: ");
                scanf("%f", &peso);
                printf("\n");
            }

            //condição para pesos menores que 40
            if (peso < 40) {
                pPeso40++;
            }
    }
    
    //processamento de dados II ===============================================================================================================================
    mAltura1020 /= pessoas;     //cáculo da média da altura das pessoas com idade entre 10 e 20
    pPeso40 *= 100 / 5;         //cálculo da porcentagem de pessoas que pesam menos que 40kg

    //output de dados =========================================================================================================================================
    printf("\nOs resultados são:\n Quantidade de pessoas com idade superior a 50 anos: %.f\n Média das alturas das pessoas com idade entre 10 e 20 anos: %.2f", i50, mAltura1020);
    printf("\n Porcentagem de pessoas com peso inferior a 40kg: %.2f%%", pPeso40);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}