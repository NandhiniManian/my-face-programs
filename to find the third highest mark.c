#include<stdio.h>

int main()
{
    int a[100],n,i;
    int h1,h2,h3;
  	scanf("%d",&n);
  	for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        if(a[i] > h1)
        {
            h3 = h2; h2 = h1; h1 = a[i];
        }
        else if (a[i] > h2)
        {
            h3 = h2; h2 = a[i];
        }
        else if  (a[i] > h3)
        {
            h3 = a[i];
        }
    }
    printf("%d",h3);
    return 0;
}
