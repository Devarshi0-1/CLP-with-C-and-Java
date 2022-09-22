#include<stdio.h>
void sum(float Num3,float Num4);
void difference(float Num5,float Num6);
void times(float Num7, float Num8);
void division(float Num9,float Num10);
int main()
{
    float Num1=0,Num2=0;
    char operator= 0;
    printf("Enter the Number1 Operator Number2\n");
    scanf("%f\t%c\t%f",&Num1,&operator,&Num2);
    switch(operator)
    {
        case '+':
        sum(Num1,Num2);
        break;
        case '-':
        difference(Num1,Num2);
        break;
        case '*':
        times(Num1,Num2);
        break;
        case '/':
        division(Num1,Num2);
        break;
        default:
        printf("Wrong Input");
    }
}
void sum(float Num3,float Num4)
{
    printf("%f + %f = %f",Num3,Num4,Num3+Num4);
}
void difference(float Num5,float Num6)
{
    printf("%f - %f = %f",Num5,Num6,Num5-Num6);
}
void times(float Num7, float Num8)
{
    printf("%f * %f = %f",Num7,Num8,Num7*Num8);
}
void division(float Num9,float Num10)
{
    printf("%f / %f = %f",Num9,Num10,Num9/Num10);
}