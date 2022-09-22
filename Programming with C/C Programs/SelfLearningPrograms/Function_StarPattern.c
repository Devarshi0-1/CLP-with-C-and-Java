#include <stdio.h>
void printPattent(int N);
int main()
{
    int Lines;
    printf("Enter the length of your star pattern:\n");
    scanf("%d", &Lines);
    printPattern(Lines);
    return 0;
}
void printPattern(int N)
{
    if (N == 1)
    {
        printf("*\n");
        return 0;
    }
    printPattern(N - 1);
    for (int i = 0; i < (2 * N - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}