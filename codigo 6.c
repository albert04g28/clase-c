#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){

double a,b,c,dis,sol;
printf("Dime el valor de los discriminantes");
scanf("%lf %lf %lf",&a,&b,&c);
dis = b*b -4*a*c;

if (dis == 0)
{
    printf("La ecuacion .2%lfx^2+.2%lfx+.2%lf tiene una sol\n",a,b,c);
    printf("la solucion es: .2%lf\n",-b/2*a);

}
else
{
    if (dis > 0)
    {    printf("La ecuacion .2%lfx^2+.2%lfx+.2%lf tiene dos sol\n",a,b,c);
        printf("la solucion 1 es: .2%lf\n",(-b+sqrt(dis))/2*a);
        printf("la solucion 2 es: .2%lf\n",(-b-sqrt(dis))/2*a);
    }
    else
    {
        printf("No tiene ninguna sol\n");    
    }
    
}









system("pause");
return 0;
}