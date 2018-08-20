#include<stdio.h>
void main()
{
	int a,b,i,j,count=0,count1=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count%2==0)
		{}
		else
		{
			count1++;
		}
	}
	printf("%d",count1);
}
