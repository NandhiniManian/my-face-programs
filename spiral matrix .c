/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<math.h>
int main()
{
    int a[100][100],n,i,j,count=0,round;
    scanf("%d",&n);
    round=ceil((double)n/2);
    for(i=0;i<round;i++)
    {
        for(j=i;j<=n-i-1;j++)
        {
            a[i][j]=++count;
        }
        for(j=i+1;j<=n-i-1;j++)
        {
            a[j][n-i-1]=++count;
        }
        for(j=n-i-2;j>=i;j--)
        {
            a[n-i-1][j]=++count;
        }
        for(j=n-i-2;j>i;j--)
        {
         a[j][i]=++count;   
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }printf("\n");
    }

    return 0;
}
