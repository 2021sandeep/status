#include<stdio.h>
void main()
{
       int n=5,row,col,spaces;
       for(row=1;row<=n;row++)
       {
              for(spaces=1;spaces<=row-1;spaces++)
              {
                     printf(" ");
              }
              for(col=1;col<=n-row+1;col++)
              {
                     printf("* ");
              }
              printf("\n");
              
       }
       for(row=1;row<=n;row++)
       {
              for(spaces=1;spaces<=n-row-1;spaces++)
              {
                     printf(" ");
              }
              for(col=1;col<=row+1;col++)
              {
                     printf("* ");
              }
              printf("\n");
       }
              
}

