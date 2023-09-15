#include <stdio.h>

int main(void) {
  int div = 0, count = 0;

  for (count; count < 51; count++) {
    div = (count%2);

    if (div != 0) {
      printf("O número %d é ímpar\n", count);
    } else {
      printf("O número %d é par\n", count);
    }

  }

  return 0;
}