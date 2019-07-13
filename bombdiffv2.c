#include<stdio.h>
int main()
{
 int arr[]={10,4,6,3,7,-2,5,8,2,1};
 int arr_sum[10];
 int key=4,size=10,win_sum=0,ind,work_ind;

 for(ind =0 ; ind < size ;ind++)
 {
     sum = sum + arr[ind];
     arr_sum[ind]=sum;
 }
  // 0 1  2  3  4  5  6  7  8  9
  //10 14 20 23 30 28 33 41 43 44



 for(ind= 0 ;ind < size; ind++)
    printf("%d ",res[ind]);
 return 0;
}
