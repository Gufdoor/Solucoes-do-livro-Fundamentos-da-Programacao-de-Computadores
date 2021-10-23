/*=============================================================================================================================================================
    Exercício 08 - Capítulo 05
    
    Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A ? azul; P ? preto; V ? verde; e
    C ? castanho) e a cor dos cabelos (P ? preto; C ? castanho; L ? louro; e R ? ruivo) de seis pessoas, e que
    calcule e mostre:
        - a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
        - a média das idades das pessoas com altura inferior a 1,50 m;
        - a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; e
        - a quantidade de pessoas ruivas e que não possuem olhos azuis.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int controle;               //limitante da quantidade de números a serem inseridos
    float peso, altura;         //variáveis intermediadoras para receber os respectivos valores do usuário
    float mIdade = 0;           //variável para a média das idades das pessoas com altura menor que 1,50
    int idade;                  //variável intermediadora para receber o respectivo valor do usuário
    int pI50;                   //variável para a quantidade de pessoas com idade maior que 50 e peso menor que 60
    int pessoas1 = 0;           //variável para contabilizar o número de pessoas com altura menor que 1,50
    float pessoas2 = 0;         //variável para contabilizar o número de pessoas com olhos azúis 
    int pessoas3 = 0;           //variável para contabilizar o número de pessoas com cabelos ruivos e olhos não azúis
    char cOlhos, cCabelo;       //variáveis intermediadoras para receber os respectivos valores do usuário

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");

    for (controle = 1 ; controle < 7 ; controle++) {        //definição de condição para limitar o laço de repetição
        printf("Insira a idade da pessoa %d: ", controle);  //processamento de dados envolvendo a idade
        scanf("%d", &idade);

            //validação da idade
            while (idade < 0) {
                printf("\nIdade inválida. Insira outro valor: ");
                scanf("%d", &idade);
                printf("\n");
            }

        printf("Insira o peso da pessoa %d: ", controle); //processamento de dados envolvendo o peso 
        scanf("%f", &peso);

            //validação do peso
            while (peso <= 0) {
                printf("\nPeso inválido. Insira outro valor: ");
                scanf("%f", &peso);
                printf("\n");
            }

            //condição para pessoas com idade maior que 50 e peso menor que 60kg
            if (idade > 50 && peso < 60) {
                pI50++;
            }

        printf("Insira a altura da pessoa %d: ", controle); //processamento de dados envolvendo a altura
        scanf("%f", &altura);

            //validação da altura
            while (altura <= 0) {
                printf("\nAltura inválida. Insira outro valor: ");
                scanf("%f", &altura);
                printf("\n");
            }

            //condição para pessoas com altura menor que 1,50
            if (altura < 1.5) {
                mIdade += idade;
                pessoas1++;
            }

        printf("\nA - azul | P - preto | V - verde | C - castanho\nInsira a letra respectiva à cor dos olhos: ");
        scanf(" %c", &cOlhos);

            //validação da cor dos olhos
            while (cOlhos != 'A' && cOlhos != 'P' && cOlhos != 'V' && cOlhos != 'C') {
                printf("\nOpção inválida. Insira outro caractere: ");
                scanf(" %c", &cOlhos);
                printf("\n");
            }

            //condição para pessoas com olhos azúis
            if (cOlhos == 'A') {
                pessoas2++;
            }

        printf("\nP - preto | C - castanho | L - louro | R - ruivo\nInsira a letra respectiva à cor dos cabelos: ");
        scanf(" %c", &cCabelo);
        printf("\n\n");

            //validação da cor dos cabelo
            while (cCabelo != 'P' && cCabelo != 'C' && cCabelo != 'L' && cCabelo != 'R') {
                printf("\nOpção inválida. Insira outro caractere: ");
                scanf(" %c", &cCabelo);
                printf("\n\n");
            }

            //condição para pessoas com cabelo ruivo
            if (cCabelo == 'R' && cOlhos != 'A') {
                pessoas3++;
            }
    }
    
    //processamento de dados II ===============================================================================================================================
    mIdade /= pessoas1;         //cáculo da média das idades das pessoas com altura inferior a 1,50
    pessoas2 *= 100 / 6;        //cáculo da porcentagem de pessoas com olhos azúis

    //output de dados =========================================================================================================================================
    printf("\nOs resultados são:\n Quantidade de pessoas com idade superior a 50 anos e peso inferior a 60kg: %d\n", pI50);
    printf(" Média das idades das pessoas com altura inferior a 1,50: %.2f\n", mIdade);
    printf(" Porcentagem de pessoas com olhos azuis: %.2f%%\n Quantidade de pessoas ruivas e que não possuem olhos azuis: %d", pessoas2, pessoas3);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}