#include <stdio.h>
int main()
{
    int counter, large, size;
    printf("Enter the number of values you want in your Array\n");
    scanf("%d", &size);
    int array[size];
    printf("Enter the elements of the array:\n");
    for (counter = 0; counter < size; counter++)
    {
        scanf("%d", &array[counter]);
    }
    large = array[0];
    for (counter = 1; counter < size; counter++)
    {
        if (large < array[counter])
        {
            large = array[counter];
        }
    }
    printf("The largest element in the array is %d", large);
    return 0;
}