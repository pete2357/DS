#include<stdio.h>
void bubbleSort(int arr[], int size)
{
    for(int step=0; step<size-1;++step)
    {
        for(int i=0; i<size-step-1;++i)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i]=arr[i];
                arr[i]=arr[i+1];
                arr[i]=temp;
            }
        }
    }
}
void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
int main()
{
    int data[]={-2,45,0,11,-9};
    int size=sizeof(data)/sizeof(data[0]);
    bubbleSort(data,size);
    printf("Sorted Array in Ascending Order: \n");
    printArray(data,size);
}