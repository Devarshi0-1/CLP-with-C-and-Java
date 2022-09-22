#include<stdio.h>
int main()
{
    float Principal , Rate , Years;
    printf("Enter the Principal\n");
    scanf("%f", &Principal);
    printf("Enter the value of rate\n");
    scanf("%f", &Rate);
    printf("Enter the time period in Years\n");
    scanf("%f", &Years);
    printf("The simple intrest is %f\n", Principal*Rate*Years/100);
    printf("The amount is %f\n", Principal + (Principal*Rate*Years/100));
    return 0;

}