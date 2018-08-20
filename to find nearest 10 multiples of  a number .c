#include<stdio.h>
int main()
{
  int n,a,res;
  scanf("%d",&n);
  a=n%10;
  if(a>5)
  {
  res=(n-a)+10;
  }
  else
  {
  res=n-a;
  }
  printf("%d",res);
  return 0;
}
