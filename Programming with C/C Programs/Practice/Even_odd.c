#include<stdio.h>
int main()
{
    int Num;
    printf("Enter the number:\t");
    scanf("%d",&Num);
    if(Num%2==0)
    printf("Number is even");
    else
    printf("Number is odd");
    return 0;
}