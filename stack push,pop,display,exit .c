#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
int push();
int pop();
void display(int);
int stack[100],i,top=-1,choice,size,item,t,n,option;
void main()
{
    scanf("%d",&size);
    
    while(1)
    {   
    
        printf("\n1.push\n2.pop\n3.display\n4.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
          case 1:
          top=push();
          break;
          case 2:
          top=pop(top);
          break;
          case 3:
          display(top);
          break;
          case 4:
          exit(0);
        }
    }
}
        int push()
        {
             
         if(top==size-1)
         {
            printf("stack is full"); 
         }
         else
         {
             scanf("%d",&n);
          while(n>0)
          {   scanf("%d",&i);
              top++;
              stack[top]=i;
              n--;
          }
          }
          return top;
        }
        
       int pop(int top) 
       {	
           if(top==-1)
           {
               printf("satck is empty");
           }
           else
           {
               item=stack[top];
               top--;
           }
         return top;
       }
       void display(int top)
       {
          for(i=top;i>=0;i--)
          {
              printf("%d ",stack[i]);
          }
       }
    
