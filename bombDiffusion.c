#include<stdio.h>
typedef struct
{
int size;
int *message;
} boundedArray;

boundedArray * findBombdiffusioncode(int noe, int key, int *mess);
void printBoundedArray(boundedArray *);

int main()
{
int arr[] = {12,34,9,11,2,4,5,8,9,11,10,15};
//int arr[] = {4,2,-5,11};
int size, key = 3;
boundedArray * res = NULL;
size = sizeof(arr) / sizeof(int);
res = findBombdiffusioncode(size, key, arr);
printBoundedArray(res);
return 0;
}

boundedArray * findBombdiffusioncode(int noe, int key, int *mess)
{












}











void printBoundedArray(boundedArray * res)
{
    int prin_index;
    for(prin_index = 0; prin_index < res->size; prin_index++)
           printf("%d ", res->message[prin_index]);
}
