#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
  int year;
  year=atoi(argv[1]);
  if(year%4==0)
  {
    if(year%400==0&&year%100==0)
    {
        printf("%d is leap year",year);
    }
    else
    {
        printf("%d is not leap year",year);
    }
  }
  else
  {
      printf("%d is not a not a leap year",year);
  }
}
