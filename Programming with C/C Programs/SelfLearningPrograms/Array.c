#include <stdio.h>
int main()
{
    int i, marks[5];
    for (i = 0; i < 5; i++)
    {
        printf("Enter the marks of the student %d\n", i+1);
        scanf("%d", &marks[i]);
    }
    printf("The marks of all the five students are %d\t%d\t%d\t%d\t%d",marks[0], marks[1], marks[2], marks[3], marks[4]);
    return 0;
}