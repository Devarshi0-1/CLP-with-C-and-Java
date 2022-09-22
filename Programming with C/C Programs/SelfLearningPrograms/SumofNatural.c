#include<stdio.h>
int main()
{
    int n,i;
    printf("How mant natural numbers you want to see?\n");
    scanf("%d",&i);
    printf("The natural numbers are\n");
    for(n=1;n<=i;n++)
    {
        printf("%d\n",n);
    }
    return 0;
}