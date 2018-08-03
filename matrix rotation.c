#include <stdio.h>

int main()
{
  int a[10][10],i,j,r,c;
  scanf("%d%d",&r,&c);
  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
          scanf("%d",&a[i][j]);
      }
      printf("\n");
  }
  for(j=0;j<c;j++)
  {
      for(i=r-1;i>=0;i--)
      {
          printf("%d ",a[i][j]);
      }
      printf("\n");
  }

    return 0;
}
