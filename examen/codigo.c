#include<stdio.h>
int main(){
/*unsigned long fact =1;
unsigned n;
int i;


printf("introduce el numero a calcular el factorial");
scanf("%u",&n);
for ( i = 1; i <= n; i++)
{
fact *=i;
}




printf("\nEl factorial de %u es %lu.",n, fact);*/



unsigned n;
double term;
for (  n= 1; n <= 10; n++)
{
    term = ((double) n)/(2*n+1);
    printf("\nTermino %u: %lf.",n,term);
}


putchar('\n');











system ("pause");
return 0;
}






