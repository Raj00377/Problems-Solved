#include<stdio.h>
#define SIZE 10000000
int main()
{
   long long int num=1000000007,till,factor,primeCtr=0,ind;
   long long int * primes=NULL;
   primes=(long long int *)calloc((SIZE/2),sizeof(long long int));
    primes[0]=2;
    primeCtr=1;
   for(num =2 ; num<=SIZE; num++)
   {
     if(num%2==1||num==2)
    {
        if(num%6==1||num%6==5 || num==2 ||num==3)
       {
           till = sqrt(num);
            //for(factor = 3; factor<=till ; factor+=2)
              for(ind = 0; primes[ind]<=till ; ind++)
                 if( num % primes[ind] ==0 )
               // if(num % factor == 0)
                    break;
            //if(factor > till)
             if(primes[ind]>till)
              primes[primeCtr++]=num;
       }
    }
   }
   printf("%lld",primeCtr);
   return 0;
}
