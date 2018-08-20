#include<stdio.h>
#include<string.h>
void main()
{
	int i,b[100],l=0,sum=0,K=0;
	char s[100];
	scanf("%[^\n]s",s);
	l=strlen(s);
	//printf("%d",l);
	for(i=0;s[i]!='\0';i++)
	{
		switch(s[i])
		{
			case 'I':b[K]=1;K++;break;
		    case 'V':b[K]=5;K++;break;
		    case 'X':b[K]=10;K++;break;
		    case 'L':b[K]=50;K++;break;
		    case 'C':b[K]=100;K++;break;
		    case 'D':b[K]=500;K++;break;
		    case 'M':b[K]=1000;K++;break;
		}
	}
	/*for(i=0;i<K;i++)
	{
	    printf("%d ",b[i]);
	}*/
    	sum=b[l-1];
	 for(i=l-1;i>0;i--)
	 {
	 	if(b[i-1]>=b[i])
    	{
    		sum=sum+b[i-1];	
    	}
		else
		{
			sum=sum-b[i-1];
		}
	 }
	 printf("%d",sum);
}
