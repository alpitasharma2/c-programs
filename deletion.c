#include<stdio.h>


void display(int arr[], int n){
    // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void indDeletion(int arr[], int n, int index, int capacity,int element)
{
    // code for Deletion
    for (int i = index; i < n-1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main(){
    int arr[100],element,index,n,i; //= {7, 8, 12, 27, 88};
    printf("enter the number of elements ");
        scanf("%d",&n);
        printf("enter the elements in an array: ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    display(arr, n);
    printf("enter the element you want to delete: ");
    scanf("%d",&element);
    printf("enter the index at which you want to delete that element:");
    scanf("%d",&index);
    indDeletion(arr, n, index, 100, element);
    n -= 1;
    display(arr, n);
    return 0;
}
