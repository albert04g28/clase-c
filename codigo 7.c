#include <stdio.h>

int main() {

  unsigned nota; /* No existen notas negativas */
 
  printf("Escribe una nota: ");
  scanf("%u", &nota);

  /* puts() imprime una cadena de caracteres */

  switch (nota) {
         case 0: puts("\nNi idea."); break;
         case 1:
         case 2:
         case 3: puts("\nCasi ni idea."); break;
         case 4: puts("\nCasi apruebas."); break;
         case 5: puts("\nPor los pelos.");
                 puts("Hay que aplicarse."); break;
         case 6: puts("\nBien aprobado."); break;
         case 7:
         case 8: puts("\nNotable."); break;
         case 9:
         case 10: puts("\nSobresaliente"); break;
         default: puts("\nNota no permitida.");
         }

system("pause");
return 0;
}