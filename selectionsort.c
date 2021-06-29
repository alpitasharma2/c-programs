#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,temp,pos,arr[10],n;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("enter the elements %d: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        pos=i;
        for(j=i+1;j<n;j++){
            if(arr[pos]>arr[j]){
                pos=j;
            }
            if(pos!=i){
                temp=arr[i];
                arr[i]=arr[pos];
                arr[pos]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
