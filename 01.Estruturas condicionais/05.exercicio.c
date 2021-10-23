//inclusão de bibliotecas
#include <stdio.h>
#include <locale.h>


//programa principal

int main () {

    //declaração de variáveis
    float n1, n2, result;
    int valor;

    //definição para linguagem
    setlocale(LC_ALL,"Portuguese");

    //input de dados
    printf("\nCalculadora limitada.\n\n");
    printf("1 Média entre dois números\n2 Diferença entre o maior número pelo menor\n3 Produto entre dois valores\n4 Divisão do primeiro pelo segundo\n");
    printf("\nInsira o número de uma das opções acima a sua escolha: ");
    scanf("%d", &valor);

    if (valor < 1 || valor > 4) {
        printf("\nO valor inserido é inválido.\n\n", result);
    }

    else {
        printf("O valor inserido é %d.", valor);
        printf("\n\nInsira dois números quaisquer: ");
        scanf("%f %f", &n1, &n2);
        printf("Os números inseridos foram: %.2f, %.2f.", n1, n2);

        //processamento e output de dados
        if (valor == 1) {
            result = (n1 + n2)/2;
            printf("\n\nO resultado da média é %.2f.\n\n", result); 
        }

        else if (valor == 2) {
            if (n1 > n2) {
                result = n1 - n2;
                printf("\n\nO resultado da diferença é %.2f.\n\n", result);
            }
            else {
                result = n2 - n1;
                printf("\n\nO resultado da diferença é %.2f.\n\n", result);
            }
        }

        else if (valor == 3) {
            result = n1 * n2;
            printf("\n\nO resultado da multiplicação é %.2f.\n\n", result);
        }

        else if (valor == 4) {
            if (n2 == 0) {
                printf("\n\nO valor inserido não pode ser 0.\n\n", result);
            }

            else {
            result = n1 / n2;
            printf("\n\nO resultado da divisão é %.2f.\n\n", result);
            }
        }
    }

    return(0);

}