#include <stdio.h>
int main()
{
    int counter, size, found = 0;
    float search;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    float array[size];
    for (counter = 0; counter < size; counter++)
    {
        printf("The element number %d:  ", counter + 1);
        scanf("%f", &array[counter]);
    }
    printf("Which element do you want to search in the array: ");
    scanf("%f", &search);
    printf("The Computer is searching for the element %f in the array....\n", search);
    for (counter = 0; counter < size; counter++)
    {
        if (search == array[counter])
            ;
        found = 1;
        printf("The element that you were searching is found in array");
        break;
    }
    if (found == 0)
        printf("The element you are searching for is not present in the array\n");
    return 0;
}