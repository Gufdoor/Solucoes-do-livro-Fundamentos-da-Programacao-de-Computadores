/*=============================================================================================================================================================
    Exercício 21 - Capítulo 05
    
    Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código.

    Os códigos utilizados são:
        1, 2, 3, 4 Votos para os respectivos candidatos
        5 Voto nulo
        6 Voto em branco

    Faça um programa que calcule e mostre:
        - o total de votos para cada candidato;
        - o total de votos nulos;
        - o total de votos em branco;
        - a porcentagem de votos nulos sobre o total de votos; e
        - a porcentagem de votos em branco sobre o total de votos.

    Para finalizar o conjunto de votos, tem-se o valor zero e, para códigos inválidos, o programa deverá
    mostrar uma mensagem.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int codigo = 10;                        //variável que receberá o código do usuário
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;     //variáveis que receberão a quantidade de votos para os respectivos candidatos
    int vNulo = 0, vBranco = 0;             //variáveis que receberão a quantidade dos respectivos votos
    float vTotais = 0;                      //variável que receberá a quantidade de votos totais
    float pNulo, pBranco;                   //variáveis que receberam a porcentagem de votos nulos e brancos, respectivamente


    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    while (codigo != 0 ) {                  //definição de condição para limitar o laço de repetição
        printf("\n 0 - Sair\n");
        printf(" 1 - Candidato 1\n");
        printf(" 2 - Candidato 2\n");
        printf(" 3 - Candidato 3\n");
        printf(" 4 - Candidato 4\n");
        printf(" 5 - Voto nulo\n");
        printf(" 6 - Voto em branco\n");
        printf("Insira uma das opções acima: ");
        scanf("%d", &codigo);

            //validação do código
            while (codigo < 0 || codigo > 6) {
                printf("\nValor inválido. Tente novamente: ");
                scanf("%d", &codigo);
                printf("\n");
            }

        //categorização dos votos
        if (codigo == 0) 
            break;         //comando para finalizar a execução do laço while

        else if (codigo == 1) {
            c1++;
            vTotais++;
        }

        else if (codigo == 2) {
            c2++;
            vTotais++;
        }

        else if (codigo == 3) {
            c3++;
            vTotais++;
        }

        else if (codigo == 4) {
            c4++;
            vTotais++;
        }

        //total de votos nulos e brancos
        else if (codigo == 5) {
            vNulo++; 
            vTotais++;
        }

        else if (codigo == 6) {
            vBranco++; 
            vTotais++;
        }

        //porcentagem de votos nulos e em branco
        pNulo = vNulo * 100 / vTotais;
        pBranco = vBranco * 100 / vTotais;

    }

    //output de dados =========================================================================================================================================
    if (c1 != 0) {
        printf("\nResultados:\n");
        printf(" Total de votos para cada candidato: C1 = %d | C2 = %d | C3 = %d | C4 = %d\n", c1, c2, c3, c4);
        printf(" Total de votos nulos: %d\n", vNulo);
        printf(" Total de votos em branco: %d\n", vBranco);
        printf(" Porcentagem de votos nulos: %.2f%%\n", pNulo);
        printf(" Porcentagem de votos em branco: %.2f%%", pBranco);
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}