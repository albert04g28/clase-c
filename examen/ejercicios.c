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




//Diseñe una función C que dada una matriz real NxM , devuelva el número de columna
//de la matriz que tiene la máxima suma de sus elementos



/*
int max(int m[3][3]);
int main(){
int m[3][3],i,j;
for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Ingresa el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
printf("la columna que tiene mayor suma es la columna:%d\n",max(m));
system("pause");
return 0;
}

int max(int m[3][3]){
int colum1,colum2,colum3,max;
    colum1=m[0][0]+m[1][0]+m[2][0];
    colum2=m[0][1]+m[1][1]+m[2][1];
    colum3=m[0][2]+m[1][2]+m[2][2];

if (colum1>colum2)
{
    if (colum1>colum3)
    {
        max=1;
    }
    
}
else{
    if (colum2>colum3)
    {
        max=2;
    }
    else
    max=3;
}
return max;
}
*/





/*Escribe una función en C que verifique si una matriz cuadrada
2 dada es simétrica, es decir, si es igual a su transpuesta. */

/*int simetrica(int m[3][3]);

int main() {
    int N[3][3], i, j, sol = 1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Ingresa el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &N[i][j]);
        }
    }

    printf("%d", simetrica(N));

    if (simetrica(N) == 0) {
        printf("la matriz no es simétrica\n");
    } else {
        printf("es simétrica\n");
    }

    return 0;
}

int simetrica(int m[3][3]) {
    int i, j, sol = 1;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (m[i][j] != m[j][i]) {
                sol = 0;
            }
        }
    }
    return sol;
}*/


/*escribir una funcion para saber si una matriz es triangular 
superior o inferior de enteros con signo devolveran 1 si la m es triangular 
o 0 si no*/


/*
int triangular(int m[3][3]);
int main(){
int i,j,m[3][3],sol;
for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("Ingresa el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
;
printf("si es cero no es triangular si\n es uno si. El resultado es:%d\n",triangular(m));

system("pause");
return 0;
}

int triangular(int m[3][3]){
int l,u,sol;
l=m[0][1]+m[0][2]+m[1][2];
u=m[1][0]+m[2][0]+m[2][1];
if (l==0)
{
    sol=1;
}
else 
sol=0;
if (u==0)
{
    sol =1;
}
else{
    sol= 0;
}
return sol;
}
*/




/*escribir un programa que procese un fichero texto.txt y muestre por pantalla el numero de caracteres palabras y lineas del mismo*/
/*
int main() {
    FILE *in, *out;
    int l;

    in = fopen("texto.txt", "r");
    out = fopen("info.txt", "w");

    if (in == NULL || out == NULL) {
        printf("Error al abrir los archivos\n");
        return 1;
    }

    while (fscanf(in, "%d", &l) == 1) {
        fprintf(out, "%d", l);
    }

    fclose(in);
    fclose(out);

    system("pause");
    return 0;
}
*/


/*Desarrollar una función que acepte como primer parámetro una tabla de 4x4 enteros, y
devuelva como segundo parámetro una nueva tabla en la cual cada elemento de la
misma sea igual a la suma de todos los elementos de la tabla original sin incluir el
valor del propio elemento (1p).
1 1 1 1    39 39 39 39
2 2 2 2    38 38 38 38
3 3 3 3    37 37 37 37
4 4 4 4    36 36 36 36
El prototipo de la función se indica a continuación:
void vecitabla(int tablaent[5][5], int tablasal[4][4]);*/

/*
void vecitabla(int m[3][3],int n[3][3]);
int main(){
int m[3][3],n[3][3];
int sol;
for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Ingresa el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d",n[i][j]);
            
        }
    }
    printf("\n%d\n",n[0][0]);
system("pause");
return 0;
}


void vecitabla(int m[3][3],int n[3][3]){
for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            n[0][0]=m[i][j]-m[0][0];
            n[0][1]=m[i][j]-m[0][1];
            n[0][2]=m[i][j]-m[0][2];
            n[1][0]=m[i][j]-m[1][0];
            n[1][1]=m[i][j]-m[1][1];
            n[1][2]=m[i][j]-m[1][2];
            n[2][0]=m[i][j]-m[2][0];
            n[2][1]=m[i][j]-m[2][1];
            n[2][2]=m[i][j]-m[2][2];

        }
    }



}

*/


