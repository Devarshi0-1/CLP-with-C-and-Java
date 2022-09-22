#include<stdio.h>
int change(int *n);
void main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Changed value of number is %d",change(&n));
}
int change(int *n)
{
    return (10)*(*n);
}