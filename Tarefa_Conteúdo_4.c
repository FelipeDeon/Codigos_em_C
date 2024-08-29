#include <stdio.h>

//Incluindo biblioteca para caracteres especiais
#include <locale.h>

/* Representa��o tipos de dados

Tipo de dado  |  declarar vari�vel  |  utilizar no printf
inteiro                int                 %d ou %i
decimal               float              %f %.2(...)f
caractere              char                  %c
booleano               bool                  %b

*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Declarando tr�s vari�veis decimais, j� guardando o valor de uma vari�vel
    float precoProduto = 10.50, valorDesconto, precoFinal;

    //Declarando uma vari�vel inteiro, j� guardando o valor dentro da vari�vel
    int porcentagemDesconto = 50;

    //Calculando o valor de desconto - guardando resultado na vari�vel valorDesconto
    valorDesconto = (precoProduto/100)*porcentagemDesconto;

    //Calculando pre�o final - guardando na vari�vel precoFinal
    precoFinal = precoProduto-valorDesconto;

    //Exibindo informa��es na tela
    printf("Pre�o original: %.2f\n", precoProduto);
    printf("Porcentagem de desconto: %d\n", porcentagemDesconto);
    printf("Valor do desconto: %.2f\n", valorDesconto);
    printf("Pre�o final: %.2f\n", precoFinal);

    return 0;
}

