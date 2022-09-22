#include <stdio.h>
int main()
{
    int counter, size;
    printf("Length of the pattern will be?\n");
    scanf("%d", &size);
    for (int counter1 = 0; counter1 < size; counter1++)
    {
        for (counter = 1; counter <= size - counter1; counter++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}