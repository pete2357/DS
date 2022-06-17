#include<stdio.h>

void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int size)
{
    for(int step = 0; step < size - 1; step++)
    {
        int min_idx = step;
        for(int i = step + 1; i < size; i++)
        {
            if(arr[i]<arr[min_idx])
            min_idx = i;
        }
        swap(&arr[min_idx], &arr[step]);
    }
}
void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
int main()
{
    int data[]={20,12,10,15,2};
    int size = sizeof(data) / sizeof(data[0]);
    selectionSort(data, size);
    printf("Sorted array in ascending order: \n");
    printArray(data, size);
}