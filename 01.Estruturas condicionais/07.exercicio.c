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
    printf("\nReajuste salarial");
    printf("\n\nInsira o sal�rio a ser reajustado: ");
    scanf("%f", &salario);
    if (salario <= 0) {
        printf("\nO valor inserido n�o � v�lido.\n\n");
    }
    else {
        printf("\nO valor inserido foi %.2f.", salario);

        //processamento e output de dados
        if (salario < 500) {
            salario *= 1.3;
            printf("\n\nO sal�rio reajustado ser� %.2f.\n\n", salario);
        }
        else 
            printf("\n\nO sal�rio inserido n�o tem direito ao reajuste.\n\n");
        
    }

    return(0);

}