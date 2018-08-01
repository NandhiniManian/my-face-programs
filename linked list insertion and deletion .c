#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next_node;
    
}*start=NULL;
void main()
{
  int n,i,c,choice;
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
choice=1;
while(choice)
{
  printf("1.Insertion\n2.Deletion\n");
  printf("Enter your choice:\n");
  scanf("%d",&c);
  switch(c)
  {
      case 1:
             new_node=(struct node*)malloc(sizeof(struct node));
             scanf("%d",&new_node->data);
             new_node->next_node=NULL;
             current=start;
             i=1;
             while(i<n)
             {
                 current=current->next_node;
                 i++;
             }
             if((current->next_node)==NULL)
             {
              current->next_node=new_node;
             }
             current=start;
             i=1;
             while(i<=n+1)
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
             break;
      case 2:
             
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
             printf("NULL\n");
             } 
             i++;
             }
             break;

}
choice=choice-1;
scanf("%d",&choice);
}

} 
