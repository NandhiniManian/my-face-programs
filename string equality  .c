#include<stdio.h>
#include<string.h>

int is_equal(char str1[100], char str2[100], int p1, int p2);

int main()
{
  char str1[100], str2[100];
  scanf("%s %s", str1, str2);
  
  int m = strlen(str1);
  int n = strlen(str2);
  printf("%d", is_equal(str1, str2, 0, 0));
  return 0;
}

int is_equal(char str1[100], char str2[100], int p1, int p2)
{
  int result = 0;
  if( str1[p1] == '\0' ||  str1[p2] == '\0')
  {
    return 1;
  }
  if(str1[p1] == str2[p2])
  {
    result = is_equal(str1, str2, p1+1, p2+1);
  }
  else
  {
    result = 0;
  }
  return result;
}
