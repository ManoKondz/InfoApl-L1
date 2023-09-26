#include <stdio.h>

int main() {
    int populacaoA = 50000;
    double taxaCrescimentoA = 0.03;
    int populacaoB = 200000;
    double taxaCrescimentoB = 0.015;
    int anos = 0;

    while (populacaoA <= populacaoB) {
        populacaoA += populacaoA * taxaCrescimentoA;
        populacaoB += populacaoB * taxaCrescimentoB;
        anos++;
    }

    printf("Levará %d anos para a população de A ultrapassar a população de B.\n", anos);

    return 0;
}
