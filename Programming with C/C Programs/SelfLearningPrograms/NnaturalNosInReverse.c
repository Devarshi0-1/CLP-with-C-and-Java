#include<stdio.h>
int main()
{
    int n ,i;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=n; i!=0; i--)
    {
        printf("The number is %d\n",i);
    }
    return 0;
}