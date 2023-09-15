#include <stdio.h>

int main(void) {
    int num = 0, res = 0;

    printf("Cálculo dobro do número\n");
    printf("Entre com o número desejado:");
    scanf("%d", &num);
    res = 2*num;
    printf("O resultado é: %d", res);

    return 0;

}