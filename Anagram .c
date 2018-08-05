#include <stdio.h>
#include <string.h>
int Anagram(char str1[], char str2[]);
int main()
{
   		char str1[20];
   		char str2[20];
   		scanf("%s%s",str1,str2);
   		if (Anagram(str1, str2))
       		printf("Anagram");
   		else
    	   	printf("Not an Anagram");
   		return 0;
}
int Anagram(char str1[], char str2[])
{
 int l1,l2,i,j,count=0,s=0;
 l1=strlen(str1);
 l2=strlen(str2);
 if(l1==l2)
 {
 for(i=0;i<l1;i++)
 {
     for(j=0;j<l2;j++)
     {
     if(str1[i]==str2[j])
     {
         count++;
     }
     }
   s=s+count;
   count=0;
 }
 if(s==l1)
 {
     return 1;
 }
 else
 {
     return 0;
 }
 }
 else
 return 0;
}
  
