#include <stdio.h>

int main() {
    int num1, num2, num3;

    
    printf("Ingresa el primer entero: ");
    scanf("%d", &num1);

    printf("Ingresa el segundo entero: ");
    scanf("%d", &num2);

    printf("Ingresa el tercer entero: ");
    scanf("%d", &num3);

    
    int mayor, menor;

    
    if (num1 >= num2 && num1 >= num3) {
        mayor = num1;
    } else 
        if (num2 >= num1 && num2 >= num3) {
        mayor = num2;
    } else {
        mayor = num3;
    }





    if (num1 <= num2 && num1 <= num3) {
        menor = num1;
    } else 
    if (num2 <= num1 && num2 <= num3) {
        menor = num2;
    } else {
        menor = num3;
    }

    
    printf("El mayor entero es: %d\n", mayor);
    printf("El menor entero es: %d\n", menor);

    system("pause");
    return 0;
}
