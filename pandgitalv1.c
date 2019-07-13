#include<stdio.h>
int main()
{
 long long  num=263957148;
 char marker[10]={0},digit;
 while(num)
 {

     digit = num % 10;
     if(marker[digit]==0)
       marker[digit]=1;
      else
        break;
      num = num /10;
 }
 if(num==0)
    printf("yes");
 else
   printf("no");

 return 0;
}
