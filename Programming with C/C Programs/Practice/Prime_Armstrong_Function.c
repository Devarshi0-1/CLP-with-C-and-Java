#include <stdio.h>
void armstrong(int x);
void prime(int y);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    armstrong(num);
    return 0;
}
void armstrong(int x)
{
    int temp = x, r, c, sum = 0;
    while (x > 0)
    {
        r = x % 10;
        c = r * r * r;
        sum = sum + c;
        x = x / 10;
    }
    x = temp;
    if (x == sum)
    {
        printf("Armstrong number\n");
    }
    else
    {
        printf("Not an armstrong number\n");
    }
    prime(x);
}
void prime(int y)
{
    int f = 0;
    for (int counter = 1; counter <= y; counter++)
    {
        if (y % counter == 0)
            f++;
    }
    if (f == 2)
        printf("Prime number\n");
    else 
        printf("Not a prime number\n");
}
