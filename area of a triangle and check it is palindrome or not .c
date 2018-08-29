#include <stdio.h>
#include <math.h>
// Main function
int main()
{
  int a,b,c,p,area,d,x,r,rev=0;
  scanf("%d %d %d",&a,&b,&c);
  p=(a+b+c)/2;
  d=p*(p-a)*(p-b)*(p-c);
  area=sqrt(d);
  x=area;
  printf("Area of a triangle = %d\n",area);
  while(x!=0)
  {
    r=x%10;
    rev=rev*10+r;
    x=x/10;
  }
  if(rev==area)
    printf("Area is palindrome");
  else
    printf("Area is not palindrome");
   return 0;
}
