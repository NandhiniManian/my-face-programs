#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next_node;
    
}*start=NULL;
void main()
{
  int n,i;
  struct node *new_node,*current;
  scanf("%d",&n);
  i=1;
  while(i<=n)
  {
  new_node=(struct node*)malloc(sizeof(struct node));
  scanf("%d",&new_node->data);
  if(start==NULL)
  {
    start=new_node;
    current=new_node;
  }
  else
  {
     current->next_node=new_node;
     current=new_node;
 }
 i++;
  }
  current=start;
  i=1;
  while(i<=n)
  {
    if(current!=NULL)
    {
    printf("%d->",current->data);  
    current=current->next_node;
    }
        if(current==NULL)
        {
     printf("NULL\n");
        }
    i++;
}
current=start;
i=1;
while(i<n-1)
{
  current=current->next_node;
  i++;
}
current->next_node=NULL;
i=1;
current=start;
while(i<n)
  {
    if(current!=NULL)
    {
    printf("%d->",current->data);  
    current=current->next_node;
    }
    if(current==NULL)
    {
        printf("NULL");
    }
    i++;
}

} 
