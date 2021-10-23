/*=============================================================================================================================================================
    Exerc�cio 23 - Parte 01
    
    Fa�a um programa que leia dois vetores (A e B) com cinco posi��es para n�meros inteiros. O programa
    deve, ent�o, subtrair o primeiro elemento de A do �ltimo de B, acumulando o valor, subtrair o segundo
    elemento de A do pen�ltimo de B, acumulando o valor e assim por diante. Ao final, mostre o resultado
    de todas as subtra��es realizadas.

    OBS: Professor, o primeiro valor na sa�da de dados, nos resultados, sempre � 0 independente dos valores inseridos e n�o fa�o ideia do porque. 
    Esse tipo de problema tem sido recorrente nos meus c�digos com vetores. Se poss�vel, gostaria de ver uma corre��o em exerc�cios assim em aula, pois
    creio que outros alunos tamb�m possam ter a mesma d�vida.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int A[4], B[4], result[4];

    //defini��o para idioma
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
    printf("\n\nOs resultados ser�o: ");
    for (int i = 0 ; i <= 4 ; i++) 
        printf("%i ", result[i]);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}