#include <stdio.h>
int numPrint(int num);
int main()
{
    int num = 1;
    printf("\n\n Recursion : print first 50 natural numbers :\n");
    printf("-------------------------------------------------\n");
    printf(" The natural numbers are :");
    numPrint(num);
    printf("\n\n");
    return 0;
}
int numPrint(int num)
{
    if (num <= 100)
    {
        printf(" %d ", num);
        numPrint(num + 1);
    }
}