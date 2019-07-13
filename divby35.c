#include<stdio.h>
int main()
{
  long long int range=3000000000,sum=0,num;
  for(num=1; num<=range; num++)
  {
   if(num%3==0 || num%5==0)
      sum = sum + num;
  }
  printf("%lld",sum);
 return 0;
}
