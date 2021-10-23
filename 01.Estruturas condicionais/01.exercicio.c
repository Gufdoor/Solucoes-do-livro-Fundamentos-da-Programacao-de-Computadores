//inclusão de bibliotecas
#include <stdio.h>
#include <locale.h>


//programa principal

int main () {

    //declaração de variáveis
    float n1, n2, n3, n4, result;

    //definição para linguagem
    setlocale(LC_ALL,"Portuguese");

    //input de dados
    printf("\nCalculo de aprovação.\n\n");
    printf("Insira 4 pontuações (de 0 a 10) a serem calculadas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

        //teste de validação
        if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10 || n3 < 0 || n3 > 10 || n4 < 0 || n4 > 10) {
            printf("\n\nUm ou mais valores não são válidos.\n\n");
        }

        else {
        printf("As pontuações inseridas foram: %.2f, %.2f, %.2f, %.2f.", n1, n2, n3, n4);

    //processamento de dados
    result = (n1 + n2 + n3 + n4)/4;

    //output de dados
    if (result >= 7) 
    printf("\n\nA sua média foi %.2f e você foi aprovado.\n\n", result);

    else 
    printf("\n\nA sua média foi %.2f e você foi reprovado.\n\n", result);

    }

    return(0);

}