#include <stdio.h>
int main()
{
    int size,counter;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements of the array\n");
    for(counter = 0;counter < size;counter++)
    {
        scanf("%d", array+counter);
    }
    printf("Elements of the array are\n");
    for(counter = 0;counter < size;counter++)
    {
        printf("[%d]  ",*(array+counter));
    }
    return 0;
}