//inclusão de bibliotecas
#include <stdio.h>
#include <locale.h>
#include <math.h>


//programa principal

int main () {

    //declaração de variáveis
    float n1, n2, result, result2;
    int valor;

    //definição para linguagem
    setlocale(LC_ALL,"Portuguese");

    //input de dados
    printf("\nCalculadora limitada.\n\n");
    printf("1 Primeiro número elevado ao segundo\n2 Raiz quadrada de cada um dos números\n3 Raiz cúbica de cada um dos números\n");
    printf("\nInsira o número de uma das opções acima a sua escolha: ");
    scanf("%d", &valor);

    if (valor < 1 || valor > 3) {
        printf("\nO valor inserido é inválido.\n\n");
    }

    else {
        printf("O valor inserido é %d.", valor);
        printf("\n\nInsira dois números quaisquer: ");
        scanf("%f %f", &n1, &n2);
        printf("Os números inseridos foram: %.2f, %.2f.", n1, n2);

        //processamento e output de dados
        if (valor == 1) {
            result = pow(n1, n2);
            printf("\n\nO resultado será %.2f.\n\n", result);
        }
        
        else if (valor == 2) {
            if (n1 < 0 || n2 < 0) {
                printf("\n\nNão existe raíz quadrada de número negativo.\n\n");
            }
            else {
                result = sqrt(n1);
                result2 = sqrt(n2);
                printf("\n\nO resultado será %.2f e %.2f.\n\n", result, result2);
            }
        }

        else if (valor == 3) {
            result = cbrt(n1);
            result2 = cbrt(n2);
            printf("\n\nO resultado será %.2f e %.2f.\n\n", result, result2);
        }

    }

    return(0);

}