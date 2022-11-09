#include<stdio.h>
void quicksort(int a[10],int lb,int ub)
{
       int i,j,temp,start,end,pivot;
       if(lb<ub)
       
              pivot=lb;
              start=lb;
              end=ub;
       while(start<end)
       {
              while(a[pivot]>=a[start])
              start++;
              while(a[end]>a[pivot])
              end--;
              
              if(start <end)
              {
                     temp=a[start];
                     a[start]=a[end];
                     a[end]=temp;
              }
              
       }
       temp=a[pivot];
       a[pivot]=a[end];
       a[end]=temp;
       
       quicksort(a,lb,end-1);
       quicksort(a,end+1,ub);
}

int main()
{
       int a[10];
       int n,i,j,lb,up;
       printf("enter no of elements :");
       scanf("%d",&n);
       printf("enter elements in array:");
       for(i=0;i<n;i++)
       {
              scanf("%d",&a[i]);
       }
       printf("after sorting:");
       for(i=0;i<n;i++)
       {
              printf("%d",a[i]);
       }
}
       
       


