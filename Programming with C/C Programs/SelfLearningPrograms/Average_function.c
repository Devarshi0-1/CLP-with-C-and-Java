#include<stdio.h>
float average(float Num1,float Num2,float Num3);
int main()
{
    float Num1,Num2,Num3;
    printf("Enter the 3 numbers you want to calculate the average of:\n");
    scanf("%f\n%f\n%f",&Num1,&Num2,&Num3);
    printf("The average of the three numbers is: %f",average(Num1,Num2,Num3));
    return 0;
}
float average(float Num1,float Num2,float Num3)
{
    float average= (Num1+Num2+Num3)/3;
    return average;
}
