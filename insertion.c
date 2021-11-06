#include<stdio.h>


void display(int arr[], int n){
    // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int n, int element, int capacity, int index){
    // code for Insertion
    if(n>=capacity){
        return -1;
    }
    for (int i = n-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
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
    printf("enter the element you want to insert: ");
    scanf("%d",&element);
    printf("enter the index at which you want to insert that element:");
    scanf("%d",&index);
    indInsertion(arr, n, element, 100, index);
    n +=1;
    display(arr, n);
    return 0;
}
