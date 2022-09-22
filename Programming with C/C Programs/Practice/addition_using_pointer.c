#include <stdio.h>
int main()
{
    int n,m,*ptr,*ptr2;
    ptr = &n ; 
    ptr2 = &m;
    printf("Enter two numbers to add\n");
    scanf("%d\n%d",ptr,ptr2);
    printf("%d + %d = %d\n",*ptr,*ptr2,*ptr + *ptr2);
    return 0;
}