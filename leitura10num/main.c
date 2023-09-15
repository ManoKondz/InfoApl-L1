#include <stdio.h>

int main() {
    int numbers[10], max = 0;

    // Leitura dos 10 números
    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numbers[i]);

        // Verifica se o número lido é maior que o atual máximo
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("O maior valor lido é: %d\n", max);

    return 0;
}
