#include <stdio.h>
#include <stdlib.h>

void print_array(int arr[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	
	printf("\n");
}

void compute_product(int a[], int product[], int n)
{
 int i,j,sum;
 for(i=0;i<n;i++)
 {
product[i]=1;
     for(j=0;j<n;j++)
     {
  if(j!=i)
  {
       product[i]=product[i]*a[j];
  }
 
     }
 }
  return;
}

int main() {
	int a[100], product[100];
	int i, n;
	
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	compute_product(a, product, n);
	
	print_array(product, n);
	return 0;
}
