#include <stdio.h>
int mount(int);
int main()
{
   int n,a[100],i;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("%d",mount(n));

    return 0;
}
int mount(int n)
{
    int s,i;
    if(n==0||n==1||n==2)
    {
        return 0;
    }
    else
    {
        if(n==3)
        {
            s=n-1;
            return s;
        }
        s=2;
        for(i=3;i<=n;i++)
    {
      s=s*2+2;  
    }
    return s;
    }

    
}
