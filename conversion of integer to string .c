#include <stdio.h>

void convertIntegerToString(int n, char str[]);

int main() {
    int n;
    char str[100];
    
    scanf("%d",&n);

    convertIntegerToString(n, str);
    
    printf("%s",str);
	return 0;
}

void convertIntegerToString(int n, char str[]) {
  str[n];
 sprintf(str,"%d",n);
}
