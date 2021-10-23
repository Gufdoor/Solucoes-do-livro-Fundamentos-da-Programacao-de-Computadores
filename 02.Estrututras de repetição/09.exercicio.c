/*=============================================================================================================================================================
    Exercício 09 - Capítulo 05
    
    Faça um programa que receba dez idades, pesos e alturas, calcule e mostre:
        a média das idades das dez pessoas;
        a quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro; e
        a porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int controle;                   //limitante da quantidade de números a serem inseridos
    int p90a15 = 0;                 //variável que irá receber a quantidade de pessoas com peso superior a 90kg e altura inferior a 1,50m;
    float idade, peso, altura;      //variáveis intermediadoras para receber os respectivos valores do usuário
    float mIdade = 0;               //variável que irá receber a média das idades
    float porcPessoas = 0;          //variável que irá receber a porcentagem de pessoas com mais de 1,90m de altura e idade entre 10 e 30 anos
    float pessoas19 = 0;            //variável que irá receber a quantidade de pessoas com mais de 1,90m de altura

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    for (controle = 1 ; controle < 11 ; controle++) {       //definição de condição para limitar o laço de repetição
        printf("Insira a idade da pessoa %d: ", controle);  //processamento de dados envolvendo a idade
        scanf("%f", &idade);

            //validação da idade
            while (idade < 0) {
                printf("\nIdade inválida. Insira outro valor: ");
                scanf("%f", &idade);
                printf("\n");
            }

            //armazenar o valor das idades
            mIdade += idade;

        printf("Insira o peso da pessoa %d: ", controle);   //processamento de dados envolvendo o peso 
        scanf("%f", &peso);

            //validação do peso
            while (peso <= 0) {
                printf("\nPeso inválido. Insira outro valor: ");
                scanf("%f", &peso);
                printf("\n");
            }

        printf("Insira a altura da pessoa %d: ", controle);     //processamento de dados envolvendo a altura
        scanf("%f", &altura);
        printf("\n");

            //validação da altura
            while (altura <= 0) {
                printf("\nAltura inválida. Insira outro valor: ");
                scanf("%f", &altura);
                printf("\n");
            }

            //condição para pessoas com peso maior que 90kg e altura inferior a 1,50m
            if (peso > 90 && altura < 1.5) {
                p90a15++;
            }

            //condição para pessoas que medem mais que 1,90m
            if (altura > 1.9) {
                pessoas19++;

                //condição para pessoas com idade entre 10 e 30 anos
                if (idade > 10 && idade < 30) {
                    porcPessoas++;
                }
            }
    }
    

    //processamento de dados II ===============================================================================================================================
    mIdade /= 10;                       //cálculo da média das idades
    porcPessoas *= 100 / pessoas19;     //cálculo da procentagem de pessoas com mais de 1,90m de altura e idade entre 10 e 30 anos

    //output de dados =========================================================================================================================================
    printf("\nOs resultados são:\n Média das idades: %.2f\n", mIdade);
    printf(" Quantidade de pessoas com peso superior a 90kg e altura inferior a 1,50m: %d\n", p90a15);
    printf(" Porcentagem de pessoas com mais de 1,90m de altura e idade entre 10 e 30 anos: %.2f%%", porcPessoas);


    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}