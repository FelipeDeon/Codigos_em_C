#include <stdio.h>

//Incluindo biblioteca para caracteres especiais
#include <locale.h>

/* Representação tipos de dados

Tipo de dado  |  declarar variável  |  utilizar no printf
inteiro                int                 %d ou %i
decimal               float              %f %.2(...)f
caractere              char                  %c
booleano               bool                  %b

*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Declarando três variáveis decimais, já guardando o valor de uma variável
    float precoProduto = 10.50, valorDesconto, precoFinal;

    //Declarando uma variável inteiro, já guardando o valor dentro da variável
    int porcentagemDesconto = 50;

    //Calculando o valor de desconto - guardando resultado na variável valorDesconto
    valorDesconto = (precoProduto/100)*porcentagemDesconto;

    //Calculando preço final - guardando na variável precoFinal
    precoFinal = precoProduto-valorDesconto;

    //Exibindo informações na tela
    printf("Preço original: %.2f\n", precoProduto);
    printf("Porcentagem de desconto: %d\n", porcentagemDesconto);
    printf("Valor do desconto: %.2f\n", valorDesconto);
    printf("Preço final: %.2f\n", precoFinal);

    return 0;
}

