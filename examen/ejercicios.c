#include<stdlib.h>
#include<stdio.h>
#include<math.h>
/*int guay(int);

int guay(int n){
int nu=1;
if (n==0+nu++)
{
    return(printf("es guay\n"));
}
else{
return(printf("no es guay\n"));
}
}

int main(){
int n,r;
printf("introduce un numero para saber si es guay\n");
scanf("%d",&n);
guay(n);

system("pause");
return 0;
}*/




/*Diseña una función C que dada una matriz de enteros NxM, calcule la suma de sus
columnas*/




/*int main(){

int m[3][3];
for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Ingresa el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    
int suma1,suma2,suma3,sumat,j;
suma1=m[0][0]+m[0][1]+m[0][2];
suma2=m[1][0]+m[1][1]+m[1][2];
suma3=m[2][0]+m[2][1]+m[2][2];
sumat=suma1+suma2+suma3;
printf("%d\n",sumat);


system("pause");
return 0;
}*/


/*Diseña una función c que calcule el producto escalar de dos vectores. Realiza un
programa que lea del teclado dos vectores de 5 números reales y posteriormente use la
función y muestre por pantalla su producto escalar.*/

/*int p(int v1[], int v2[]);

int main() {
    int v1[5], v2[5], i;

    // Llenar el primer vector v1
    for (i = 0; i < 5; i++) {
        printf("Ingresa el valor para la posición [%d] de v1: ", i);
        scanf("%d", &v1[i]);
    }

    // Llenar el segundo vector v2
    for (i = 0; i < 5; i++) {
        printf("Ingresa el valor para la posición [%d] de v2: ", i);
        scanf("%d", &v2[i]);
    }

    // Imprimir el resultado del producto punto
    printf("El resultado del producto punto es: %d\n", p(v1, v2));

    // Nota: No es necesario imprimir la función p() tres veces
    // printf("%d", p(v1, v2));
    // printf(p(v1, v2));
    // p(v1, v2);

    return 0;
}

int p(int v1[5], int v2[5]) {
    int producto = 0;

    // Utilizar un solo bucle para calcular el producto punto
    for (int i = 0; i < 5; i++) {
        producto += v1[i] * v2[i];
    }

    // No necesitas estas líneas, ya que ya has calculado el producto punto en el bucle
    // return producto;
    // return printf("%d", producto);
return producto;
}*/


/*Dado un vector de N enteros y un número, diseña una función C que devuelva las veces
que está contenido dicho número en el vector. Codifica un programa C que use dicha función*/
/*int funcion(int v[],int n);
int main (){

int v[6],n,i;
printf("cual es tu numero\n");
scanf("%d",&n);

printf("introduce tu vector ejemplo");
for ( i = 0; i < 7; i++)
{
    printf("Ingresa el valor para la posición [%d]: ", i);
     scanf("%d", &v[i]);
}

printf("%d\n",funcion(v,n));



system("pause");
return 0;
}

int funcion(int v[6],int n){
int i,sol=0;
for ( i = 0; i < 7; i++)
{
    if (v[i]==n)
    {
        sol=sol+1;
    }
    
}
return sol;


}
*/




/*Diseñe una función C que dada una matriz real NxM , devuelva el número de columna
de la matriz que tiene la máxima suma de sus elementos*/

