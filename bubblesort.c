#include<stdio.h>
void main()
{
       int a[10],n,i,j,t;
       printf("enter size of elements:");
       scanf("%d",&n);
       printf("enter elements:");
       for(i=0;i<n;i++)
       {
              scanf("%d",&a[i]);
       }
       for(i=0;i<n;i++)
       {
              for(j=0;j<n-i-1;j++)
              {
                     if(a[j]>a[j+1])
                     {
                            t=a[j];
                            a[j]=a[j+1];
                            a[j+1]=t;
                     }
              }
       }
       printf("sorted array:");
       for(i=0;i<n;i++)
       {
              printf("%d",a[i]);
       }
       
}
