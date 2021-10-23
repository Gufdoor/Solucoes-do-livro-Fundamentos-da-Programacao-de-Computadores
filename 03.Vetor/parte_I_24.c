/*=============================================================================================================================================================
    Exerc�cio 24 - Parte 01
    
    Fa�a um programa que leia um vetor com quinze posi��es para n�meros inteiros. Crie, a seguir, um vetor
    resultante que contenha todos os n�meros primos do vetor digitado. Escreva o vetor resultante.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)



//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int vetor[14], result[14];
    int resto, quantidadeResto;
    int g = 0;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira quinze valores:\n");
    for (int i = 0 ; i <= 14 ; i++) 
        scanf("%i", &vetor[i]);

    //processamento de dados ==================================================================================================================================
    for (int i = 0 ; i <= 14 ; i++) {       //verificar e retornar se os valores do vetor s�o primos
        quantidadeResto = 0;
        
        for (int j = 1 ; j <= vetor[i] ; j++) {     //dividir cada valor por todos os n�meros de 1 at� ele mesmo
            resto = vetor[i] % j;

            if (resto == 0)                         
                quantidadeResto++;
        }

        if (quantidadeResto == 2) {     //se houver somente dois restos 0 nas divis�es, o valor operado ser� um n�mero primo, pois s� dividiu por 1 e ele mesmo
            result[g] = vetor[i];
            g++;
        }
    }

    //output de dados =========================================================================================================================================
    printf("\n\nOs valores primos no vetor s�o: ");
    for (int i = 0 ; i < g ; i++) 
        printf("%i ", result[i]);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}