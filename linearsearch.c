#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,arr[10],data;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the data you want to find in array: ");
    scanf("%d",&data);
    for(i=0;i<n;i++)
    {
       if(arr[i]==data)
       {
           printf("element found at position %d",i);
           break;
       }
    }
    if(i==n)
    {
        printf("element not found");
    }
    return 0;
}
