#include <stdio.h>

int main(){
int x;
printf("Escribe un entro:\n");
scanf("%d",&x);
putchar('\n');

if (x != 0) {
    if (x>0)
        printf("El entero es positivo\n");
    
    else 
        printf("El numero entero es negativo\n");

    
}
else
    printf("El entero es igual a cero\n");


system("pause");
return 0;







}