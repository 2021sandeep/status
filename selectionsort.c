#include<stdio.h>
void main()
{
       int a[10],n,i,t,j,min;
       printf("enter the size of array:");
       scanf("%d",&n);
       printf("enter elements in an array:");
       for(i=0;i<n;i++)
       {
              scanf("%d",&a[i]);
       }
       for(i=0;i<n-1;i++)
       {
              min=i;
              for(j=i+1;j<n;j++)
              {
                     if(a[min]>a[j])
                     min=j;
              }
              if(min!=i)
              {
                     t=a[min];
                     a[min]=a[i];
                     a[i]=t;
              }
       }
       printf("sorted array is\n:");
       for(i=0;i<n;i++)
       {
              printf("%d",a[i]);
       }
}

