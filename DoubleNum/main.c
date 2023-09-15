#include <stdio.h>

int main(void) {
    int num1 = 0, sum1 = 0;
    printf("Calcular dobro do número\n");
    printf("Entre com um número: ");
    scanf("%d", &num1);
    sum1 = num1*2;
    printf("O dobro do número %d é %d", num1, sum1);


    return 0;
}