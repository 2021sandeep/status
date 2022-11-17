#include<stdio.h>
void main()
{
       int n=5;
       int row,col;
       for(row=1;row<=n;row++)
       {
              for(col=1;col<=n-row;col++)
              {
                     printf("* ");
              }
              printf("\n");
       }
}

