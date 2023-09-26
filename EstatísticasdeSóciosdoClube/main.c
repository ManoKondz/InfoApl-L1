#include <stdio.h>

int main() {
    char sexo;
    int idade;
    int totalSocios = 0;
    int totalHomens = 0;
    int totalMulheres = 0;
    int somaIdadeHomens = 0;
    int somaIdadeMulheres = 0;

    printf("Digite o sexo (M ou F) e a idade dos sócios (ou qualquer tecla para encerrar):\n");

    while (1) {
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);

        if (sexo != 'M' && sexo != 'F') {
            break;
        }

        printf("Idade: ");
        scanf("%d", &idade);

        totalSocios++;

        if (sexo == 'M') {
            totalHomens++;
            somaIdadeHomens += idade;
        } else {
            totalMulheres++;
            somaIdadeMulheres += idade;
        }
    }

    if (totalHomens > 0) {
        float mediaIdadeHomens = (float)somaIdadeHomens / totalHomens;
        printf("Total de homens: %d\n", totalHomens);
        printf("Média de idade dos homens: %.2f\n", mediaIdadeHomens);
    } else {
        printf("Não houve homens.\n");
    }

    if (totalMulheres > 0) {
        float mediaIdadeMulheres = (float)somaIdadeMulheres / totalMulheres;
        printf("Total de mulheres: %d\n", totalMulheres);
        printf("Média de idade das mulheres: %.2f\n", mediaIdadeMulheres);
    } else {
        printf("Não houve mulheres.\n");
    }

    printf("Total de sócios: %d\n", totalSocios);

    return 0;
}
