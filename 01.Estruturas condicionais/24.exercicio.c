//inclusão de bibliotecas
#include <stdio.h>
#include <locale.h>


//programa principal

int main () {

    //declaração de variáveis
    int cat;
    float preco, vAumento, vImposto;
    char sit;
    char* clas = (char*)malloc(7*sizeof(char));

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados
    printf("\nEstipular preço de um produto");
    printf("\n\nInsira o preço do produto escolhido: ");
    scanf("%f", &preco);

        //teste de validação
        if (preco < 0) {
            printf("\n\n\nO valor inserido é inválido.\n\n");
            return(0);
        }
        else if (preco == 0) {
            printf("\n\n\nVocê não adquiriu nenhum produto.\n\n");
            return(0);
        }

    printf("\n\n1 - Limpeza\n");
    printf("2 - Alimentação\n");
    printf("3 - Vestuário\n");
    printf("\nInsira o número de uma das opções acima que corresponda a categoria do seu produto: ");
    scanf("%d", &cat);

        //teste de validação
        if (cat != 1 && cat != 2 && cat != 3) {
            printf("\n\n\nO número inserido é inválido.\n\n");
            return(0);
        }

    printf("\n\nR - Produtos que necessitam de refrigeração\n");
    printf("N - Produtos que não necessitam de refrigeração\n");
    printf("\nInsira a letra que corresponda a situação do seu produto: ");
    scanf(" %c", &sit);

        //teste de validação
        if (sit != 'R' && sit != 'N') {
            printf("\n\n\nA letra inserida é inválida.\n\n");
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

    //processamento de dados III (novo preço)
    preco += vAumento - vImposto; 

    //processamento de dados IV (classificação)
    if (preco <= 50) 
        clas = "Barato";

    else if (preco > 50 && preco < 120)
        clas = "Normal";

    else 
        clas = "Caro";

    //output de dados 
    printf("\n\nSegue abaixo o resgitro da precificação deste produto:\n Valor do aumento: R$%.2f\n Valor do imposto: R$%.2f\n Novo preço: R$%.2f\n Classificação: %s\n\n\n",
        vAumento, vImposto, preco, clas);

    return(0);

}