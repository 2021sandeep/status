#include<stdio.h>
void main()
{
       int numrowa=5;
       int row,col;
       for(row=1;row<=numrowa;row++)
       {
              for(col=1;col<=row;col++)
              {
                     
                     printf("* ");
              }
              printf("\n");
       }
       
}

