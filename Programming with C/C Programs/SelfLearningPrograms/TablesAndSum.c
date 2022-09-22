#include<stdio.h>
int main()
{
    int i ,n , Result,total=0;
    printf("Enter the number you want to see the table of\n");
    scanf("%d", &n);
    for(i=1;i>=1 && i<=10; ++i)
    {
        Result=i*n;
        printf("%d x %d= %d\n",n,i,Result);
        total=total+Result;
    }
    printf("The total of all the results of the table of %d is %d", n,total);
    return 0;
}