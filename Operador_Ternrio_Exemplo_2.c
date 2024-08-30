#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    printf("=========================\n");
    printf("  Programa de descontos  \n");
    printf("=========================\n\n");

    float valorBruto;

    printf("Valor final da compra: ");
    scanf("%f", &valorBruto);

    //Operador tern�rio � �til para substituir um if else que atribui valor
    float valorFinal = valorBruto >= 100 ? valorFinal = valorBruto-(valorBruto*0.1) : valorBruto;
    printf("O valor final �: %.2f\n",valorFinal);

    return 0;
}

 //Obaserva��o da aula: Operador tern�rio � �til para substituir um if else que atribui valor

/* Estrutura condicional if else que seria utilizada sem operador tern�rio

       if (valorBruto>= 100) {
        valorFinal = valorBruto-(valorBruto*0.1);
    } else {
        valorFinal = valorBruto;
    }
*/
