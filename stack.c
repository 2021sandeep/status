#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size];
int top=-1;
void push()
{
       if(top==size-1)
       printf("stack is full:");
       else
       {
              int value;
              printf("enter value:");
              scanf("%d",&value);
              top++;
              stack[top]=value;
              printf("value is pushed successfully:");
       }
}
void pop()
{
       if(top==-1)
       printf("stack is empty:");
       else
       {
              top--;
              printf("value is removed ");
       }
       
}
void peek()
{
       if(top==-1)
       printf("stack is empty:");
       else
       {
              printf("peekvalue%d\n",stack[top]);
       }
}
void display()
{
       if(top==-1)
       printf("stack is empty:");
       else
       {
              int i;
              for(i=0;i<stack[i];i++)
              {
                     printf("%d",stack[i]);
              }
       }
}
void main()
{
       printf("stack implementation:");
       while(1)
       {
              int option;
              printf("choose option : 1)push 2)pop 3) peek 4)display 5)exit \n enter option :");
              scanf("%d",&option);
              if(option==1)
              push();
             // printf("push operation\n");
              
              else if(option==2)
             // printf("pop operation\n");
             pop();
              else if(option==3)
              //printf("peek operation\n");
              peek();
              else if(option==4)
              //printf("display operation\n");
              display();
              else
              break;
              
       }
       
}


