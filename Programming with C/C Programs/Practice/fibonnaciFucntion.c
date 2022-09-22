#include <stdio.h>
double fib(double f);
int main()
{
    int size = 0, counter;
    int f = 0;
    printf("How many elements you want to see in fib series?\n");
    scanf("%d", &size);
    for (counter = 1; counter <= size; counter++)
    {
        printf("%.0lf ", fib(f));
        f++;
    }
    return 0;
}
double fib(double f)
{
    if (f == 0 || f == 1)
        return f;
    else
        return (fib(f - 1) + fib(f - 2));
}