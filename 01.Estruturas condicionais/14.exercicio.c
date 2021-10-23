//inclus�o de bibliotecas
#include <stdio.h>
#include <locale.h>


//programa principal

int main () {

    //declara��o de vari�veis
    float salario;

    //defini��o para linguagem
    setlocale(LC_ALL,"Portuguese");

    //input e valida��o de dados
    printf("\nCalculo de reajuste salarial");
    printf("\n\nInsira o salario a ser calculado: ");
    scanf("%f", &salario);
    if (salario <= 0) {
        printf("\nO salario inserido n�o � v�lido.\n\n");
    }
    else {
        printf("O salario inserido foi R$%.2f.", salario);

        //processamento e output de dados
        if (salario <= 300) {
            salario *= 1.5;
            printf("\n\nO sal�rio reajustado ser� R$%.2f.\n\n", salario);
        }

        else if (salario > 300 && salario <= 500) {
            salario *= 1.4;
            printf("\n\nO sal�rio reajustado ser� R$%.2f.\n\n", salario);
        }

        else if (salario > 500 && salario <= 700) {
            salario *= 1.3;
            printf("\n\nO sal�rio reajustado ser� R$%.2f.\n\n", salario);
        }

        else if (salario > 700 && salario <= 800) {
            salario *= 1.2;
            printf("\n\nO sal�rio reajustado ser� R$%.2f.\n\n", salario);
        }

        else if (salario > 800 && salario <=1000) {
            salario *= 1.1;
            printf("\n\nO sal�rio reajustado ser� R$%.2f.\n\n", salario);
        }

        else {
            salario *= 1.05;
            printf("\n\nO sal�rio reajustado ser� R$%.2f.\n\n", salario);
        }
        
    }

    return(0);

}