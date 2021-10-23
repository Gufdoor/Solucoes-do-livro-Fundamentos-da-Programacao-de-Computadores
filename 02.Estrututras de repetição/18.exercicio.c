/*=============================================================================================================================================================
    Exerc�cio 18 - Cap�tulo 05
    
    Foi feita uma pesquisa entre os habitantes de uma regi�o. Foram coletados os dados de idade, sexo (M/F)
    e sal�rio. Fa�a um programa que calcule e mostre:

        - a m�dia dos sal�rios do grupo;
        - a maior e a menor idade do grupo;
        - a quantidade de mulheres com sal�rio at� R$ 200,00;
        - a idade e o sexo da pessoa que possui o menor sal�rio.

        Finalize a entrada de dados ao ser digitada uma idade negativa.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int controle = 1;                                   //limitante da quantidade de n�meros a serem inseridos
    int mulher = 0;                                     //vari�vel que receber� a quantidade de mulheres com sal�rio at� 200
    char sexo;                                          //vari�vel intermediadora que ir� receber o sexo
    char mSexo;                                         //vari�vel que receber� o sexo da pessoa com menor sal�rio
    float idade = 0, salario;                           //vari�veis intermediadoras que receber�o os respectivos valores
    float mSalario = 0;                                 //vari�vel que receber� a m�dia dos sal�rios
    float nPessoas = 0;                                 //vari�vel que receber� a quantidade de pessoas
    float maior = 0, menor = 999;                       //vari�veis que receber�o a maior e menor idade
    float mIdade, menorSalario = 9999;                  //vari�veis que receber�o o menor sal�rio e a idade do mesmo



    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");

    while (idade >= 0) {             //defini��o de condi��o para limitar o la�o de repeti��o
        printf("\nInsira a idade da pessoa %d ou um valor negativo para encerrar: ", controle); //receber a idade
        scanf("%f", &idade);

            //quando idade igual a um valor negativo
            if (idade < 0) {
                if (idade == 0 && sexo == 0 && salario == 0) {          //encerrar o programa caso nenhum dado tenha sido inserido anteriormente
                    printf("\nVoc� n�o inseriu nenhum valor anteriormente.\n\n\n");
                    return(0);
                }

                break;
            }

            //categoriza��o da maior idade
            if (idade > maior) 
                maior = idade;

            //categoriza��o da menor idade 
            if (idade < menor) 
                menor = idade;

        printf("Insira o sexo da pessoa %d (M para masculino, F para feminino): ", controle);   //receber o sexo
        scanf(" %c", &sexo);

            //valida��o do sexo
            while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
                printf("\nValor inv�lido. Tente novamente: ");
                scanf(" %c", &sexo);
                printf("\n");
            }

        printf("Insira o sal�rio da pessoa %d: ", controle);    //receber o sal�rio
        scanf("%f", &salario);

            //valida��o do sal�rio
            while (salario <= 0) {
                printf("\nValor inv�lido. Tente novamente: ");
                scanf("%f", &salario);
                printf("\n");
            }

            //dados para m�dia do sal�rio
            mSalario += salario;
            nPessoas++;

            //quantidade de mulheres com sal�rio at� R$200,00
            if (sexo == 'F' || sexo == 'f') {
                if (salario <= 200) 
                    mulher++;
            }

            //menor sal�rio
            if (salario < menorSalario) {
                menorSalario = salario;
                mIdade = idade;
                mSexo = sexo;
            }

        controle++;
    }

    //processamento de dados II ===============================================================================================================================
    mSalario /= nPessoas;       //c�lculo da m�dia salarial

    //output de dados =========================================================================================================================================
    printf("\nResultados:\n");
    printf(" M�dia salarial: R$%.2f\n", mSalario);
    printf(" Maior e a menor idade: %.f e %.f\n", maior, menor);
    printf(" Quantidade de mulheres com sal�rio at� R$200,00: %d\n", mulher);

    if (mSexo == 'F' || mSexo == 'f') 
        printf(" Idade e o sexo da pessoa que possui o menor sal�rio: %.f, FEMININO", mIdade);
    else 
        printf(" Idade e o sexo da pessoa que possui o menor sal�rio: %.f, MASCULINO", mIdade);


    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}