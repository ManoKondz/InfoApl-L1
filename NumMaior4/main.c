#include <stdio.h>

int main() {
    int num1, num2, num3, num4;

    printf("Digite quatro números: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    int maior = num1;
    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }
    if (num4 > maior) {
        maior = num4;
    }

    int menor = num1;
    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }
    if (num4 < menor) {
        menor = num4;
    }

    int diferenca = maior - menor;
    printf("A diferença entre o maior e o menor valor é: %d\n", diferenca);

    return 0;
}
