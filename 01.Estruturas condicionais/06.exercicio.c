//inclus�o de bibliotecas
#include <stdio.h>
#include <locale.h>
#include <math.h>


//programa principal

int main () {

    //declara��o de vari�veis
    float n1, n2, result, result2;
    int valor;

    //defini��o para linguagem
    setlocale(LC_ALL,"Portuguese");

    //input de dados
    printf("\nCalculadora limitada.\n\n");
    printf("1 Primeiro n�mero elevado ao segundo\n2 Raiz quadrada de cada um dos n�meros\n3 Raiz c�bica de cada um dos n�meros\n");
    printf("\nInsira o n�mero de uma das op��es acima a sua escolha: ");
    scanf("%d", &valor);

    if (valor < 1 || valor > 3) {
        printf("\nO valor inserido � inv�lido.\n\n");
    }

    else {
        printf("O valor inserido � %d.", valor);
        printf("\n\nInsira dois n�meros quaisquer: ");
        scanf("%f %f", &n1, &n2);
        printf("Os n�meros inseridos foram: %.2f, %.2f.", n1, n2);

        //processamento e output de dados
        if (valor == 1) {
            result = pow(n1, n2);
            printf("\n\nO resultado ser� %.2f.\n\n", result);
        }
        
        else if (valor == 2) {
            if (n1 < 0 || n2 < 0) {
                printf("\n\nN�o existe ra�z quadrada de n�mero negativo.\n\n");
            }
            else {
                result = sqrt(n1);
                result2 = sqrt(n2);
                printf("\n\nO resultado ser� %.2f e %.2f.\n\n", result, result2);
            }
        }

        else if (valor == 3) {
            result = cbrt(n1);
            result2 = cbrt(n2);
            printf("\n\nO resultado ser� %.2f e %.2f.\n\n", result, result2);
        }

    }

    return(0);

}