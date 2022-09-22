#include <stdio.h>
int ptrarray(int *ptr_arr,int size1);
int main()
{
    int size;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array\n");
    for(int counter=0;counter<size;counter++)
    {
        scanf("%d", &arr[counter]);
    }
    ptrarray(&arr,size);
    return 0;
}

int ptrarray(int *ptr_arr,int size1)
{
    printf("Elements of the array are:\n");
    for(int counter = 0;counter < size1;counter++)
    {
        printf("[%d]  ",*(ptr_arr));
        ptr_arr++;
    }
    return 0;
}