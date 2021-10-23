//inclusão de bibliotecas
#include <stdio.h>
#include <locale.h>


//programa principal

int main () {

    //declaração de variáveis
    float n1, n2, n3, result;

    //definição para linguagem
    setlocale(LC_ALL,"Portuguese");

    //input de dados
    printf("\nO maior dos três.\n\n");
    printf("Insira 3 números quaisquer: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Os números inseridos foram: %.2f, %.2f, %.2f.", n1, n2, n3);

    //processamento e output de dados
    if (n1 > n2 && n1 > n3)
        printf("\n\nO número %.2f é o maior dentre os três.\n\n", n1);
    
    else if (n2 > n1 && n2 > n3)
        printf("\n\nO número %.2f é o maior dentre os três.\n\n", n2);

    else if (n3 > n1 && n3 > n2)
        printf("\n\nO número %.2f é o maior dentre os três.\n\n", n3);

    else if (n1 == n2 && n1 > n3)
        printf("\n\nO número %.2f é o maior dentre os três.\n\n", n1);

    else if (n1 == n3 && n1 > n2)
        printf("\n\nO número %.2f é o maior dentre os três.\n\n", n1);

    else 
        printf("\n\nO número %.2f é o maior dentre os três.\n\n", n2);

    return(0);

}