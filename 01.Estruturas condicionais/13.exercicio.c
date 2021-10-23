//inclusão de bibliotecas
#include <stdio.h>
#include <locale.h>


//programa principal

int main () {

    //declaração de variáveis
    float produto;

    //definição para linguagem
    setlocale(LC_ALL,"Portuguese");

    //input e validação de dados
    printf("\nReajuste do preço de produtos");
    printf("\n\nInsira o valor a ser reajustado: ");
    scanf("%f", &produto);
    if (produto <= 0) {
        printf("\nO valor inserido não é válido.\n\n");
    }
    else {
        printf("\nO valor inserido foi R$%.2f.", produto);

        //processamento e output de dados
        if (produto <= 50) {
            produto *= 1.05;
            printf("\n\nO valor reajustado será R$%.2f e é considerado barato.\n\n", produto);
        }

        else if (produto > 50 && produto < 100) {
            produto *= 1.1;
            if (produto > 50 && produto <= 80) 
                printf("\n\nO valor reajustado será R$%.2f e é considerado barato.\n\n", produto);
            else 
                printf("\n\nO valor reajustado será R$%.2f e é considerado normal.\n\n", produto);
        }

        else {
            produto *= 1.15;

            if (produto >= 100 && produto <= 120) 
                printf("\n\nO valor reajustado será R$%.2f e é considerado normal.\n\n", produto);

            else if (produto > 120 && produto <= 200)
                printf("\n\nO valor reajustado será R$%.2f e é considerado caro.\n\n", produto);

            else 
                printf("\n\nO valor reajustado será R$%.2f e é considerado muito caro.\n\n", produto);
        }
        
    }

    return(0);

}