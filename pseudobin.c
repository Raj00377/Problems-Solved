#include<stdio.h>
int main()
{
   int num=3052,sum,place,digit,safe;
  while(num)
  {
   place=1;
   sum=0;
   safe=num;
   while(num)
   {
       digit = num % 10 ;
       if(digit)
         sum = sum + 1 * place;
       else
         sum = sum + 0 * place;
       place= place*10;
       num =num /10;
   }
   num=safe;
   num = num - sum;
   printf("%0*d\n",4,sum);
  }

   return 0;
}
