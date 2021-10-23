//inclus�o de bibliotecas
#include <stdio.h>
#include <locale.h>


//programa principal

int main () {

    //declara��o de vari�veis
    float n1, n2, result;
    int valor;

    //defini��o para linguagem
    setlocale(LC_ALL,"Portuguese");

    //input de dados
    printf("\nCalculadora limitada.\n\n");
    printf("1 M�dia entre dois n�meros\n2 Diferen�a entre o maior n�mero pelo menor\n3 Produto entre dois valores\n4 Divis�o do primeiro pelo segundo\n");
    printf("\nInsira o n�mero de uma das op��es acima a sua escolha: ");
    scanf("%d", &valor);

    if (valor < 1 || valor > 4) {
        printf("\nO valor inserido � inv�lido.\n\n", result);
    }

    else {
        printf("O valor inserido � %d.", valor);
        printf("\n\nInsira dois n�meros quaisquer: ");
        scanf("%f %f", &n1, &n2);
        printf("Os n�meros inseridos foram: %.2f, %.2f.", n1, n2);

        //processamento e output de dados
        if (valor == 1) {
            result = (n1 + n2)/2;
            printf("\n\nO resultado da m�dia � %.2f.\n\n", result); 
        }

        else if (valor == 2) {
            if (n1 > n2) {
                result = n1 - n2;
                printf("\n\nO resultado da diferen�a � %.2f.\n\n", result);
            }
            else {
                result = n2 - n1;
                printf("\n\nO resultado da diferen�a � %.2f.\n\n", result);
            }
        }

        else if (valor == 3) {
            result = n1 * n2;
            printf("\n\nO resultado da multiplica��o � %.2f.\n\n", result);
        }

        else if (valor == 4) {
            if (n2 == 0) {
                printf("\n\nO valor inserido n�o pode ser 0.\n\n", result);
            }

            else {
            result = n1 / n2;
            printf("\n\nO resultado da divis�o � %.2f.\n\n", result);
            }
        }
    }

    return(0);

}