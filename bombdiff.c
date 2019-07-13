#include<stdio.h>
int main()
{
 int arr[]={10,4,6,3,7,-2,5,8,2,1};
 int res[10];
 int key=-4,size=10,win_sum=0,ind,work_ind;
 if(key>0)
 {
  for(ind= 1 ; ind<= key ; ind++)
     win_sum = win_sum + arr[ind];
  for(work_ind= 0;work_ind<size; work_ind++ )
    {
      res[work_ind] =win_sum;
      win_sum = win_sum - arr[work_ind+1] + arr[(work_ind+key+1)%size];
    }
 }
 else
 {
  for(ind= size-1 ; ind >= size+key ; ind--)
     win_sum = win_sum + arr[ind];
  for(work_ind= 0;work_ind<size; work_ind++ )
   {
     res[work_ind]= win_sum ;
     win_sum = win_sum + arr[work_ind]
          - arr[(work_ind+key+size)%size];
   }
 }

 for(ind= 0 ;ind < size; ind++)
    printf("%d ",res[ind]);
    return 0;
}
