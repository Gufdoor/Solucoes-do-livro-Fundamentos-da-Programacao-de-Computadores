/*=============================================================================================================================================================
    Exerc�cio 03 - Parte 01
    
    Fa�a um programa para controlar o estoque de mercadorias de uma empresa. Inicialmente, o programa dever�
    preencher dois vetores com dez posi��es cada, onde o primeiro corresponde ao c�digo do produto e o
    segundo, ao total desse produto em estoque. Logo ap�s, o programa dever� ler um conjunto indeterminado
    de dados contendo o c�digo de um cliente e o c�digo do produto que ele deseja comprar, juntamente com a
    quantidade. C�digo do cliente igual a zero indica fim do programa. O programa dever� verificar:

        - se o c�digo do produto solicitado existe. Se existir, tentar atender ao pedido; caso contr�rio, exibir
        mensagem C�digo inexistente;
        - cada pedido feito por um cliente s� pode ser atendido integralmente. Caso isso n�o seja poss�vel,
        escrever a mensagem N�o temos estoque suficiente dessa mercadoria. Se puder atend�-lo, escrever
        a mensagem Pedido atendido. Obrigado e volte sempre;
        - efetuar a atualiza��o do estoque somente se o pedido for atendido integralmente;
        - no final do programa, escrever os c�digos dos produtos com seus respectivos estoques j� atualizados.

    OBS: Professor, na sa�da final dos resultados (linhas 118-121) o c�digo do produto da 10� posi��o (9� �ndice) possui um valor fixo = 9 que independe do 
    valor atribu�do ao produto desse �ndice. Tentei corrigir, mas sem sucesso, n�o sei se isso est� atrelado a lixo de vari�vel ou algo do tipo. Estranhamente 
    o mesmo bloco de c�digo, nas linhas 68-72 � executado e o erro n�o ocorre.
=============================================================================================================================================================*/



//inclus�o de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padr�o de entrada e sa�da
#include <locale.h>     //biblioteca para adaptar o c�digo aos padr�es da l�ngua portuguesa (pode ser necess�ria a altera��o do encoding do compilador)
#include <conio.h>      //biblioteca para manipular recursos na tela


//programa principal ==========================================================================================================================================

int main () {

    //declara��o de vari�veis
    int codigo[9], quantidade[9];
    int validacaoProduto;
    int cliente, produto, indice;

    //defini��o para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira os 10 c�digos dos produtos.\n");      
    for (int i = 0 ; i <= 9 ; i++) {                        //percorrer o vetor para receber o c�digo dos 10 produtos
        printf(" Insira o c�digo do produto %d: ", i);
        scanf("%d", &codigo[i]);
    }

    printf("\nInsira as quantidades dos produtos.\n");      
    for (int i = 0 ; i <= 9 ; i++) {                        //percorrer o vetor para receber a quantidade de cada um dos 10 produtos
        printf(" Insira a quantidade do produto %d: ", i);
        scanf("%d", &quantidade[i]);

        //valida��o da quantidade
        while (quantidade[i] < 0) {
            printf(" Valor inv�lido. Insira a quantidade do produto %d: ", i);
            scanf("%d", &quantidade[i]);
        }
    }

    printf("\n\n");

    //processamento e output de dados =========================================================================================================================
    do {
        printf("\nOs c�digos dos produtos e suas quantidades s�o:\n");      //exibir uma lista dos c�digos dos produtos e suas respectivas quantidades
        for (int i = 0 ; i <= 9 ; i++) {            
            printf(" Produto: %d - ", codigo[i]);
            printf("Quantidade: %d\n", quantidade[i]);
        }

        printf("\nInsira o seu c�digo de cliente ou 0 para finalizar: ");
        scanf("%d", &cliente);

        if (cliente != 0) {
            printf("Insira o c�digo de um dos produtos listados: ");
            scanf("%d", &produto);

            //valida��o do c�digo
            do {
                validacaoProduto = 0;

                for (int j = 0 ; j <= 9 ; j++) {
                    if (produto == codigo[j]) {
                        indice = j;     //guardar o �ndice do produto para poder acessar sua quantidade posteriormente
                        validacaoProduto = 1;
                        break;
                    }
                }

                if (validacaoProduto == 0) {
                    printf("\nC�digo inexistente. Insira o c�digo de um dos produtos listados: ");
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
                printf("\nN�o temos estoque suficiente dessa mercadoria :( .\n\n");
                printf("Pressione ENTER para continuar.\n\n");
                getch();
            }
        }

    } while (cliente != 0);

    //output de dados =========================================================================================================================================
    printf("\nOs c�digos dos produtos e suas quantidades resultantes s�o:\n");      
    for (int i = 0 ; i < 10 ; i++) {        
        printf(" Produto: %d - ", codigo[i]);
        printf("Quantidade: %d\n", quantidade[i]);
    }

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}