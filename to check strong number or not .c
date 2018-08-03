#include<stdio.h>
void main()
{
    int n,t,ft,sum=0,temp,i;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
     t=n%10;
     ft=1;
     for(i=1;i<=t;i++)
     {
         ft=ft*i;
     }
     sum=sum+ft;
     n=n/10;
    }
    if(sum==temp)
    {
        printf("yes");
    }
    else
    printf("no");
}
