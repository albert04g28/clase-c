#include <stdio.h>

#define DOCE 12

int main() {

  int huevos=72;
  int docenas;

  docenas = huevos/DOCE;


  printf("\nHay %d docenas en %d huevos.\n", docenas, huevos);
 
  system("pause");
  return 0;
}