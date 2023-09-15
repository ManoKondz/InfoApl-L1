#include <stdio.h>

int main() {
    int numeros[10];

    printf("Digite 10 números: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    int maior = numeros[0];
    for (int i = 1; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("O maior valor lido é: %d\n", maior);

    return 0;
}
