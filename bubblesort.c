#include <stdio.h>
#include <stdlib.h>

int main(){
int i,j,temp,n,arr[10];
printf("enter the number of elements: ");
scanf("%d",&n);
printf("enter %d elements \n",n);

for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}

printf("sorted elements are: \n");
for(i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
return 0;
}
