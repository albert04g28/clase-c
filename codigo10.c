#include<stdio.h>
#include<math.h>

int main(){
double term,sum=0;
unsigned n,i;

printf("introduce el numero de terminos a sumar");
scanf("%u",&n);
for ( i = 1; i >n ; i++)
{
    term= 1/pow(2,i);
    printf("A%u= %lf\n.",i,term);
    sum = sum +term;

}
printf("la suma de los %u es %lf\n.",n,sum);

system("pause");
return 0;
}