#include<stdio.h>
void main()
{
       int n=5,row,col,count=1;
       for(row=1;row<=n;row++)
       {
              for(col=1;col<=row;col++)
              {
                     printf("%d ",count);
                     count++;
              }
              printf("\n");
       }
       
}

