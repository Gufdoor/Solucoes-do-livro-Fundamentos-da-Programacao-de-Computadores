/*=============================================================================================================================================================
    Exerc�cio 01 - Cap�tulo 05
    
    Fa�a um programa que leia cinco grupos de quatro valores (A, B, C, D) e mostre-os na ordem lida. Em seguida,
    organize-os em ordem crescente e decrescente.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    float controle = 0;                     //vari�vel para controlar o n�mero de grupos 
    float n1, n2, n3, n4;                   //valores a serem inseridos pelo usu�rio
    float nMaior, nMedio1, nMedio2, nMenor; //controle de ordem 

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");

    while (controle < 5) 
    {
        printf("Insira 4 n�meros diversos: ", n1, n2, n3, n4);   
        scanf("%f %f %f %f", &n1, &n2, &n3, &n4);    
        printf("\n\nOs valores inseridos foram: %.2f, %.2f, %.2f, %.2f.", n1, n2, n3, n4);

        //ordenando os valores atrav�s de condi��es ===========================================================================================================
            //condi��es para quando n1 for o maior n�mero
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


            //condi��es para quando n2 for o maior n�mero
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


            //condi��es para quando n3 for o maior n�mero
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


            //condi��es para quando n4 for o maior n�mero
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
        printf("\nN�meros em ordem crescente: %.2f, %.2f, %.2f, %.2f.", nMenor, nMedio2, nMedio1, nMaior);
        printf("\nN�meros em ordem decrescente: %.2f, %.2f, %.2f, %.2f.\n\n", nMaior, nMedio1, nMedio2, nMenor);

        //limitante de ciclos
        controle++;
    }
    
    printf("\n\n\nFim do programa.\n\n\n");
    return(0); //finalizar o programa

}