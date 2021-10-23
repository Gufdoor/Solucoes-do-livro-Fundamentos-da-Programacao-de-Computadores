//inclus�o de bibliotecas
#include <stdio.h>
#include <locale.h>


//programa principal

int main () {

    //declara��o de vari�veis
    int idade;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados
    printf("\nCategoria de nata��o");
    printf("\n\nInsira a sua idade: ");
    scanf("%d", &idade);

    //processamento e outup de dados
    if (idade < 0) 
        printf("\nA idade inserida � inv�lida.\n\n");

    else if (idade >= 0 && idade < 5) 
        printf("\nSua idade n�o pertence a nenhuma categoria.\n\n");

    else if (idade >= 5 && idade <= 7) 
        printf("\nVoc� pertence a categoria infantil.\n\n");

    else if (idade >= 8 && idade <= 10) 
        printf("\nVoc� pertence a categoria juvenil.\n\n");

    else if (idade >= 11 && idade <= 15)
        printf("\nVoc� pertence a categoria adolescente.\n\n");

    else if (idade >= 16 && idade <= 30) 
        printf("\nVoc� pertence a categoria adulta.\n\n");

    else if (idade > 30 && idade < 125)
        printf("\nVoc� pertence a categoria s�nior.\n\n");

    else 
        printf("\nVoc� provavelmente n�o � humano.\n\n");

    return(0);

}