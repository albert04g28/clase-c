#include <stdio.h>

int main() {
    // Declarar una matriz 3x3
    int matriz[3][3];

    // Utilizar bucles for para llenar la matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Ingresa el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Mostrar la matriz
    printf("\nMatriz resultante:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
