#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
unsigned h,m,s;
printf("introduce una hora en formato h:m:s\n");
scanf("%u:%u:%u",&h,&m,&s);
printf("%u:%u:%u\n",h,m,s);

s++;
if (s==60)
{
   s=0;
   m++;
   if (m==60)
   {
      m=0;
      h++;
   }
   if (h==24)
   {
      h=0;
   }
   

}
printf("%u:%u:%u",h,m,s);


 

system("pause");
return 0;
}




