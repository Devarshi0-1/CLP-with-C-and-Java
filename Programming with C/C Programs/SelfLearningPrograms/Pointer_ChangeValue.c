#include<stdio.h>
int change(int *c);
int main()
{
    int X;
    printf("Enter the value of X\n");
    scanf("%d",&X);
    printf("The value of X before change is: %d\n",X);
    printf("The address of X is: %u\n",&X);
    change(&X);
    return 0;
}
int change(int *c)
{
    printf("The value of X after change is %d", *c *10);
    return 0;
}