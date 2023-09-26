#include <stdio.h>

int main() {
    int numero, digito, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        digito = numero % 10;
        soma += digito;
        numero /= 10;
    }

    printf("O somatorio dos digitos do numero e: %d\n", soma);

    return 0;
}