/*El siguiente programa escrito en lenguaje C calcule la suma de los n primeros números
naturales. La cantidad de números a sumar se indica a través del teclado*/



/*
int main(){
int nnumeros,i,sol=0;
printf("ingrese los n numeros naturales a calcular\n");
scanf("%d",&nnumeros);
for ( i = 0; i <= nnumeros; i++)
{
    sol+=i;
}

printf("esta es la sol:%d",sol);


system("pause");
return 0;
}
*/




/*Estructurarlo en dos módulos, de forma que se tenga un programa principal, el
cual solicite por teclado la cantidad de números naturales a sumar y
posteriormente imprima el resultado obtenido, y una función auxiliar, la cual
acepte como parámetro de entrada el número que el programa principal solicitó
por teclado y devuelva a éste el resultado de la suma. El prototipo de la función
auxiliar es el siguiente (1p):
unsigned long natusuma(unsigned n);*/

/*
unsigned long natusuma(unsigned n);
int main(){
int i;
unsigned n;
printf("ingrese los n numeros naturales a calcular\n");
scanf("%u",&n);

printf("esta es la sol:%lu\n",natusuma(n));



system("pause");
return 0;
}
unsigned long natusuma(unsigned n){

unsigned long sol=0,i;
    for ( i = 0; i<= n; i++)
    {
        sol+=i;
    }
    return sol;
}
*/


/*En una progresión geométrica, cada término se obtiene multiplicando el anterior por una
constante denominada razón. De este modo, los primeros términos de una progresión
geométrica cuyo primer término es 5 y la razón es 1.5 son los siguientes: 5, 7.5, 11.25,
16.875, 25.3125, 37.96875, ...
Escribir una función que acepte como parámetros el primer término de una progresión
geométrica, la razón de la misma y el número de términos a sumar (1p).
double geosuma(double t, double r, unsigned n);*/
/*
double geosuma(double t, double r, unsigned n);
int main(){
unsigned n;
double t,r;
printf("ingrese la razon de la sucesion\n",n);
scanf("%u",&n);

printf("introduce el primer termino de la sucecion\n");
scanf("%lf",&t);

printf("introduce el numero de terminos a calcular\n");
scanf("%lf",&r);

printf("la sucesion es: %lf",geosuma(t,r,n));



    system("pause");
    return 0;
}
double geosuma(double t, double r, unsigned n){
double sol=0;
for ( int i = 0; i <= r; i++)
{
    
    sol+=t*n;
    t=t+1*n;
}
return sol;

}
*/





/*Desarrollar un programa que a partir de un fichero de enteros con signo denominado
“temperaturas.txt” genere otro llamado “impares.txt” que sólo incluya los números
impares existentes en el fichero de entrada. Los enteros están separados entre ellos por un
espacio en blanco (2p).
Nota: La función cuyo prototipo se indica a continuación permite saber si se ha llegado al
final de un fichero con sólo abrirlo. Entonces la función devuelve uno y en caso contrario
cero. Dicho prototipo se encuentra en el fichero de encabezamiento "stdio.h".
int feof(FILE *);*/





/*Necesitamos diseñar tres funciones para realizar determinadas operaciones con cubos de
5x5x5 enteros. Las funciones son:
a) int cuenta(int m[5][5][5], int num). Devuelve como resultado
el número de veces que aparece el número num en el cubo de enteros m (0.5p).
b) void cambia(int m[5][5][5], int antinum, int nuevonum).
Sustituye todas las ocurrencias del número antinum en el cubo de enteros m (si
los hay) por el nuevo número nuevonum (0.5p).
c) void busca(int m[5][5][5], int num, unsigned pos[3]).
Localiza la primera ocurrencia del número num en el cubo m e indica su lugar en
el vector de posición (pos[0] ← página, pos[1] ← fila, pos[2] ←
columna). Las páginas, filas y columnas cuentan a partir de cero. Si no se
encuentra el número, los tres elementos del vector de posición valdrán -1 (1p)*/








