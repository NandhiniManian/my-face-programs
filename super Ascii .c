#include <stdio.h>
int main()
{
  char s[100];
  int i,numbers[100]={0},isAscii,n;
  scanf("%d",&n);
  while(n--)
  {
  	scanf("%s",s);
  	i=0;
  	isAscii=1;
   		while(s[i]!='\0')
        {
        	if((s[i]>='a')&&(s[i]<='z'))
            {
            	numbers[s[i]-'a']++;
            }
  			s[i]='\0';
			i++;
        }
		for(i=0;i<26;i++)
		{
			if((numbers[i]>0) && (numbers[i]!=(i+1)))
            {
				isAscii=0;
            }
		numbers[i]=0;
		}
		if(isAscii)
        {
			printf("YES ");
        }
		else
        {
			printf("NO ");
        }
  }
  return 0;
}
