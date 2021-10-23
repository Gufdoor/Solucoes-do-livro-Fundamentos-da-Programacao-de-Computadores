//inclusão de bibliotecas
#include <stdio.h>
#include <locale.h>


//programa principal

int main () {

    //declaração de variáveis
    float salario;

    //definição para linguagem
    setlocale(LC_ALL,"Portuguese");

    //input e validação de dados
    printf("\nReajuste salarial");
    printf("\n\nInsira o salário a ser reajustado: ");
    scanf("%f", &salario);
    if (salario <= 0) {
        printf("\nO valor inserido não é válido.\n\n");
    }
    else {
        printf("\nO valor inserido foi %.2f.", salario);

        //processamento e output de dados
        if (salario < 500) {
            salario *= 1.3;
            printf("\n\nO salário reajustado será %.2f.\n\n", salario);
        }
        else 
            printf("\n\nO salário inserido não tem direito ao reajuste.\n\n");
        
    }

    return(0);

}