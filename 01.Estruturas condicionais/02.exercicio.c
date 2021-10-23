//inclusão de bibliotecas
#include <stdio.h>
#include <locale.h>


//programa principal

int main () {

    //declaração de variáveis
    float n1, n2, result;

    //definição para linguagem
    setlocale(LC_ALL,"Portuguese");

    //input de dados
    printf("\nCalculo de aprovação.\n\n");
    printf("Insira 2 pontuações (de 0 a 10) a serem calculadas: ");
    scanf("%f %f", &n1, &n2);

        //teste de validação
        if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10) {
            printf("\n\nUm ou mais valores não são válidos.\n\n");
        }

        else {
        printf("As pontuações inseridas foram: %.2f, %.2f.", n1, n2);

    //processamento de dados
    result = (n1 + n2)/2;

    //output de dados
    if (result >= 7) 
    printf("\n\nA sua média foi %.2f (faixa de 7 a 10) e você foi aprovado.\n\n", result);

    else if (result >= 3 && result < 7)
    printf("\n\nA sua média foi %.2f (faixa de 3 a 6) e você terá de fazer um exame.\n\n", result);

    else 
    printf("\n\nA sua média foi %.2f (faixa de 0 a 2) e você foi reprovado.\n\n", result);

    }

    return(0);

}