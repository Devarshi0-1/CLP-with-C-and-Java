#include<stdio.h>
void printArray(int *pointer,int n);
int main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the element number%d:\n",i+1);
        scanf("%d",&array[i]);
    }
    printArray(array,size);
    return 0;
}
void printArray(int *pointer,int n)
{
    for(int i=0; i<n;i++)
    {
        printf("The value of the element %d is %d\n", i+1,*(pointer+i));
    }
}