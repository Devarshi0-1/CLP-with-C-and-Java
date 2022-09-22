#include <stdio.h>
int fibonacci(int Num);
int main()
{
    int n, n1 = 0, n2 = 1, n3,i;
    char choice;
    printf("Press\nR for using Recurssion\nOR\nL for using Loop\n");
    scanf("%c", &choice);
    printf("Enter the upper limit of the series\n");
    scanf("%d", &n);
    if (choice == 'L' || choice == 'l')
    {
        for (int counter = 1; counter <= n; counter++)
        {
            printf("%d ", n1);
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
    }
    else if (choice == 'R' || choice == 'r')
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d ", fibonacci(n1));
            n1++;
        }
    }
    else
    printf("Invalid Input");
    return 0;
}
int fibonacci(int Num)
{
    if (Num == 0 || Num == 1)
        return Num;
    else
        return (fibonacci(Num - 1) + fibonacci(Num - 2));
}