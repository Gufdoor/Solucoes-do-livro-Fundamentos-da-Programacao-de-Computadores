//inclus�o de bibliotecas
#include <stdio.h>
#include <locale.h>


//programa principal

int main () {

    //declara��o de vari�veis
    int num;
    float valor;

    //defini��o para linguagem
    setlocale(LC_ALL,"Portuguese");

    //input e valida��o de dados
    printf("\nCalculo de rendimento financeiro");
    printf("\n\n\n1 Poupan�a\n2 Fundos de renda fixa\n\n");
    printf("Insira o n�mero da op��o escolhida: ");
    scanf("%d", &num);

    if (num < 1 || num > 2) {
        printf("\nO n�mero inserido n�o � v�lido.\n\n");
    }
    else {
        printf("\n\nInsira o valor investido: ");
        scanf("%f", &valor);
        
        if (valor <= 0) {
            printf("\nO valor inserido n�o � v�lido.\n\n");
        } 
        else {
            printf("O valor inserido foi R$%.2f.", valor);

            //processamento e output de dados
            if (num == 1) {
                valor *= 1.03;
                printf("\n\nVoc� selecionou Poupan�a. O rendimento do seu investimento ser� R$%.2f.\n\n", valor);
            }
            else {
                valor *= 1.04;
                printf("\n\nVoc� selecionou Fundos de renda fixa. O rendimento do seu investimento ser� R$%.2f.\n\n", valor);
            }        
    
        }
    }

    return(0);

}