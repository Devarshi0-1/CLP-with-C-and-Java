#include <stdio.h>
int digits(unsigned long long int num);
int main()
{
    long long int num;
    printf("Enter the number\n");
    scanf("%llu",&num);
    int count = digits(num);
    printf("The number of digits in %llu are : %d\n",num,count);
    return 0;
}
int digits(unsigned long long int num)
{
    static int count = 0;
    if(num>0)
    {
        count++;
        digits(num/10);
    }
    else
    {
        return count;
    }
}