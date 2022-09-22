#include<stdio.h>
int main()
{
    int n, i , result , sum;
    printf("Enter the number you want you see the sum of results of\n");
    scanf("%d", &n);
    for(i=1;i<=10;++i)
    {
        result=n*i;
        sum=sum +result;
    }
    printf("The sum of the table is %d\n",sum);
    return 0;
}