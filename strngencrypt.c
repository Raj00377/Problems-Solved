#include<stdio.h>
int main()
{
 //char str[]="yyyyyyyyyyyummmy zebra";
 char str[]="zyxwvutsrqponmlkjihgfedcba";
 int ind,jump=0,len;
 for(len = 0 ; str[len] ; len++);

 for(ind=len -1 ; ind>=0 ; ind--,jump++)
 {
     if(str[ind]==' ')
        jump = -1;
     else
       str[ind] = ((str[ind]+jump-97)%26) + 97;
 }
 printf("%s",str);
 return 0;
}
