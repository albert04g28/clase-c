#include<stdio.h>


int main(){
/*int x,sum,i;
sum = 0;
printf("introduce un entero");
scanf("%d",&x);*/
/*for(i=x+1;i <=x+10;i++)
{
    sum = sum + i;
}

printf("%d",sum);*/

/*
i=x+1;
while(i<=x+100)
{
    sum=sum+1;
    i++;
}


printf("%d",sum);
*/
/*
do
{
    sum= sum+1;
    printf("\ni:%d --> sum: %d\n",i,sum);
    i++;

} while (i<=x+100);

printf("%d",sum);
*/
do
{
double f,c,p;
printf("introduce los grados farengei");
scanf("%lf",&f);
c=5/9.0*(f-32);
printf("%.2lf %cF = %.2lf %cC\n",f,167,c,167);
p=f;
}
while(p !=999);




system("pause");
return 0;

}




