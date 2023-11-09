#include <stdio.h>
 int main(){

unsigned x,y;
printf("introduce dos numeros enteros");
scanf("%u %u",&x,&y);

while (y!=x){
    printf("MCD(%u,%u)=",x,y);
    if (x>y)
    {
        x=x-y;
    }
    else
    {
        y = y-x;
    }
    printf("MCD(%u,%u);\n",x,y);
}      


printf("MCD(%u,%u)=%u \n",x,y);


system("pause");
return 0;


}