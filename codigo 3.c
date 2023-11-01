#include <stdio.h>

int main() {

  int x, y;

  printf("Escribe un entero: ");
  scanf("%d", &x);

  if (x >= 0)
     y = x;
  else
     y = -x;

  printf("\nValor absoluto: %d.\n", y);
 
  system("pause");
  return 0;
}