#include<stdio.h>

void insert(int arr[], int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
    temp=arr[i];
    j=i-1;

    while(j>=0 && temp <= arr[j])
    {
        a[j+1] = a[j];
        j=j-1;
    }
    a[j+1]=temp;
    }
}
void printArray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    pintf("%d",arr[i]);
}
int main()
{
    int arr[]={12,31,25,8,32,17};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Before Sorting array elements are: \n");
    printArray(arr,n);
    insert(arr, n);
    printf("\nAfter sorting array elements are: \n");
    printArray(arr,n);

    return 0;
}