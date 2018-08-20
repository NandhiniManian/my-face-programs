#include<stdio.h>
void main()
{
int n,a[100],sum=0,i,k=0,b[100],j;
scanf("%d",&n);
while(n>0)
{
	a[i]=n%10;
	i++;
	n=n/10;
	k++;
}
j=0;
for(i=k-1;i>=0;i--)
{
	b[j]=a[i];
	j++;
}
sum=0;
for(i=0;i<k;i++)
{
	if(i%2==0)
	{
		sum=sum+b[i];
	}
}
printf("%d",sum);
}
