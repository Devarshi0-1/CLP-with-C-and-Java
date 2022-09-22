#include<stdio.h>
int main()
{
    int n,i,result;
    printf("Enter the number you want you see the reverse table of\n");
    scanf("%d", &n);
    printf("The reverse table of %d is \n", n);
    for(i=10;i>=1 && i<=10; --i)
    {
        result=i*n;
        printf("%d x %d = %d\n", n,i,result);
    }
    return 0;
}