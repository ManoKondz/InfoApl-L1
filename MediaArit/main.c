#include <stdio.h>

int main(void) {

  float num1 = 0;
  float num2 = 0;
  float res = 0; // Só recebe float se Entrada 1 e Entrada 2(Ou mais se tiverem mais) forem float.
  printf("Entre com o número 1 e o número 2\n");
  scanf("%f %f" , &num1, &num2);
  res = (num1 + num2) / 2;
  printf("O resultado é: %f", res);

  return 0;
}