//inclus�o de bibliotecas
#include <stdio.h>
#include <locale.h>


//programa principal

int main () {

    //declara��o de vari�veis
    int senha;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados
    printf("\nMega-senha");
    printf("\n\nInsira a senha requerida: ");
    scanf("%d", &senha);

    //processamento e outup de dados
    if (senha == 4531) {
        printf("\nAcesso permitido.\n\n");
    }
    else {
        printf("\nAcesso negado.\n\n");
    }

    return(0);

}