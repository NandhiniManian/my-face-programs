
1.SWAP USING MACROS
#include <stdio.h>
#define swap a=a+b ;b=a-b ;a=a-b;
int main()
{
 int a,b;
 scanf("%d\t%d",&a,&b);
 swap;
 printf("%d\t%d",a,b);

    return 0;
}
2.print =1221 and  a,b,c three variables and 0,1,2 only want to use  and add and sub only
#include<stdio.h>
void main()
{
    int a=0,b=1,c=2,d;
    d=a++||b++||c++;
    printf("%d%d%d%d",a,b,c,d);
}
3.Print”vsb”:
#include <stdio.h>
int main()
{

    printf("\"vsb\"");

    return 0;
}
