//inclus�o de bibliotecas
#include <stdio.h>
#include <locale.h>


//programa principal

int main () {

    //declara��o de vari�veis
    float n1, n2, n3, n4, result;

    //defini��o para linguagem
    setlocale(LC_ALL,"Portuguese");

    //input de dados
    printf("\nCalculo de aprova��o.\n\n");
    printf("Insira 4 pontua��es (de 0 a 10) a serem calculadas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

        //teste de valida��o
        if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10 || n3 < 0 || n3 > 10 || n4 < 0 || n4 > 10) {
            printf("\n\nUm ou mais valores n�o s�o v�lidos.\n\n");
        }

        else {
        printf("As pontua��es inseridas foram: %.2f, %.2f, %.2f, %.2f.", n1, n2, n3, n4);

    //processamento de dados
    result = (n1 + n2 + n3 + n4)/4;

    //output de dados
    if (result >= 7) 
    printf("\n\nA sua m�dia foi %.2f e voc� foi aprovado.\n\n", result);

    else 
    printf("\n\nA sua m�dia foi %.2f e voc� foi reprovado.\n\n", result);

    }

    return(0);

}