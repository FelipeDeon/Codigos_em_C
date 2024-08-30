#include <stdio.h>
#include <locale.h>
#include <string.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade;

    printf("Insira sua idade: ");
    scanf("%d", &idade);

    printf("\n");

    printf ("\n");
    printf ("< representa menor de idade\n> representa maior de idade\n\n");
    // Várivel = condição ? atribuição em caso verdadeira : atribuição em caso falso?
    char resultado = idade < 18 ? '<' : '>';
    printf ("O resultado com base em sua idade é: %c\n", resultado);

    /* Estrutura if else que seria utilizado sem operador ternário
    if (idade < 18) {
        printf("Você é considerado menor de idade!\n");
    } else {
        printf("Você é considerado maior de idade!\n");
    }
    */



    return 0;


}
