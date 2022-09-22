#include <stdio.h>
int main()
{
    int size, counter, positive=0, negative=0, zero=0;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    int array[size];
    printf("Enter the contents of the array:\n");
    for (counter = 0; counter < size; counter++)
    {
        scanf("%d", &array[counter]);
    }
    for (counter = 0; counter < size; counter++)
    {
        if (array[counter] > 0)
        {
            positive++;
        }
        else if (array[counter] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }
    printf("+VE elements in the array are: %d\n",positive);
    printf("-VE elements in the array are: %d\n",negative);
    printf("Number of Zeros in the array are: %d\n",zero);
    return 0;
}