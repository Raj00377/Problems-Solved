#include<stdio.h>
int main()
{
 int num=10;
 int mask=1,count=0;
 while(mask<=num)
 {
  if((num & mask) == mask)
    count++;
  mask=mask<<1;
 }
 printf("%d",count);
 return 0;
}
