#include <stdio.h>
void printCombinationsWrapper(int a[], int n,int selected[],int visitedcount);
#define SIZE 10
int selected[10]={};
int main() 
{
    int arr[SIZE], n, i,visitedcount=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
      scanf("%d", &arr[i]);
    }
    printCombinationsWrapper(arr, n,selected,visitedcount);
    return 0;
}

void printCombinationsWrapper(int arr[], int n,int selected[],int visitedcount)
{
    int i;
  if(visitedcount==n)
  {
      for(i=0;i<n;i++)
      {
          if(selected[i]==1)
          {
          printf("%d,",arr[i]);   
          }
      }
      printf("\n");
      return;
  }
  selected[visitedcount]=1;
  printCombinationsWrapper(arr,n,selected,visitedcount+1);
  selected[visitedcount]=0;
  printCombinationsWrapper(arr,n,selected,visitedcount+1);
}
