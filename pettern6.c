
#include <stdio.h>

void main()
{
  int n=5,row,col;
  for(row=1;row<=n;row++)
  {
         for(col=1;col<=n-col+1;col++)
         {
                printf("* ");
         }
         printf("\n");
  }

}


