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
    // V�rivel = condi��o ? atribui��o em caso verdadeira : atribui��o em caso falso?
    char resultado = idade < 18 ? '<' : '>';
    printf ("O resultado com base em sua idade �: %c\n", resultado);

    /* Estrutura if else que seria utilizado sem operador tern�rio
    if (idade < 18) {
        printf("Voc� � considerado menor de idade!\n");
    } else {
        printf("Voc� � considerado maior de idade!\n");
    }
    */



    return 0;


}
