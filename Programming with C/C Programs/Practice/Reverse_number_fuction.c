#include <stdio.h>
int reverse(int number);
int main()
{
    int number, result;
    printf("Enter a posotive integer you want to reverse:\n");
    scanf("%d",&number);
    result = reverse(number);
    printf("The reverse of %d is : %d",number,result);
    return 0;
}
int reverse(int number)
{
    int sum=0,r;
    while(number>0)
    {
        r = number % 10;
        sum = sum * 10 + r;
        number = number/10;
    }
    return sum;
}