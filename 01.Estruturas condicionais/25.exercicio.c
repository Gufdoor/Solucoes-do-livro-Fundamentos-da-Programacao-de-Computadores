//inclusão de bibliotecas
#include <stdio.h>
#include <locale.h>


//programa principal

int main () {

    //declaração de variáveis
    float hExtra, hFalta, H, grat;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados
    printf("\nCalculo de gratificação para funcionários");
    printf("\n\nInsira o número de horas extra: ");
    scanf("%f", &hExtra);

        //teste de validação
        if (hExtra < 0) {
            printf("\n\n\nO valor de horas extra inserido é inválido.\n\n");
            return(0);
        }

    printf("Insira o número de horas em falta: ");
    scanf("%f", &hFalta);

        //teste de validação
        if (hFalta < 0) {
            printf("\n\n\nO valor de horas em falta inserido é inválido.\n\n");
            return(0);
        }

    //processamento de dados I (cálculo)
    H = (hExtra - hFalta * 2/3) * 60;

    //processamento de dados II (categorização)
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
        printf("\nVocê não tem direito a nenhuma gratificação.\n\n");
        return (0);
    }

    //output de dados 
    printf("\nO seu saldo de horas é %.1f e você tem direito à R$%.2f de gratificação.\n\n", H, grat);

    return(0);

}