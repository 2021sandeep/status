#include<stdio.h>
#include<stdlib.h>
struct node
{
       int info;
       struct node *link;
};
struct node *emplist(struct node *start,int data);
struct node *beg(struct node *start,int data);
struct node *end(struct node *start,int data);
struct node *nposition(struct node *start,int data,int posistion);
void disp(struct node *start);

int main()
{
       struct node *start=NULL;
       int ch,data,posistion;
       while(1)
       {
              printf("1.insert in an empty list\n");
              printf("2.insert at begining\n");
              printf("3.insert at end\n");
              printf("4.insert at nth posistion\n");
              printf("5.display\n");
              printf("6.end program");
              
              printf("enter choice:");
              scanf("%d",&ch);
              switch(ch)
              {
                     case 1:
                     if(start!=NULL)
                     {
                            printf("list is not empty\n");
                            break;
                     }
                     printf("enter element:");
                     scanf("%d",&data);
                     start=emplist(start,data);
                     break;
                     case 2:
                     printf("enter element:");
                     scanf("%d",&data); 
                     start=beg(start,data);
                     break;
                     case 3:
                     printf("enter elements:");
                     scanf("%d",&data);
                     start=end(start,data);
                     break;
                     case 4:
                     printf("enter elments:");
                     scanf("%d",&data);
                     printf("enter posistion:");
                     scanf("%d",&posistion);
                     start=nposition(start,data,posistion);
                     break;
                     case 5:
                     disp(start);
                     break;
                     case 6:
                     exit(0);
                     default:
                     printf("wrong choice:");
              }
       }
       
       
       struct node *emplist(struct node *start,int data)
       {
              struct node *temp;
              temp=(struct node *)malloc(sizeof(struct node));
              temp->info=data;
              temp->link=start;
              start=temp;
              return start;
       }
       struct node *beg(struct node *start,int data)
       {
              struct node *temp;
              temp=(struct node *)malloc(sizeof(struct node));
              temp->info=data;
              temp->link=start;
              start=temp;
              return start;
       }
       struct node *end(struct node *start,int data)
       {
              struct node *p,*temp;
              temp=(struct node *)malloc(sizeof(struct node));
              temp->info=data;
              p=start;
              while(p->link!=NULL)
              {
                     p=p->link;
                     
              }
              p->link=temp;
              temp->link=NULL;
              return start;
       }
       
       struct node * nposition(struct node *start,int data,int posistion)
       {
              int i;
              struct node *temp,*p;
              temp=(struct node *)malloc(sizeof(struct node));
              temp->info=data;
              if(posistion==1)
              {
                     temp->link=start;
                     start=temp;
                     return start;
              }
              p=start;
              for(i=1;i<posistion-1&&p!=NULL;i++)
              {
                     p->link;
              }
              if(p==NULL)
              {
                     printf("there is less than %d element",posistion);
              }
              else
              {
                     temp->link=p->link;
                     p->link=temp;
              }
              return start;
       }
       void disp(struct node *start)
       {
              struct node *p;
              if(start==NULL)
              {
                     printf("list is empty");
              }
              else
              {
                     p=start;
                     printf("list:\n");
                     while(p!=NULL)
                     {
                            printf("%d\t",p->info);
                            p=p->link;
                     }
                     printf("\n");
              }
       }
}
