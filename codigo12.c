#include<stdlib.h>
#include<stdio.h>
int max(int,int);
int min(int,int);

void max2(int,int,int*);
void min2(int,int,int*);
int absoluto(int);

int main(){
int a,b,maximo,minimo;
printf("introduce dos valores enteros\n");
scanf("%d %d",&a,&b);
maximo=max(a,b);
printf("maximo");
printf("El maximo de %d y %d es %d\n",a,b,max(a,b));
printf("El min de %d y %d es %d\n",a,b,min(a,b));
a=absoluto(a);
b=absoluto(b);
printf("%d.%d",a,b);
system("pause");
return 0;
}



int max(int a,int b){
    int r;
    if (a>b)
    r =a; 
    else
    r = b;
    return r;
}
int min(int a,int b){
    int r;
    if(a<b)
    r=a;
    else
    r=b;
    return r;

}

void max2(int a,int b,int*c){

    if (a>b)
    *c =a; 
    else
    *c = b;


}
void min2(int a,int b,int*c){
    if (a<b)
    *c=a;
    else
    *c =b;
    
}



int absoluto(int x){
    if (x< 0)
    {
        x=-x;
    }
    
    return x;
}
