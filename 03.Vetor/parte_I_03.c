/*=============================================================================================================================================================
    Exercício 03 - Parte 01
    
    Faça um programa para controlar o estoque de mercadorias de uma empresa. Inicialmente, o programa deverá
    preencher dois vetores com dez posições cada, onde o primeiro corresponde ao código do produto e o
    segundo, ao total desse produto em estoque. Logo após, o programa deverá ler um conjunto indeterminado
    de dados contendo o código de um cliente e o código do produto que ele deseja comprar, juntamente com a
    quantidade. Código do cliente igual a zero indica fim do programa. O programa deverá verificar:

        - se o código do produto solicitado existe. Se existir, tentar atender ao pedido; caso contrário, exibir
        mensagem Código inexistente;
        - cada pedido feito por um cliente só pode ser atendido integralmente. Caso isso não seja possível,
        escrever a mensagem Não temos estoque suficiente dessa mercadoria. Se puder atendê-lo, escrever
        a mensagem Pedido atendido. Obrigado e volte sempre;
        - efetuar a atualização do estoque somente se o pedido for atendido integralmente;
        - no final do programa, escrever os códigos dos produtos com seus respectivos estoques já atualizados.

    OBS: Professor, na saída final dos resultados (linhas 118-121) o código do produto da 10ª posição (9º índice) possui um valor fixo = 9 que independe do 
    valor atribuído ao produto desse índice. Tentei corrigir, mas sem sucesso, não sei se isso está atrelado a lixo de variável ou algo do tipo. Estranhamente 
    o mesmo bloco de código, nas linhas 68-72 é executado e o erro não ocorre.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <conio.h>      //biblioteca para manipular recursos na tela


//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    int codigo[9], quantidade[9];
    int validacaoProduto;
    int cliente, produto, indice;

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira os 10 códigos dos produtos.\n");      
    for (int i = 0 ; i <= 9 ; i++) {                        //percorrer o vetor para receber o código dos 10 produtos
        printf(" Insira o código do produto %d: ", i);
        scanf("%d", &codigo[i]);
    }

    printf("\nInsira as quantidades dos produtos.\n");      
    for (int i = 0 ; i <= 9 ; i++) {                        //percorrer o vetor para receber a quantidade de cada um dos 10 produtos
        printf(" Insira a quantidade do produto %d: ", i);
        scanf("%d", &quantidade[i]);

        //validação da quantidade
        while (quantidade[i] < 0) {
            printf(" Valor inválido. Insira a quantidade do produto %d: ", i);
            scanf("%d", &quantidade[i]);
        }
    }

    printf("\n\n");

    //processamento e output de dados =========================================================================================================================
    do {
        printf("\nOs códigos dos produtos e suas quantidades são:\n");      //exibir uma lista dos códigos dos produtos e suas respectivas quantidades
        for (int i = 0 ; i <= 9 ; i++) {            
            printf(" Produto: %d - ", codigo[i]);
            printf("Quantidade: %d\n", quantidade[i]);
        }

        printf("\nInsira o seu código de cliente ou 0 para finalizar: ");
        scanf("%d", &cliente);

        if (cliente != 0) {
            printf("Insira o código de um dos produtos listados: ");
            scanf("%d", &produto);

            //validação do código
            do {
                validacaoProduto = 0;

                for (int j = 0 ; j <= 9 ; j++) {
                    if (produto == codigo[j]) {
                        indice = j;     //guardar o índice do produto para poder acessar sua quantidade posteriormente
                        validacaoProduto = 1;
                        break;
                    }
                }

                if (validacaoProduto == 0) {
                    printf("\nCódigo inexistente. Insira o código de um dos produtos listados: ");
                    scanf("%d", &produto);
                }

            } while (validacaoProduto == 0);

            if (quantidade[indice] > 0) {
                quantidade[indice]--;
                printf("\nPedido atendido. Obrigado e volte sempre ;) .\n\n");
                printf("Pressione ENTER para continuar.\n\n");
                getch();
            }

            else {
                printf("\nNão temos estoque suficiente dessa mercadoria :( .\n\n");
                printf("Pressione ENTER para continuar.\n\n");
                getch();
            }
        }

    } while (cliente != 0);

    //output de dados =========================================================================================================================================
    printf("\nOs códigos dos produtos e suas quantidades resultantes são:\n");      
    for (int i = 0 ; i < 10 ; i++) {        
        printf(" Produto: %d - ", codigo[i]);
        printf("Quantidade: %d\n", quantidade[i]);
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}