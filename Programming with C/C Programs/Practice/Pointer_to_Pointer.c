#include<stdio.h>
int main()
{
    int i,*ptr,**ptr_ptr;
    printf("Enter a number\n");
    scanf("%d",&i);
    ptr=&i;
    ptr_ptr=&ptr;
    printf("Uncovering value of %d from pointer to pointer\nThe value is: %d",i, **ptr_ptr);
    return 0;
}