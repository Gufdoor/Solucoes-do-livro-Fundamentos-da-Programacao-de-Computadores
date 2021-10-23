/*=============================================================================================================================================================
    Exercício 22 - Capítulo 05
    
    Faça um programa que receba a idade e a altura de várias pessoas, calcule e mostre a média das alturas
    daquelas com mais de 50 anos. Para encerrar a entrada de dados, digite idade menor ou igual a zero.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    float idade = 1, altura = 0;                                //variáveis que receberão os respectivos valores do usuário
    float media = 0;                                            //variável que receberá a média das alturas com pessoas com mais de 50 anos
    float pessoas = 0;                                          //variável que receberá a quantidade de pessoas que tem mais de 50 anos
    int ordem = 1;                                              //identificador de ciclos

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    //início do laço
    while (idade > 0) {        
        printf("\nInsira a idade da pessoa %d: ", ordem);       //receber idade
        scanf("%f", &idade);

            //validação de idade
            while (idade < 0) {
                printf("\nValor inválido. Tente novamente: ");
                scanf("%f", &idade);
                printf("\n");
            }

            //condição para idade igual 0
            if (idade <= 0) {
                break;      //comando para encerrar a execução do laço
            }

        printf("Insira a altura da pessoa %d: ", ordem);        //receber altura
        scanf("%f", &altura);

            //validação da altura
            while (altura <= 0) {
                printf("\nValor inválido. Tente novamente: ");
                scanf("%f", &altura);
                printf("\n");
            }

        //condição de pessoas com idade maior que 50 anos
        if (idade > 50) {
            pessoas++; 
            media += altura;
        }

        //manter a proporção da ordem
        ordem++;
    }

    //processamento de dados II ===============================================================================================================================
    if (media != 0)     //condição para executar somente quando houver pessoas com mais de 50 anos
        media /= pessoas;       //cálculo da média

    //output de dados =========================================================================================================================================
    if (altura != 0) {      //condição para executar somente quando tiver sido algum valor anteriormente   
        if (media != 0)     //condição para executar somente quando houver pessoas com mais de 50 anos
            printf("\n\nA média das alturas das pessoas com mais de 50 anos é %.2f.", media);
        
        else                //condição para executar quando não houver pessoas com idade maior que 50
            printf("\n\nNão foram inseridas pessoas com idade maior de 50 anos.");
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}