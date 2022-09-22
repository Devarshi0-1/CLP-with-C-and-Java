#include <stdio.h>
long long int power (int num,int exp);
int main()
{
    int num,exp;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("Enter the expnonent\n");
    scanf("%d",&exp);
    printf("Result = %lld",power(num,exp));
    return 0;
}
long long int power(int num,int exp)
{
    long long int result=1;
    for(int counter=0;counter<exp;counter++)
    {
        result = result * num;
    }
    return result;
}