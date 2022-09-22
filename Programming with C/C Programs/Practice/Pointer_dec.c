#include <stdio.h>
int main()
{
    int num, *ptr = &num;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("The address of %d is %d",*ptr,ptr);
    return 0;
}