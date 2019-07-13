#include<stdio.h>
int main()
{
 char str[]="()()(())";
 int sum=0,ind,pairs=0;
 for(ind= 0 ; str[ind] ; ind++)
 {
     if(str[ind]=='(')
        sum++;
     else if(str[ind]==')')
    {
        sum--;
        if(sum==-1)
             break;
        pairs++;
    }
 }
 if(sum==0)
    printf("%d",pairs);
 else
 printf("-1");
 return 0;
}
