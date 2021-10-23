/*=============================================================================================================================================================
    Exercício 23 - Parte 01
    
    Crie um programa que receba três valores (obrigatoriamente maiores que zero), representando as medidas
    dos três lados de um triângulo.

    Elabore sub-rotinas para:
        - determinar se esses lados formam um triângulo (sabe-se que, para ser triângulo, a medida de um
        lado qualquer deve ser inferior ou igual à soma das medidas dos outros dois).
        - determinar e mostrar o tipo de triângulo (equilátero, isósceles ou escaleno), caso as medidas formem
        um triângulo.
    
    Todas as mensagens deverão ser mostradas no programa principal.
=============================================================================================================================================================*/



//inclusão de bibliotecas =====================================================================================================================================
#include <stdio.h>      //biblioteca padrão de entrada e saída
#include <locale.h>     //biblioteca para adaptar o código aos padrôes da língua portuguesa (pode ser necessária a alteração do encoding do compilador)
#include <string.h>     //biblioteca para utilizar funções relativas à string
#include <stdlib.h>     //biblioteca para funções acerca de alocação de memória


//funções secundárias =========================================================================================================================================

    //triângulo ou não ----------------------------------------------------------------------------------------------------------------------------------------
    char* triangulo(float l1, float l2, float l3, float *codigo) {
        
        //delcaração de variáveis
        char* resultado1 = (char *) malloc (50);

        //processamento de dados
        if (l1 <= (l2 + l3) && l2 <= (l1 + l3) && l3 <= (l1 + l2)) {
            strcpy(resultado1, "Os valores correspondem à um triângulo.");
            *codigo = 1;
        }

        else
            strcpy(resultado1, "Os valores não correspondem à um triângulo.");
        
        return resultado1;
    }

    //tipo do triângulo ---------------------------------------------------------------------------------------------------------------------------------------
    char* categoria(float l1, float l2, float l3) {

        //declaração de variáveis
        char* tipo = (char *) malloc (15);

        //processamento de dados
            if ((l1 != l2) && (l1 != l3) && (l2 != l3))
                strcpy(tipo, "Escaleno.");

            else if ((l1 == l2) && (l2 == l3))
                strcpy(tipo, "Equilátero.");

            else 
                strcpy(tipo, "Isóceles.");

        return tipo;
    }

//programa principal ==========================================================================================================================================

int main () {

    //declaração de variáveis
    float l1, l2, l3, codigo;
    char* resultado1 = (char *) malloc (sizeof(char) *50);
    char* resultado2 = (char *) malloc (sizeof(char) *50);
    

    //definição para idioma
    setlocale(LC_ALL,"Portuguese");

    //input de dados ==========================================================================================================================================
    printf("\nBem vindo :) \n\n");
    
    printf("Insira três valores correspondentes aos lados de um triângulo, todos maiores que zero: ");
    scanf("%f %f %f", &l1, &l2, &l3);
    printf("\n");

        //validação dos números
        while (l1 <= 0 || l2 <= 0 || l3 <= 0) {
            printf("Valor(es) inválido(s). Insira três valores correspondentes aos lados de um triângulo, todos maiores que zero: ");
            scanf("%f %f %f", &l1, &l2, &l3);
            printf("\n");
        }

    //processamento de dados ==================================================================================================================================
    strcpy(resultado1, triangulo(l1, l2, l3, &codigo));
    strcpy(resultado2, categoria(l1, l2, l3));
    
    //output de dados =========================================================================================================================================
    printf("\n%s", resultado1);

    if (codigo == 1)
        printf("\n%s", resultado2);

    printf("\n\n\nFim do programa.\n\n\n");
    return 0;  //finalizar o programa

}