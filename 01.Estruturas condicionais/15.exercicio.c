//inclusão de bibliotecas
#include <stdio.h>
#include <locale.h>


//programa principal

int main () {

    //declaração de variáveis
    int num;
    float valor;

    //definição para linguagem
    setlocale(LC_ALL,"Portuguese");

    //input e validação de dados
    printf("\nCalculo de rendimento financeiro");
    printf("\n\n\n1 Poupança\n2 Fundos de renda fixa\n\n");
    printf("Insira o número da opção escolhida: ");
    scanf("%d", &num);

    if (num < 1 || num > 2) {
        printf("\nO número inserido não é válido.\n\n");
    }
    else {
        printf("\n\nInsira o valor investido: ");
        scanf("%f", &valor);
        
        if (valor <= 0) {
            printf("\nO valor inserido não é válido.\n\n");
        } 
        else {
            printf("O valor inserido foi R$%.2f.", valor);

            //processamento e output de dados
            if (num == 1) {
                valor *= 1.03;
                printf("\n\nVocê selecionou Poupança. O rendimento do seu investimento será R$%.2f.\n\n", valor);
            }
            else {
                valor *= 1.04;
                printf("\n\nVocê selecionou Fundos de renda fixa. O rendimento do seu investimento será R$%.2f.\n\n", valor);
            }        
    
        }
    }

    return(0);

}