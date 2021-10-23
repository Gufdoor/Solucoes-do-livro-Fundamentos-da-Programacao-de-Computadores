/*=============================================================================================================================================================
    Exercício 01 - Capítulo 05
    
    Faça um programa que leia cinco grupos de quatro valores (A, B, C, D) e mostre-os na ordem lida. Em seguida,
    organize-os em ordem crescente e decrescente.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    float controle = 0;                     //variável para controlar o número de grupos 
    float n1, n2, n3, n4;                   //valores a serem inseridos pelo usuário
    float nMaior, nMedio1, nMedio2, nMenor; //controle de ordem 

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");

    while (controle < 5) 
    {
        printf("Insira 4 números diversos: ", n1, n2, n3, n4);   
        scanf("%f %f %f %f", &n1, &n2, &n3, &n4);    
        printf("\n\nOs valores inseridos foram: %.2f, %.2f, %.2f, %.2f.", n1, n2, n3, n4);

        //ordenando os valores através de condições ===========================================================================================================
            //condições para quando n1 for o maior número
            if (n1 > n2 && n1 > n3 && n1 > n4) {
                nMaior = n1; 

                if (n2 > n3 && n3 > n4) {
                    nMedio1 = n2;
                    nMedio2 = n3;
                    nMenor = n4;
                }

                else if (n2 > n4 && n4 > n3) {
                    nMedio1 = n2;
                    nMedio2 = n4;
                    nMenor = n3;
                }

                else if (n3 > n2 && n2 > n4) {
                    nMedio1 = n3;
                    nMedio2 = n2;
                    nMenor = n4;
                }

                else if (n3 > n4 && n4 > n2) {
                    nMedio1 = n3;
                    nMedio2 = n4;
                    nMenor = n2;
                }

                else if (n4 > n2 && n2 > n3) {
                    nMedio1 = n4;
                    nMedio2 = n2;
                    nMenor = n3;
                }

                else if (n4 > n3 && n3 > n2) {
                    nMedio1 = n4;
                    nMedio2 = n3;
                    nMenor = n2;
                }
            }


            //condições para quando n2 for o maior número
            if (n2 > n1 && n2 > n3 && n2 > n4) {
                nMaior = n2; 

                if (n1 > n3 && n3 > n4) {
                    nMedio1 = n1;
                    nMedio2 = n3;
                    nMenor = n4;
                }

                else if (n1 > n4 && n4 > n3) {
                    nMedio1 = n1;
                    nMedio2 = n4;
                    nMenor = n3;
                }

                else if (n3 > n1 && n1 > n4) {
                    nMedio1 = n3;
                    nMedio2 = n1;
                    nMenor = n4;
                }

                else if (n3 > n4 && n4 > n1) {
                    nMedio1 = n3;
                    nMedio2 = n4;
                    nMenor = n1;
                }

                else if (n4 > n1 && n1 > n3) {
                    nMedio1 = n4;
                    nMedio2 = n1;
                    nMenor = n3;
                }

                else if (n4 > n3 && n3 > n1) {
                    nMedio1 = n4;
                    nMedio2 = n3;
                    nMenor = n1;
                }
            }


            //condições para quando n3 for o maior número
            if (n3 > n1 && n3 > n2 && n3 > n4) {
                nMaior = n3; 

                if (n1 > n2 && n2 > n4) {
                    nMedio1 = n1;
                    nMedio2 = n2;
                    nMenor = n4;
                }

                else if (n1 > n4 && n4 > n2) {
                    nMedio1 = n1;
                    nMedio2 = n4;
                    nMenor = n2;
                }

                else if (n2 > n1 && n1 > n4) {
                    nMedio1 = n2;
                    nMedio2 = n1;
                    nMenor = n4;
                }

                else if (n2 > n4 && n4 > n1) {
                    nMedio1 = n2;
                    nMedio2 = n4;
                    nMenor = n1;
                }

                else if (n4 > n1 && n1 > n2) {
                    nMedio1 = n4;
                    nMedio2 = n1;
                    nMenor = n2;
                }

                else if (n4 > n2 && n2 > n1) {
                    nMedio1 = n4;
                    nMedio2 = n2;
                    nMenor = n1;
                }
            }


            //condições para quando n4 for o maior número
            if (n4 > n1 && n4 > n2 && n4 > n3) {
                nMaior = n4; 

                if (n1 > n3 && n3 > n2) {
                    nMedio1 = n1;
                    nMedio2 = n3;
                    nMenor = n2;
                }

                else if (n1 > n2 && n2 > n3) {
                    nMedio1 = n1;
                    nMedio2 = n2;
                    nMenor = n3;
                }

                else if (n3 > n1 && n1 > n2) {
                    nMedio1 = n3;
                    nMedio2 = n1;
                    nMenor = n2;
                }

                else if (n3 > n2 && n2 > n1) {
                    nMedio1 = n3;
                    nMedio2 = n2;
                    nMenor = n1;
                }

                else if (n2 > n1 && n1 > n3) {
                    nMedio1 = n2;
                    nMedio2 = n1;
                    nMenor = n3;
                }

                else if (n2 > n3 && n3 > n1) {
                    nMedio1 = n2;
                    nMedio2 = n3;
                    nMenor = n1;
                }
            }
        
        //output de dados em ordem ============================================================================================================================
        printf("\nNúmeros em ordem crescente: %.2f, %.2f, %.2f, %.2f.", nMenor, nMedio2, nMedio1, nMaior);
        printf("\nNúmeros em ordem decrescente: %.2f, %.2f, %.2f, %.2f.\n\n", nMaior, nMedio1, nMedio2, nMenor);

        //limitante de ciclos
        controle++;
    }
    
    printf("\n\n\nFim do programa.\n\n\n");
    return(0); //finalizar o programa

}