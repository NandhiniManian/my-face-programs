#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
  int n,i,count=0;
  n=atoi(argv[1]);
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    {
       count++; 
    }
  }
  if(count==2)
  {
      printf("%d is prime",n);
  }
  else
  {
      printf("%d is not a prime",n);
  }
}
