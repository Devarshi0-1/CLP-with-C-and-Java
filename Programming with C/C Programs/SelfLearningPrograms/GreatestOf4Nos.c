#include<stdio.h>
int main()
{
    float Num1, Num2 , Num3, Num4;
    printf("Enter the first number\n");
    scanf("%f", &Num1);
    printf("Enter the second number\n");
    scanf("%f", &Num2);
    printf("Enter the third number\n");
    scanf("%f", &Num3);
    printf("Enter the fourth number\n");
    scanf("%f", &Num4);
    if(Num1==Num2 || Num2==Num3 || Num3==4 || Num4==Num1)
    {
    printf("Two or more numbers entered are equal\n");
    }
    else if(Num1>Num2 && Num1>Num3 && Num1>Num4)
    {
        printf("First Number is the Greatest of numbers entered\n");
    }
    else if(Num2>Num1 && Num2>Num3 && Num2>Num4)
    {
        printf("Second Number is the Greatest of numbers entered\n");
    }
    else if(Num3>Num1 && Num3>Num2 && Num3>Num4)
    {
        printf("Third Number is the Greatest of the numbers entered\n");
    }
    else if(Num4> Num1 && Num4>Num2 && Num4>Num3)
    {
        printf("Fourth number is the Greatest of the numbers entered\n");
    }
    
    return 0;
}