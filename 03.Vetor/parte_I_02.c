/*=============================================================================================================================================================
    Exerc�cio 02 - Parte 01
    
    Fa�a um programa que preencha um vetor com sete n�meros inteiros, calcule e mostre:

        - os n�meros m�ltiplos de 2;
        - os n�meros m�ltiplos de 3;
        - os n�meros m�ltiplos de 2 e de 3.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//procedimentos ===============================================================================================================================================

    //m�ltiplos de dois e tr�s --------------------------------------------------------------------------------------------------------------------------------
    void multiplosDoisTres (int vetor[ ]) {

        //declara��o de vari�veis
        int vetorImpar[6];
        int result[13];
        int i;

        //processamento de dados
        for (int j = 0 ; j <= 6 ; j++)  //copiar "vetor" para "vetorImpar"
            vetorImpar[j] = vetor[j];

        multiplosDois(vetor);   //procedimento para calcular valores m�ltiplos de dois
        multiplosTres(vetorImpar);   //procedimento para calcular valores m�ltiplos de tr�s

        for (i = 0 ; i <= 6 ; i++) 
            result[i] = vetor[i];   //incluir o resultado da fun��o para m�ltiplos de 2
        
        for (int j = 0 ; j <= 6 ; j++)      //incluir o resultado da fun��o para m�ltiplos de 3 e somar com os resultados inclu�dos anteriormente
            result[i + j] = vetorImpar[j];

        printf("\nOs m�ltiplos de dois e tr�s s�o: ");

        for (int j = 0 ; j <= 6 ; j++) {        //percorrer o vetore e printar os m�ltiplos de 2 e 3
            if ((result[j] % 2 == 0) && (result[j] % 3 == 0)) 
                printf("%d ", result[j]);
        }
    }


//fun��es secund�rias =========================================================================================================================================

    //multiplos de dois ---------------------------------------------------------------------------------------------------------------------------------------
    int multiplosDois (int vetor[ ]) {

        //declara��o de vari�veis
        int multiplos2[6];      //vetor que ir� armazenar os m�ltiplos de 2
        
        //processamento e sa�da de dados
        printf("\n\nOs m�ltiplos de dois s�o: ");

        for (int i = 0 ; i <= 6 ; i++) {        //percorrer o vetor, printar e armazenar os m�ltiplos de 2
            if (vetor[i] % 2 == 0) {
                printf("%d ", vetor[i]);
                multiplos2[i] = vetor[i];
            }
        }

        return vetor;
    }

    //multiplos de tr�s ---------------------------------------------------------------------------------------------------------------------------------------
    int multiplosTres (int vetor[ ]) {

        //declara��o de vari�veis
        int multiplos3[6];      //vetor que ir� armazenar os m�ltiplos de 3
        
        //processamento e sa�da de dados
        printf("\nOs m�ltiplos de tr�s s�o: ");

        for (int i = 0 ; i <= 6 ; i++) {        //percorrer o vetor, printar e armazenar os m�ltiplos de 3
            if (vetor[i] % 3 == 0) {
                printf("%d ", vetor[i]);
                multiplos3[i] = vetor[i];
            }
        }

        return vetor;
    }


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int vetor[6];     

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");

    for (int i = 0 ; i <= 6 ; i++) {     //percorrer todo o vetor
        printf("Insira um valor inteiro para a posi��o %d: ", i);
        scanf("%d", &vetor[i]);
    }

    multiplosDoisTres(vetor);   //procedimento para calcular os valores m�ltiplos de dois e tr�s

    //output de dados =========================================================================================================================================
    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}