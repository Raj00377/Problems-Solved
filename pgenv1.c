#include<stdio.h>
#include<math.h>
#define SIZE 10000000
int main()
{
   long long int num=1000000007,till,factor,primeCtr=0;
   for(num =2 ; num<=SIZE; num++)
   {
     if(num%2==1||num==2)
    {
        if(num%6==1||num%6==5 || num==2 ||num==3)
       {
           till = sqrt(num);
            for(factor = 3; factor<=till ; factor+=2)
                if(num % factor == 0)
                    break;
            if(factor > till)
                primeCtr++;
       }
    }
   }
   printf("%lld",primeCtr);
   return 0;
}
