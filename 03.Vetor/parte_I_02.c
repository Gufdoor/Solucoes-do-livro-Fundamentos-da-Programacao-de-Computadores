/*=============================================================================================================================================================
    Exercício 02 - Parte 01
    
    Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre:

        - os números múltiplos de 2;
        - os números múltiplos de 3;
        - os números múltiplos de 2 e de 3.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//procedimentos ===============================================================================================================================================

    //múltiplos de dois e três --------------------------------------------------------------------------------------------------------------------------------
    void multiplosDoisTres (int vetor[ ]) {

        //declaração de variáveis
        int vetorImpar[6];
        int result[13];
        int i;

        //processamento de dados
        for (int j = 0 ; j <= 6 ; j++)  //copiar "vetor" para "vetorImpar"
            vetorImpar[j] = vetor[j];

        multiplosDois(vetor);   //procedimento para calcular valores múltiplos de dois
        multiplosTres(vetorImpar);   //procedimento para calcular valores múltiplos de três

        for (i = 0 ; i <= 6 ; i++) 
            result[i] = vetor[i];   //incluir o resultado da função para múltiplos de 2
        
        for (int j = 0 ; j <= 6 ; j++)      //incluir o resultado da função para múltiplos de 3 e somar com os resultados incluídos anteriormente
            result[i + j] = vetorImpar[j];

        printf("\nOs múltiplos de dois e três são: ");

        for (int j = 0 ; j <= 6 ; j++) {        //percorrer o vetore e printar os múltiplos de 2 e 3
            if ((result[j] % 2 == 0) && (result[j] % 3 == 0)) 
                printf("%d ", result[j]);
        }
    }


//funções secundárias =========================================================================================================================================

    //multiplos de dois ---------------------------------------------------------------------------------------------------------------------------------------
    int multiplosDois (int vetor[ ]) {

        //declaração de variáveis
        int multiplos2[6];      //vetor que irá armazenar os múltiplos de 2
        
        //processamento e saída de dados
        printf("\n\nOs múltiplos de dois são: ");

        for (int i = 0 ; i <= 6 ; i++) {        //percorrer o vetor, printar e armazenar os múltiplos de 2
            if (vetor[i] % 2 == 0) {
                printf("%d ", vetor[i]);
                multiplos2[i] = vetor[i];
            }
        }

        return vetor;
    }

    //multiplos de três ---------------------------------------------------------------------------------------------------------------------------------------
    int multiplosTres (int vetor[ ]) {

        //declaração de variáveis
        int multiplos3[6];      //vetor que irá armazenar os múltiplos de 3
        
        //processamento e saída de dados
        printf("\nOs múltiplos de três são: ");

        for (int i = 0 ; i <= 6 ; i++) {        //percorrer o vetor, printar e armazenar os múltiplos de 3
            if (vetor[i] % 3 == 0) {
                printf("%d ", vetor[i]);
                multiplos3[i] = vetor[i];
            }
        }

        return vetor;
    }


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int vetor[6];     

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");

    for (int i = 0 ; i <= 6 ; i++) {     //percorrer todo o vetor
        printf("Insira um valor inteiro para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    multiplosDoisTres(vetor);   //procedimento para calcular os valores múltiplos de dois e três

    //output de dados =========================================================================================================================================
    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}