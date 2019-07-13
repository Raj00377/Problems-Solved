#include<stdio.h>
int main()
{
   long long int num=1000000007,till,factor;

   if(num%2==0&&num!=2)
   {
       printf("Composite");
   }
   else
   {
       till = sqrt(num);
       for(factor = 3; factor<=till ; factor+=2)
         if(num % factor == 0)
             break;
    if(factor > till)
          printf("Prime");
    else
        printf("Not");
   }
   return 0;
}
