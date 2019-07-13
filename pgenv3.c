#include<stdio.h>
#define SIZE 100000000
int main()
{
   long long int num,till,primeCtr=0,ind,multiplier;
   long long int * primes=NULL;
    primes=(long long int *)calloc(SIZE,sizeof(long long int));
   primes[0]=primes[1]=-1;
   till = sqrt(SIZE);
  for(num=2 ; num <= till ; num++)
  {
   if(primes[num] == 0)
   {
       for(multiplier= 2 ; multiplier*num < SIZE; multiplier++)
         primes[multiplier*num]=1;
   }
  }
  for(ind=0 ; ind<SIZE; ind++)
    if(primes[ind]==0)
           primeCtr++;
    printf("%lld",primeCtr);
  free(primes);
   return 0;
}
