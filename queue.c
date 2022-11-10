#include<stdio.h>
#include<stdlib.h>
#define Max 5
int q[Max],front=-1,rear=-1;
void enqueue();
void dequeue();
void disp();
int main()
{
       int ch;
       printf("\n 1.enqueue");
       printf("\n 2.dequeue");
       printf("\n 3.disp");
       while(1)
       {
              printf("\n enter choicd:");
              scanf("%d",&ch);
              switch(ch)
              {
                     case 1:
                         enqueue();
                          break;
                     case 2:
                          dequeue();
                          break;
                     case 3:
                          disp();
                          break;
                     case 4:
                          exit(0);
                     default:
                        printf("wrong choce");
                     
              }
       }
}
void enqueue()
{
       int data;
       if(rear==Max-1)
       {
              printf("overflow");
              
       }
       else
       {
              if(front==-1)
              {
                     front=0;
              }
              printf("enter the value:");
              scanf("%d",&data);
              rear++;
              q[rear]=data;
       }
}
void dequeue()
{
       if(front==-1 || fron>rear)
       {
              printf("\n underflow");
              
       }
       else
       {
              printf("\n dequed%d",q[fron]);
              front++;
       }
       
}


void disp()
{
       int i;
       if(front==-1)
       {
              printf("\n queue is empaty");
              
       }
       else
       {
              printf("enter value");
              for(i=front;i<=rear;i++)
              {
                     printf("\n%d",q[i]);
              }
       }
}

