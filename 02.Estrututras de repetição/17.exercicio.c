/*=============================================================================================================================================================
    Exercício 17 - Capítulo 05
    
    Foi feita uma pesquisa sobre a audiência de canal de TV em várias casas de uma cidade, em determinado
    dia. Para cada casa consultada foi fornecido o número do canal (4, 5, 7, 12) e o número de pessoas que
    estavam assistindo àquele canal. Se a televisão estivesse desligada, nada era anotado, ou seja, essa casa
    não entrava na pesquisa. Faça um programa que:

        - leia um número indeterminado de dados (número do canal e número de pessoas que estavam assistindo);
        - calcule e mostre a porcentagem de audiência de cada canal.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int controle = 1;                                   //limitante da quantidade de números a serem inseridos
    int canal = 1, pessoas;                             //variáveis intermediadoras que receberão os respectivos dados do usuário
    int nPessoas = 0;                                   //variável que receberá a quantidade total de pessoas
    float pC4 = 0, pC5 = 0, pC7 = 0, pC12 = 0;          //variáveis que receberão as respectivas porcentagens 

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");

    while (canal != 0) {             //definição de condição para limitar o laço de repetição
        printf("\n%d - Insira um canal (4, 5, 7 ou 12), ou insira 0 para finalizar: ", controle);
        scanf("%d", &canal);

            //validação da idade
            while (canal != 4 && canal != 5 && canal != 7 && canal != 12 && canal != 0) {
                printf("\nValor inválido. Tente novamente: ");
                scanf("%d", &canal);
                printf("\n");
            }

            //quando 0 for inserido
            if (canal == 0) {
                if (pC4 == 0 && pC5 == 0 && pC7 == 0 && pC12 == 0) {    //se o usuário não tiver inserido nenhuma idade anteriormente, não haverá porcentagem a ser calculada
                    printf("\n\nVocê não inseriu nenhum valor anteriormente.\n\n\n");
                    return(0);
                }

                break;      //comando para terminar a execução do laço while
            }

        printf("%d - Insira a quantidade de pessoas que estavam assistindo ao canal: ", controle);
        scanf("%d", &pessoas);

            //validação da quantidade de pessoas
            while (pessoas <= 0) {
                printf("\nValor inválido. Tente novamente: ");
                scanf("%d", &pessoas);
                printf("\n");
            }

            //condição para categorizar canais
            if (canal == 4) {
                pC4 += pessoas;
                nPessoas += pessoas;
                controle++;
            }

            else if (canal == 5) {
                pC5 += pessoas;
                nPessoas += pessoas;
                controle++;
            }

            else if (canal == 7) {
                pC7 += pessoas;
                nPessoas += pessoas;
                controle++;
            }

            else if (canal == 12) {
                pC12 += pessoas;
                nPessoas += pessoas;
                controle++;
            }
    }

    //processamento de dados II ===============================================================================================================================
    pC4 *= 100 / nPessoas;      //cálculo da porcentagem da quantidade do público do canal 4
    pC5 *= 100 / nPessoas;      //cálculo da porcentagem da quantidade do público do canal 5
    pC7 *= 100 / nPessoas;      //cálculo da porcentagem da quantidade do público do canal 7
    pC12 *= 100 / nPessoas;      //cálculo da porcentagem da quantidade do público do canal 12

    //output de dados =========================================================================================================================================
    printf("\nAudiência dos canais:\n Canal 4: %.2f%%\n Canal 5: %.2f%%\n Canal 7: %.2f%%\n Canal 12: %.2f%%", pC4, pC5, pC7, pC12);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}