/*=============================================================================================================================================================
    Exercício 02 - Capítulo 05
    
    Uma companhia de teatro deseja montar uma série de espetáculos. A direção calcula que, a
    R$ 5,00 o ingresso, serão vendidos 120 ingressos, e que as despesas serão de R$ 200,00. Diminuindo-se em
    R$ 0,50 o preço dos ingressos, espera-se que as vendas aumentem em 26 ingressos. Faça um programa que
    escreva uma tabela de valores de lucros esperados em função do preço do ingresso, fazendo-se variar esse preço
    de R$ 5,00 a R$ 1,00, de R$ 0,50 em R$ 0,50. Escreva, ainda, para cada novo preço de ingresso, o lucro
    máximo esperado, o preço do ingresso e a quantidade de ingressos vendidos para a obtenção desse lucro.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <conio.h>      //biblioteca para manipulação de caracteres na tela


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    float pIngresso = 5.00; //valor padrão do ingresso (também o controle de repetição)
    int qIngresso = 120;    //quantidade padrão de ingressos vendidos
    float lucro;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //inicialização do programa ===============================================================================================================================
    printf("\nBem vindo :) \n\n");
    printf("Pressione ENTER para continuar.");
    getch();    //função da biblioteca conio.h para congelar a tela enquanto o usuário não pressionar alguma tecla qualquer

    //processamento e saída de dados ==========================================================================================================================
    while (pIngresso >= 1) {
        lucro = (qIngresso * pIngresso) - 200;  //cálculo do lucro

        //valor resultante
        printf("\n\nOs valores serão:\n Lucro esperado: R$%.2f\n Preço do ingresso: R$%.2f\n Ingressos vendidos: %d", lucro, pIngresso, qIngresso); 
        printf("\n\nPressione ENTER para prosseguir.");
        getch();

        //reajuste de preço e quantidade de ingressos vendidos
        pIngresso -= 0.50;
        qIngresso += 26; 
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}