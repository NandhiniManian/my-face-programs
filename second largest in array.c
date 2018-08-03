#include<stdio.h>
void main()
{
    int n,i,a[100],m1,m2,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    m1=a[0];
    m2=a[1];
    for(i=0;i<n;i++)
    {
        if(m1<a[i]&&m2<a[i])
        {
          t=m1;  
          m1=a[i];
          m2=t;
        }
    }
        printf("%d",m2);
}
