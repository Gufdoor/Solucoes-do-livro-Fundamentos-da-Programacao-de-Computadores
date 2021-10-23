/*=============================================================================================================================================================
    Exercício 15 - Capítulo 05
    
    Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo produto
    lançado. Para isso, forneceu o sexo do entrevistado e sua resposta (S ? sim; ou N ? não). Sabe-se
    que foram entrevistadas dez pessoas. Faça um programa que calcule e mostre:

        - o número de pessoas que responderam sim;
        - o número de pessoas que responderam não;
        - o número de mulheres que responderam sim; e
        - a porcentagem de homens que responderam não, entre todos os homens analisados.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int controle;                           //limitante da quantidade de números a serem inseridos
    int nS = 0, nN = 0, mS = 0;             //variáveis que irão receber o número de pessoas que responderam sim, não e mulheres que responderam sim
    int homens = 0;                         //variável que irá receber o número total de homens
    char genero;                            //variável que irá receber e intermediar o gênero
    char intermediador;                     //variável que irá receber e intermediar a resposta
    float pHomensN;                         //variável que irá receber a porcentagem de homens que responderam não

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    for (controle = 1 ; controle < 11 ; controle++) {               //definição de condição para limitar o laço de repetição
        printf("\nSelecione o gênero da pessoa %d (H - Homem, M - Mulher): ", controle);
        scanf(" %c", &genero);

            //validação do gênero inserido
            while (genero != 'H' && genero != 'M') {
                printf("\nOpção inválida. Tente novamente: ");
                scanf(" %c", &genero);
                printf("\n");
            }

        printf("Selecione a resposta da pessoa %d (S - sim, N - N): ", controle);
        scanf(" %c", &intermediador);

            //validação da resposta inserida
            while (intermediador != 'S' && intermediador != 'N') {
                printf("\nOpção inválida. Tente novamente: ");
                scanf(" %c", &intermediador);
                printf("\n");
            }

        if (intermediador == 'S') {         //pessoas que responderam SIM
            nS++;
        }
        else if (intermediador == 'N') {    //pessoas que responderam NÃO
            nN++;
        }

        if (genero == 'M' && intermediador == 'S') {    //mulheres que responderam SIM
            mS++;
        }
        
        if (genero == 'H') {                //quantidade de homens de homens 
            homens++; 

            if (intermediador == 'N') {     //homens que responderam NÃO
                pHomensN++;
            }
        }
    }

    //processamento de dados II ===============================================================================================================================
    pHomensN *= 100 / homens;

    //output de dados =========================================================================================================================================
    printf("\nNúmero de pessoas que responderam SIM: %d", nS);
    printf("\nNúmero de pessoas que responderam NÃO: %d", nN);
    printf("\nNúmero de mulheres que responderam SIM: %d", mS);
    printf("\nPorcentagem de homens que responderam NÃO entre o total de homens: %.2f%%", pHomensN);

    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}