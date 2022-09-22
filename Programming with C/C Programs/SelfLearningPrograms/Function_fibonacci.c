#include <stdio.h>
int fibonacci(int Num);
int main()
{
    int n, m = 0, i;
    printf("Enter Total terms:\n");
    scanf("%d", &n);
    printf("Fibonacci series of %d terms is:\n", n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", fibonacci(m));
        m++;
    }
    return 0;
}
int fibonacci(int Num)
{
    if (Num == 0 || Num == 1)
        return Num;
    else
        return (fibonacci(Num - 1) + fibonacci(Num - 2));
}