#include<stdio.h>
int myPower(int num , int times)
{
    int ctr, pow=1;
    for(ctr=1; ctr<= times ; ctr++)
        pow = pow*num;
    return pow;
}
int main()
{
 long long  num=123456789,digit,mask;
 //char marker[10]={0};
  short int ans=0;
 while(num)
 {
     digit = num % 10;
     mask = 1<<digit;
     if((ans&mask) ==0)
     //ans = ans + myPower(10,digit);
     ans = ans | mask;
      else
        break;
      num = num /10;
 }

 if(ans==1022 )
    printf("yes");
 else
   printf("no");

 return 0;
}
