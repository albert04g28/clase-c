#include<stdio.h>
#include<stdlib.h>

void calculadora(int,char,int,int*);

int main(){

FILE*in,*out;
int a,b,r;
char op;
in =fopen("operaciones.txt","r");
out=fopen("resultados.txt","w");
while (feof(in) == 0)
{
    fscanf(in,"%d %c %d",&a,&op,&b);
    calculadora(a,op,b,&r);
    fprintf(out,"%d %c %d = %d\n",a,op,b,r);
    printf("%d %c %d = %d\n",a,op,b,r);

}

fclose(in);
fclose(out);


system("pause");
return  0;

}




void calculadora(int a,char op,int b,int*r){

switch (op)
{
case '+' :
*r=a+b;
    
    break;
case '-':
*r=a-b;
    break;
case '*':
*r=a*b;
    break;
case '/':
*r=a/b;
    break;
default:
printf("operacion no valida\n");
    break;
}
}




/*if (in==NULL)
{
    printf("Error, problema con el fichero\n");
}
else{
out=fopen("resultados.txt","w");
while (feof(in) == 0)
{
    fscanf(in,"$d %c %d",&a,&op,&b);
    calculadora(a,op,b,&r);
    fprintf(out,"%d %c %d = %d\n",a,op,b,r);
    printf("%d %c %d = %d\n",a,op,b,r);

}*/