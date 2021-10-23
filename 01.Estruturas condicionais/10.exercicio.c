//inclusão de bibliotecas
#include <stdio.h>
#include <locale.h>


//programa principal

int main () {

    //declaração de variáveis
    float valor;

    //definição para linguagem
    setlocale(LC_ALL,"Portuguese");

    //input e validação de dados
    printf("\nPreço final de um carro");
    printf("\n\nInsira o valor a ser calculado: ");
    scanf("%f", &valor);
    if (valor <= 0) {
        printf("\nO valor inserido não é válido.\n\n");
    }
    else {
        printf("O valor inserido foi R$%.2f.", valor);

        //processamento e output de dados
        if (valor <= 12000) {
            valor += valor * 0.05;
            printf("\n\nO valor final será R$%.2f.\n\n", valor);
        }

        else if (valor > 12000 && valor < 25000) {
            valor += (valor * 0.1) + (valor * 0.15);
             printf("\n\nO valor final será R$%.2f.\n\n", valor);
        }

        else {
            valor += (valor * 0.15) + (valor * 0.20);
            printf("\n\nO valor final será R$%.2f.\n\n", valor);
        }
        
    }

    return(0);

}