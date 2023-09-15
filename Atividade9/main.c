#include <stdio.h>

int main(void) {
  int numbers[20], max=0, min=0, dif=0;

  for (int i = 0; i < 20; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d", &numbers[i]);
    printf("O valor do %dº número é %d\n", i+1, numbers[i]);

    if (i == 0) {
      min = numbers[i];
    }

    if (numbers[i] > max){
      max = numbers[i];
      printf("Este é o novo máximo: %d\n", max);
    }

    if (numbers[i] < min){
      min = numbers[i];
      printf("Este é o novo mínimo: %d\n", min);
    }

  }

dif = max - min;

printf("Essa é a diferença entre o máximo e mínimo: %d", dif);

  return 0;
}