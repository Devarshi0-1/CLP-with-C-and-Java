#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    while(a%2==0 && a<=1000)
    {
        printf("%d\n", a);
        a= a+2;
    }
    return 0;
}