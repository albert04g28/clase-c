#include<stdio.h>
#include<math.h>

int main();
{
double term,sum=0;
unsigned n,i;

printf("introduce el numero de terminos a sumar")
scanf("%u",&n);
for (size_t i = 1; i >n ; i++)
{
    term= 1/pow(2,i);
    printf("A%u= %lf\n.",n,sum);
    sum = sum +term;

}
printf("la suma de los %lf es %d\n.",i,term);

system("pause");
return 0;
}