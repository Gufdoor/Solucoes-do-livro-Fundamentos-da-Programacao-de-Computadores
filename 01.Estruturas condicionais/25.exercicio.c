//inclus�o de bibliotecas
#include <stdio.h>
#include <locale.h>


//programa principal

int main () {

    //declara��o de vari�veis
    float hExtra, hFalta, H, grat;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados
    printf("\nCalculo de gratifica��o para funcion�rios");
    printf("\n\nInsira o n�mero de horas extra: ");
    scanf("%f", &hExtra);

        //teste de valida��o
        if (hExtra < 0) {
            printf("\n\n\nO valor de horas extra inserido � inv�lido.\n\n");
            return(0);
        }

    printf("Insira o n�mero de horas em falta: ");
    scanf("%f", &hFalta);

        //teste de valida��o
        if (hFalta < 0) {
            printf("\n\n\nO valor de horas em falta inserido � inv�lido.\n\n");
            return(0);
        }

    //processamento de dados I (c�lculo)
    H = (hExtra - hFalta * 2/3) * 60;

    //processamento de dados II (categoriza��o)
    if (H >= 2400) {
        grat = 500;
        H /= 60;
    }    

    else if (H > 1800 && H < 2400) {
        grat = 400;
        H /= 60;
    }

    else if (H >= 1200 && H < 1800) {
        grat = 300;
        H /= 60;
    }

    else if (H >= 600 && H < 1200) {
        grat = 200;
        H /= 60;
    }

    else if (H >= 0 && H < 600) {
        grat = 100;
        H /= 60; 
    }

    else {
        printf("\nVoc� n�o tem direito a nenhuma gratifica��o.\n\n");
        return (0);
    }

    //output de dados 
    printf("\nO seu saldo de horas � %.1f e voc� tem direito � R$%.2f de gratifica��o.\n\n", H, grat);

    return(0);

}