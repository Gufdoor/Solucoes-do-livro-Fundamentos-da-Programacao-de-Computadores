//inclus�o de bibliotecas
#include <stdio.h>
#include <locale.h>


//programa principal

int main () {

    //declara��o de vari�veis
    float n1, n2, n3, result;

    //defini��o para linguagem
    setlocale(LC_ALL,"Portuguese");

    //input de dados
    printf("\nO maior dos tr�s.\n\n");
    printf("Insira 3 n�meros quaisquer: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Os n�meros inseridos foram: %.2f, %.2f, %.2f.", n1, n2, n3);

    //processamento e output de dados
    if (n1 > n2 && n1 > n3)
        printf("\n\nO n�mero %.2f � o maior dentre os tr�s.\n\n", n1);
    
    else if (n2 > n1 && n2 > n3)
        printf("\n\nO n�mero %.2f � o maior dentre os tr�s.\n\n", n2);

    else if (n3 > n1 && n3 > n2)
        printf("\n\nO n�mero %.2f � o maior dentre os tr�s.\n\n", n3);

    else if (n1 == n2 && n1 > n3)
        printf("\n\nO n�mero %.2f � o maior dentre os tr�s.\n\n", n1);

    else if (n1 == n3 && n1 > n2)
        printf("\n\nO n�mero %.2f � o maior dentre os tr�s.\n\n", n1);

    else 
        printf("\n\nO n�mero %.2f � o maior dentre os tr�s.\n\n", n2);

    return(0);

}