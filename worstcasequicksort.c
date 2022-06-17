#include<stdio.h>
#include<stdlib.h>
void swap(int *ptr1, int *ptr2)
{
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
void reverseSort(int *ptr, int length)
{
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<length-i-1;j++)
        {
            if(*(ptr+j)<*(ptr+j+1))
            {
                swap(ptr+j,ptr+j+1);
            }
        }
    }
}
int partition(int arr[], int l, int r)
{
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[r]);
    return(i+1);
}
void quickSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int pi=partition(arr,l,r);
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
    }
}
void print(int n, int arr1[])
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr1[0]);
    }
    printf("\n");
}
void printLeast(int n, int arr1[])
{
    quickSort(arr1,0,n-1);
    printf("%d\n",arr1[0]);
}
void worstCase(int n, int arr1[])
{
    reverseSort(arr1,n);
    quickSort(arr1,0,n-1);
}
int main()
{
    int n=12;
    int a1[]={44,63,16,55,23,6,5,18,3,4,77,24};
    print(n,a1);
    quickSort(a1,0,n-1);
    print(n,a1);
    printLeast(n,a1);
    worstCase(n,a1);
}