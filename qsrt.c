#include<stdio.h>
void swapper(int * arr , int ind1 , int ind2)
{
    int temp;
    temp = arr[ind1] ;
    arr[ind1] = arr[ind2];
    arr[ind2]  =temp;
}
void q_srter(int  * arr , int st , int end)
{
    int pivot, find_small,find_large;
    if(st>=end) return;
    pivot = arr[end];
    find_small = end-1;
    find_large = st;
    while(find_large<=find_small)
   {
    while(find_large<= find_small && arr[find_large]< pivot )
        find_large++;
    while(find_small>=find_large && arr[find_small]> pivot)
        find_small--;
    if(find_large<find_small)
       swapper(arr,find_large,find_small);
   }
       swapper(arr,find_large,end);
   q_srter(arr,st,find_large-1);
   q_srter(arr,find_large+1,end);

}
int main()
{
  int arr[]={17,45,56,12,84,7,35,29,6,16,72,60,50};
  int size,ind;
  size = sizeof arr / sizeof arr[0];

 for(printf("\n"),ind = 0 ; ind< size ; printf("%2d ",arr[ind++]));
  q_srter(arr,0,size-1);
 for(printf("\n"),ind = 0 ; ind< size ; printf("%2d ",arr[ind++]));

  return 0;
}
