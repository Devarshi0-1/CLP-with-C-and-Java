#include <stdio.h>
int main()
{
    int counter, counter2, size;
    printf("Size of the pattern?\n");
    scanf("%d", &size);
    for (counter = 0; counter <= size; counter++)
    {
        for (counter2 = size; counter2 < size + counter; counter2++)
        {
            printf("%d ", counter);
        }
        printf("\n");
    }
    return 0;
}