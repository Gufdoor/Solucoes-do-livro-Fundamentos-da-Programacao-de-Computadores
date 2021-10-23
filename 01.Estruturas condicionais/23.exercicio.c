//inclus�o de bibliotecas
#include <stdio.h>
#include <locale.h>


//programa principal

int main () {

    //declara��o de vari�veis
    int cod, quant, p1 = 10, p2 = 15, p3 = 20, p4 = 30;
    float pTotal, vDesc, pFinal, pEquiv;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados
    printf("\nRegistro de compra");
    printf("\n\nInsira o c�digo do produto comprado: ");
    scanf("%d", &cod);

        //teste de valida��o
        if (cod < 1 || cod > 40 ) {
            printf("\nO valor do c�digo inserido � inv�lido.\n\n");
            return(0);
        }

    printf("Insira a quantidade comprada do produto: ");
    scanf("%d", &quant);

        //teste de valida��o
        if (quant <= 0) {
            printf("\n\nA quantidade inserida � inv�lida.\n\n");
            return(0);
        }

    //processamento de dados (parte I)
    if (cod >= 1 && cod <= 10) {
        pTotal = p1 * quant;
        pEquiv = p1;
    }

    else if (cod >= 11 && cod <= 20) {
        pTotal = p2 * quant;
        pEquiv = p2;
    }

    else if (cod >= 21 && cod <= 30) {
        pTotal = p3 * quant;
        pEquiv = p3;
    }

    else {
        pTotal = p4 * quant;
        pEquiv = p4;
    }

    //processamento de dados (parte II)
    if (pTotal <= 250) {
        vDesc = pTotal * 0.05;
        pFinal = pTotal - vDesc;
    }

    else if (pTotal > 250 && pTotal <= 500) {
        vDesc = pTotal * 0.1;
        pFinal = pTotal - vDesc;
    }

    else {
        vDesc = pTotal * 0.15;
        pFinal = pTotal - vDesc;
    }

    //output de dados 
    printf("\n\nSegue abaixo o registro de sua compra:\n\n  Pre�o unit�rio: R$%.2f\n  Pre�o total da nota: R$%.2f\n  Valor do desconto: -R$%.2f\n  Pre�o final: R$%.2f\n\n\n", 
        pEquiv, pTotal, vDesc, pFinal);

    return(0);

}