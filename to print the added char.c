#include<stdio.h>
#include<stdlib.h>
void main()
{
    char a[100];
    int i,t,m=0,j,count;
    scanf("%[^\t]s",a);
    for(i=0;a[i]!='\0';i++)
    {
   if(a[i]==',')
      {
       count++;
       if(count%2==1)
       {
           int c=0;
           for(j=i+1;a[j]!=',';j++)
           {
               c++;
           }
           j=j-c;
           char *at=a+j;
           t=atoi(at);
           m=m+t;
           
       }
    }
    }
    printf("%d",m);
}
