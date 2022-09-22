#include <stdio.h>
float maxNum(float *array, int size);
int main()
{
    int size, counter;
    float Max;
    printf("How many elements you want to enter\n");
    scanf("%d", &size);
    float array[size];
    printf("Enter the elements of the array\n");
    for (counter = 0; counter < size; counter++)
    {
        scanf("%f", &array[counter]);
    }
    Max = maxNum(array, size);
    printf("The maximum number in the array is %f", Max);
    return 0;
}
float maxNum(float *array, int size)
{
    float max = array[0];
    for (int counter = 1; counter < size; counter++)
    {
        if (max < array[counter])
        {
            max = array[counter];
        }
        if(array[counter] == array[counter+1])
        printf("2 or more elements share the same value\n");
        break;
    }
    return max;
}