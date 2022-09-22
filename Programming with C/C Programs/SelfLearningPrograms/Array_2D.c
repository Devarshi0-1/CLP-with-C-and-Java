#include <stdio.h>
int main()
{
    int Marks[2][2], row, column, total = 0;
    for (row = 0; row < 2; row++)
    {
        for (column = 0; column < 2; column++)
        {
            printf("Enter the Element %d%d of the Matrix\t", row + 1, column + 1);
            scanf("%d", &Marks[row][column]);
        }
    }
    printf("The values are\n");
    for (row = 0; row < 2; row++)
    {
        for (column = 0; column < 2; column++)
        {
            printf("\t%d", Marks[row][column]);
            total = total + Marks[row][column];
        }
        printf("\t%d", total);
        total = 0;
        printf("\n");
    }
    return 0;
}