//inclus�o de bibliotecas
#include <stdio.h>
#include <locale.h>


//programa principal

int main () {

    //declara��o de vari�veis
    int cat;
    float preco, vAumento, vImposto;
    char sit;
    char* clas = (char*)malloc(7*sizeof(char));

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados
    printf("\nEstipular pre�o de um produto");
    printf("\n\nInsira o pre�o do produto escolhido: ");
    scanf("%f", &preco);

        //teste de valida��o
        if (preco < 0) {
            printf("\n\n\nO valor inserido � inv�lido.\n\n");
            return(0);
        }
        else if (preco == 0) {
            printf("\n\n\nVoc� n�o adquiriu nenhum produto.\n\n");
            return(0);
        }

    printf("\n\n1 - Limpeza\n");
    printf("2 - Alimenta��o\n");
    printf("3 - Vestu�rio\n");
    printf("\nInsira o n�mero de uma das op��es acima que corresponda a categoria do seu produto: ");
    scanf("%d", &cat);

        //teste de valida��o
        if (cat != 1 && cat != 2 && cat != 3) {
            printf("\n\n\nO n�mero inserido � inv�lido.\n\n");
            return(0);
        }

    printf("\n\nR - Produtos que necessitam de refrigera��o\n");
    printf("N - Produtos que n�o necessitam de refrigera��o\n");
    printf("\nInsira a letra que corresponda a situa��o do seu produto: ");
    scanf(" %c", &sit);

        //teste de valida��o
        if (sit != 'R' && sit != 'N') {
            printf("\n\n\nA letra inserida � inv�lida.\n\n");
            return(0);
        }

    //processamento de dados I (valor de aumento)
    if (cat == 1) {
     
        if (preco <= 25) {
            vAumento = preco * 0.05;
        }
        else {
            vAumento = preco * 0.12;
        }
    }

    else if (cat == 2) {

        if (preco <= 25) {
            vAumento = preco * 0.08;
        }
        else {
            vAumento = preco * 0.15;
        }
    }

    else {

        if (preco <= 25) {
            vAumento = preco * 0.1;
        }
        else {
            vAumento = preco * 0.18;
        }
    }

    //processamento de dados II (valor do imposto)
    if (cat == 2 || sit == 'R') {
        vImposto = preco * 0.05;
    }

    else {
        vImposto = preco * 0.08;
    }

    //processamento de dados III (novo pre�o)
    preco += vAumento - vImposto; 

    //processamento de dados IV (classifica��o)
    if (preco <= 50) 
        clas = "Barato";

    else if (preco > 50 && preco < 120)
        clas = "Normal";

    else 
        clas = "Caro";

    //output de dados 
    printf("\n\nSegue abaixo o resgitro da precifica��o deste produto:\n Valor do aumento: R$%.2f\n Valor do imposto: R$%.2f\n Novo pre�o: R$%.2f\n Classifica��o: %s\n\n\n",
        vAumento, vImposto, preco, clas);

    return(0);

}