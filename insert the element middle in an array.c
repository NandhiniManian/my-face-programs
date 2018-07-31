#include<stdio.h>
void main()
{
    int t,n,a[100],j,m;
    scanf("%d%d",&t,&n);
    scanf("%d",&t,&m);
        for(j=0;j<n;j++)
        {
         scanf("%d",&a[j]);
        }
        
        for(j=n;j>=t;j--)
        {
           a[j]=a[j-1];
        }
        a[t]=m;
        for(j=0;j<=n;j++)
        {
        printf("%d",a[j]);
        }
    
     
}
