/*=============================================================================================================================================================
    Exercício 23 - Parte 01
    
    Faça um programa que leia dois vetores (A e B) com cinco posições para números inteiros. O programa
    deve, então, subtrair o primeiro elemento de A do último de B, acumulando o valor, subtrair o segundo
    elemento de A do penúltimo de B, acumulando o valor e assim por diante. Ao final, mostre o resultado
    de todas as subtrações realizadas.

    OBS: Professor, o primeiro valor na saída de dados, nos resultados, sempre é 0 independente dos valores inseridos e não faço ideia do porque. 
    Esse tipo de problema tem sido recorrente nos meus códigos com vetores. Se possível, gostaria de ver uma correção em exercícios assim em aula, pois
    creio que outros alunos também possam ter a mesma dúvida.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int A[4], B[4], result[4];

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira cinco valores para o vetor A:\n");
    for (int i = 0 ; i <= 4 ; i++) 
        scanf("%i", &A[i]);

    printf("\nInsira cinco valores para o vetor B:\n");
    for (int i = 0 ; i <= 4 ; i++) 
        scanf("%i", &B[i]);

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 4 ; i++) 
        result[i] = B[4 - i] - A[i];

    //output de dados =========================================================================================================================================
    printf("\n\nOs resultados serão: ");
    for (int i = 0 ; i <= 4 ; i++) 
        printf("%i ", result[i]);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}