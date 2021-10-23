/*=============================================================================================================================================================
    Exercício 18 - Capítulo 05
    
    Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, sexo (M/F)
    e salário. Faça um programa que calcule e mostre:

        - a média dos salários do grupo;
        - a maior e a menor idade do grupo;
        - a quantidade de mulheres com salário até R$ 200,00;
        - a idade e o sexo da pessoa que possui o menor salário.

        Finalize a entrada de dados ao ser digitada uma idade negativa.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int controle = 1;                                   //limitante da quantidade de números a serem inseridos
    int mulher = 0;                                     //variável que receberá a quantidade de mulheres com salário até 200
    char sexo;                                          //variável intermediadora que irá receber o sexo
    char mSexo;                                         //variável que receberá o sexo da pessoa com menor salário
    float idade = 0, salario;                           //variáveis intermediadoras que receberão os respectivos valores
    float mSalario = 0;                                 //variável que receberá a média dos salários
    float nPessoas = 0;                                 //variável que receberá a quantidade de pessoas
    float maior = 0, menor = 999;                       //variáveis que receberão a maior e menor idade
    float mIdade, menorSalario = 9999;                  //variáveis que receberão o menor salário e a idade do mesmo



    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input e processamento de dados ==========================================================================================================================
    printf("\nBem vindo :) \n\n");

    while (idade >= 0) {             //definição de condição para limitar o laço de repetição
        printf("\nInsira a idade da pessoa %d ou um valor negativo para encerrar: ", controle); //receber a idade
        scanf("%f", &idade);

            //quando idade igual a um valor negativo
            if (idade < 0) {
                if (idade == 0 && sexo == 0 && salario == 0) {          //encerrar o programa caso nenhum dado tenha sido inserido anteriormente
                    printf("\nVocê não inseriu nenhum valor anteriormente.\n\n\n");
                    return(0);
                }

                break;
            }

            //categorização da maior idade
            if (idade > maior) 
                maior = idade;

            //categorização da menor idade 
            if (idade < menor) 
                menor = idade;

        printf("Insira o sexo da pessoa %d (M para masculino, F para feminino): ", controle);   //receber o sexo
        scanf(" %c", &sexo);

            //validação do sexo
            while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
                printf("\nValor inválido. Tente novamente: ");
                scanf(" %c", &sexo);
                printf("\n");
            }

        printf("Insira o salário da pessoa %d: ", controle);    //receber o salário
        scanf("%f", &salario);

            //validação do salário
            while (salario <= 0) {
                printf("\nValor inválido. Tente novamente: ");
                scanf("%f", &salario);
                printf("\n");
            }

            //dados para média do salário
            mSalario += salario;
            nPessoas++;

            //quantidade de mulheres com salário até R$200,00
            if (sexo == 'F' || sexo == 'f') {
                if (salario <= 200) 
                    mulher++;
            }

            //menor salário
            if (salario < menorSalario) {
                menorSalario = salario;
                mIdade = idade;
                mSexo = sexo;
            }

        controle++;
    }

    //processamento de dados II ===============================================================================================================================
    mSalario /= nPessoas;       //cálculo da média salarial

    //output de dados =========================================================================================================================================
    printf("\nResultados:\n");
    printf(" Média salarial: R$%.2f\n", mSalario);
    printf(" Maior e a menor idade: %.f e %.f\n", maior, menor);
    printf(" Quantidade de mulheres com salário até R$200,00: %d\n", mulher);

    if (mSexo == 'F' || mSexo == 'f') 
        printf(" Idade e o sexo da pessoa que possui o menor salário: %.f, FEMININO", mIdade);
    else 
        printf(" Idade e o sexo da pessoa que possui o menor salário: %.f, MASCULINO", mIdade);


    printf("\n\n\nFim do programa.\n\n\n");
    return(0);  //finalizar o programa

}