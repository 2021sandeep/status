#include<stdio.h>
void main()
{
       int a[10],i,j,n,t;
       printf("enter size of array:");
       scanf("%d",&n);
       printf("enter elements in an array:");
       for(i=0;i<n;i++)
       {
              scanf("%d",&a[i]);
       }
       for(i=1;i<n;i++)
       {
              t=a[i];
              for(j=i-1;((j>=0)&&(t<a[j]));j--)
              {
                     a[j+1]=a[j];
              }
              a[j+1]=t;
       }
       printf("aftersorting:");
       for(i=0;i<n;i++)
       {
              printf("%d\n",a[i]);
       }
}


