//inclusão de bibliotecas
#include <stdio.h>
#include <locale.h>


//programa principal

int main () {

    //declaração de variáveis
    int idade;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados
    printf("\nCategoria de natação");
    printf("\n\nInsira a sua idade: ");
    scanf("%d", &idade);

    //processamento e outup de dados
    if (idade < 0) 
        printf("\nA idade inserida é inválida.\n\n");

    else if (idade >= 0 && idade < 5) 
        printf("\nSua idade não pertence a nenhuma categoria.\n\n");

    else if (idade >= 5 && idade <= 7) 
        printf("\nVocê pertence a categoria infantil.\n\n");

    else if (idade >= 8 && idade <= 10) 
        printf("\nVocê pertence a categoria juvenil.\n\n");

    else if (idade >= 11 && idade <= 15)
        printf("\nVocê pertence a categoria adolescente.\n\n");

    else if (idade >= 16 && idade <= 30) 
        printf("\nVocê pertence a categoria adulta.\n\n");

    else if (idade > 30 && idade < 125)
        printf("\nVocê pertence a categoria sênior.\n\n");

    else 
        printf("\nVocê provavelmente não é humano.\n\n");

    return(0);

}