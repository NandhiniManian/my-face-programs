#include<stdio.h>
void main()
{
  int a,b,i,count=0,j,k=0,l=0,m[10],n[10],d;
  scanf("%d%d",&a,&b);
  for(i=a;i<=b;i++)
  {
      count=0;
    for(j=1;j<=b;j++)
    {
        if(i%j==0)
        {
            count++;
        }
    }
    if(count%2==0)
    {
     m[k]=i;
     k++;
    }
    else
    {
    n[l]=i;
    l++;
    }
  }
  for(d=0;d<k;d++)
  {
    printf("%d\t",m[d]);  
  }
  printf("\n");
  for(d=0;d<l;d++)
  {
     printf("%d\t",n[d]); 
  }
    
}
