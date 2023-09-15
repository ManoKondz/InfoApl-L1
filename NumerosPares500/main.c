#include <stdio.h>
#define LIMITE 501

int main(void) {

  CalcPar();

  return 0;
}

int CalcPar() {

  int Par = 0;

  for(int Count = 1; Count < LIMITE; Count++){
    Par = Count % 2;
    if (Par == 0) {
      printf("O número %d é par\n", Count);
    } else {
      printf("O número %d é impar\n", Count);
    }
  }

}