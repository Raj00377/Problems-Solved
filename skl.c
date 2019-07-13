#include<stdio.h>
int main()
{
  void * arr=NULL;
  void * mask=NULL;
  arr=(void *)calloc(20,1);
  mask =(void *)calloc(20,1);
  mask = 1;
  mask= mask<<2;
  arr=0;
  arr=arr|mask;
    if((arr&mask)>1)
        print("true");
   return 0;
}
