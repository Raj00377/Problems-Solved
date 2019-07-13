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
 long long  num=263957148,digit;
 //char marker[10]={0};
  long int ans=0;
 while(num)
 {
     digit = num % 10;
     ans = ans + myPower(10,digit);
      num = num /10;
 }


 if(ans== 1111111110)
    printf("yes");
 else
   printf("no");

 return 0;
}
